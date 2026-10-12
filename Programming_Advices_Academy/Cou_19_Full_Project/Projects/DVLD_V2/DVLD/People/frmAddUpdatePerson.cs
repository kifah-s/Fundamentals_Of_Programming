using DVLD.Global_Classes;
using DVLD.Properties;
using DVLD_Business;
using System.Data;

namespace DVLD.People
{
    public partial class frmAddUpdatePerson : Form
    {
        // Declare delegate.
        public delegate void DataBackEventHandler(object sender, int personID);

        // Declare an event using the delegate.
        public event DataBackEventHandler DataBack;

        public enum enMode { addNew = 0, update = 1 };
        public enum enGendor { male = 0, female = 1 };

        private enMode _mode;

        private int _personID = -1;

        clsPerson _Person;

        public frmAddUpdatePerson()
        {
            InitializeComponent();

            _mode = enMode.addNew;
        }

        public frmAddUpdatePerson(int personID)
        {
            InitializeComponent();

            _mode = enMode.update;
            _personID = personID;
        }

        private void _FillCountriesInComboBox()
        {
            DataTable dtCountries = clsCountry.GetAllCountries();

            foreach (DataRow row in dtCountries.Rows)
            {
                cbCountry.Items.Add(row["CountryName"]);
            }
        }

        // This function initialize the reset the default values.
        private void _ResetDefaultValue()
        {
            // Fill Countries.
            _FillCountriesInComboBox();

            // Set title "Add or Update".
            if (_mode == enMode.addNew)
            {
                lblTitle.Text = "Add New Person";
                _Person = new clsPerson();
            }
            else
            {
                lblTitle.Text = "Update Person";
            }


            // Hide / Show the remove image button in case there is no image for the person.
            btnRemoveImage.Visible = (pbPersonImage.ImageLocation != null);

            // We set the max date to 18 years from today, and set the default value the same.
            dtpDateOfBirth.MaxDate = DateTime.Now.AddYears(-18);
            dtpDateOfBirth.Value = dtpDateOfBirth.MaxDate;

            // Should not allow adding age more than 100 years.
            dtpDateOfBirth.MinDate = DateTime.Now.AddYears(-100);

            // This will set default country to syria.
            cbCountry.SelectedIndex = cbCountry.FindString("syria");

            txtFirstName.Text = "";
            txtSecondName.Text = "";
            txtThirdName.Text = "";
            txtLastName.Text = "";
            txtNationalNo.Text = "";

            rbMale.Checked = true;
            // Set default image for the person.
            if (rbMale.Checked)
            {
                pbPersonImage.Image = Resources.businessman;
            }
            else
            {
                pbPersonImage.Image = Resources.woman;
            }

            txtPhone.Text = "";
            txtEmail.Text = "";
            txtAddress.Text = "";
        }

        private void _LoadData()
        {
            _Person = clsPerson.Find(_personID);

            if (_Person == null)
            {
                MessageBox.Show("No Person with ID: " + _personID, "Person Not Found", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                this.Close();
                return;
            }

            // The following code will not be executed if the person was not found.
            lblPersonID.Text = _personID.ToString();

            txtFirstName.Text = _Person.firstName;
            txtSecondName.Text = _Person.secondName;
            txtThirdName.Text = _Person.thirdName;
            txtLastName.Text = _Person.lastName;
            txtNationalNo.Text = _Person.nationalNo;
            dtpDateOfBirth.Value = _Person.dateOfBirth;

            if (_Person.gendor == 0)
            {
                rbMale.Checked = true;
            }
            else
            {
                rbFemale.Checked = true;
            }

            txtAddress.Text = _Person.address;
            txtPhone.Text = _Person.phone;
            txtEmail.Text = _Person.email;
            cbCountry.SelectedIndex = cbCountry.FindString(_Person.countryInfo.countryName);

            // Load person image incase it was set.
            if (_Person.imagePath != "")
            {
                pbPersonImage.ImageLocation = _Person.imagePath;
            }


            // Hide / Show the remove image button in case there is no image for the person.
            btnRemoveImage.Visible = (_Person.imagePath != null);
        }

        private bool _HandlePersonImage()
        {
            /*
            This procedure will handle the person image,
            it will take care of deleting the old image from the folder,
            in case the image changed,
            and it will rename the new image with guid and place it in the images folder.
            */

            // _Person.ImagePath contains the old Image, we check if it changed then we copy the new image.

            if (_Person.imagePath != pbPersonImage.ImageLocation)
            {
                if (_Person.imagePath != "")
                {
                    // First we delete the old image from the folder in case there is any.
                    try
                    {
                        File.Delete(_Person.imagePath);
                    }
                    catch (IOException)
                    {
                        // We could not delete the file.
                        // Log it later.
                    }
                }

                if (pbPersonImage.ImageLocation != null)
                {
                    // Then we copy the new image to the image folder after we rename it.
                    string sourceImageFile = pbPersonImage.ImageLocation.ToString();

                    if (clsUtil.CopyImageToProjectImagesFolder(ref sourceImageFile))
                    {
                        pbPersonImage.ImageLocation = sourceImageFile;
                        return true;
                    }
                    else
                    {
                        MessageBox.Show("Error Copying Image File", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        return false;
                    }
                }
            }

            return true;
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            if (!this.ValidateChildren())
            {
                // Here we don't continue because the form is not valid.
                MessageBox.Show("Some fields are not valid!, put the mouse over the red icon(s) to see the error", "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                return;
            }

            if (!_HandlePersonImage())
            {
                return;
            }

            int nationalityCountryID = clsCountry.Find(cbCountry.Text).countryID;

            _Person.firstName = txtFirstName.Text.Trim();
            _Person.secondName = txtSecondName.Text.Trim();
            _Person.thirdName = txtThirdName.Text.Trim();
            _Person.lastName = txtLastName.Text.Trim();

            _Person.nationalNo = txtNationalNo.Text.Trim();
            _Person.email = txtEmail.Text.Trim();
            _Person.phone = txtPhone.Text.Trim();
            _Person.address = txtAddress.Text.Trim();

            _Person.dateOfBirth = dtpDateOfBirth.Value;

            if (rbMale.Checked)
            {
                _Person.gendor = (short)enGendor.male;
            }
            else
            {
                _Person.gendor = (short)enGendor.female;
            }

            _Person.nationalityCountryID = nationalityCountryID;

            if (pbPersonImage.ImageLocation != null)
            {
                _Person.imagePath = pbPersonImage.ImageLocation;
            }
            else
            {
                _Person.imagePath = "";
            }

            if (_Person.Save())
            {
                lblPersonID.Text = _Person.personID.ToString();

                // Change form mode to update.
                _mode = enMode.update;
                lblTitle.Text = "Update Person";

                MessageBox.Show("Data Saved Successfully.", "Saved", MessageBoxButtons.OK, MessageBoxIcon.Information);

                // Trigger the event to send data back to the caller form.
                DataBack?.Invoke(this, _Person.personID);
            }
            else
            {
                MessageBox.Show("Error: Data Is not Saved Successfully.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void rbMale_Click(object sender, EventArgs e)
        {
            // Change the default image to male incase there is no image set.
            if (pbPersonImage.ImageLocation == null)
            {
                pbPersonImage.Image = Resources.businessman;
            }
        }

        private void rbFemale_Click(object sender, EventArgs e)
        {
            // Change the default image to female incase there is no image set.
            if (pbPersonImage.ImageLocation == null)
            {
                pbPersonImage.Image = Resources.woman;
            }
        }

        private void btnSetImage_Click(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";
            openFileDialog1.FilterIndex = 1;
            openFileDialog1.RestoreDirectory = true;

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                // Process the selected file.
                string selectedFilePath = openFileDialog1.FileName;
                pbPersonImage.Load(selectedFilePath);
                btnRemoveImage.Visible = true;
                // ......
            }
        }

        private void frmAddUpdatePerson_Load(object sender, EventArgs e)
        {
            _ResetDefaultValue();

            if (_mode == enMode.update)
            {
                _LoadData();
            }
        }
    }
}
