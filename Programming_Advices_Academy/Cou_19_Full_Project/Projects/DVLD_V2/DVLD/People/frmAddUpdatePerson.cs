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

            // Set default image for the person.
            if (rbMale.Checked)
            {
                pbPersonImage.Image = Resources.businessman;
            }
            else
            {
                pbPersonImage.Image = Resources.woman;
            }


        }

        private void frmAddUpdatePerson_Load(object sender, EventArgs e)
        {
            _ResetDefaultValue();

            //    //if (_Mode == enMode.Update)
            //    //    _LoadData();
        }


    }
}
