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
