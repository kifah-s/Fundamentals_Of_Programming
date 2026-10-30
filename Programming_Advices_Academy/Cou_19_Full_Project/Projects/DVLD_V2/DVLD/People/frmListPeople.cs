using DVLD_Business;
using System.Data;

namespace DVLD.People
{
    public partial class frmListPeople : Form
    {
        private static DataTable _dtAllPeople = clsPerson.GetAllPeople();

        // Only select the columns that you want to show in the grid.
        private DataTable _dtPeople = _dtAllPeople.DefaultView.ToTable(false, "PersonID", "NationalNo", "FirstName", "SecondName", "ThirdName", "LastName", "GendorCaption", "DateOfBirth", "CountryName", "Phone", "Email");

        private void _RefreshPeopleList()
        {
            _dtAllPeople = clsPerson.GetAllPeople();
            _dtPeople = _dtAllPeople.DefaultView.ToTable(false, "PersonID", "NationalNo", "FirstName", "SecondName", "ThirdName", "LastName", "GendorCaption", "DateOfBirth", "CountryName", "Phone", "Email");

            dgvPeople.DataSource = _dtPeople;
            lblRecordsCount.Text = dgvPeople.Rows.Count.ToString();
        }

        public frmListPeople()
        {
            InitializeComponent();
        }


    }
}
