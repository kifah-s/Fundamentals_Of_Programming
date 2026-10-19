using DVLD.Properties;
using DVLD_Business;

namespace DVLD.People.Controls
{
    public partial class ctrlPersonCard : UserControl
    {
        private clsPerson _Person;

        private int _personID = -1;

        public int personID
        {
            get { return _personID; }
        }

        public clsPerson SelectedPersonInfo
        {
            get { return _Person; }
        }

        public ctrlPersonCard()
        {
            InitializeComponent();
        }

        public void ResetPersonInfo()
        {
            _personID = -1;
            lblPersonID.Text = "[?????]";
            lblNationalNO.Text = "[?????]";
            lblFullName.Text = "[?????]";
            lblGendor.Text = "[?????]";
            lblEmail.Text = "[????]";
            lblPhone.Text = "[????]";
            lblDateOfBirth.Text = "[????]";
            lblCountry.Text = "[????]";
            lblAddress.Text = "[????]";
            pbPersonImage.Image = Resources.businessman;
        }

        private void _LoadPersonImage()
        {
            if (_Person.gendor == 0)
            {
                pbPersonImage.Image = Resources.businessman;
            }
            else
            {
                pbPersonImage.Image = Resources.woman;
            }

            string imagePath = _Person.imagePath;
            if (imagePath != "")
            {
                if (File.Exists(imagePath))
                {
                    pbPersonImage.ImageLocation = imagePath;
                }
                else
                {
                    MessageBox.Show("Could not find this image: = " + imagePath, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void _FillPersonInfo()
        {
            btnEditPersonInfo.Enabled = true;
            _personID = _Person.personID;
            lblPersonID.Text = _Person.personID.ToString();
            lblNationalNO.Text = _Person.nationalNo;
            lblFullName.Text = _Person.fullName;
            lblGendor.Text = _Person.gendor == 0 ? "Male" : "Female";
            lblEmail.Text = _Person.email;
            lblPhone.Text = _Person.phone;
            lblDateOfBirth.Text = _Person.dateOfBirth.ToShortDateString();
            lblCountry.Text = clsCountry.Find(_Person.nationalityCountryID).countryName;
            lblAddress.Text = _Person.address;

            _LoadPersonImage();
        }

        public void LoadPersonInfo(int personID)
        {
            _Person = clsPerson.Find(personID);

            if (_Person == null)
            {
                ResetPersonInfo();
                MessageBox.Show("No Person with PersonID = " + personID.ToString(), "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            _FillPersonInfo();
        }

        public void LoadPersonInfo(string nationalNO)
        {
            _Person = clsPerson.Find(nationalNO);

            if (_Person == null)
            {
                ResetPersonInfo();
                MessageBox.Show("No Person with National No = " + personID.ToString(), "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            _FillPersonInfo();
        }

        private void btnEditPersonInfo_Click(object sender, EventArgs e)
        {
            frmAddUpdatePerson frm = new frmAddUpdatePerson(_personID);
            frm.ShowDialog();

            // Refresh.
            LoadPersonInfo(_personID);
        }
    }
}
