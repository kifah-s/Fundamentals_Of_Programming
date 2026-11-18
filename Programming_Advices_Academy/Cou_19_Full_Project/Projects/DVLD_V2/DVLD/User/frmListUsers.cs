using DVLD_Business;
using System.Data;

namespace DVLD.User
{
    public partial class frmListUsers : Form
    {
        private static DataTable _dtAllUsers;

        public frmListUsers()
        {
            InitializeComponent();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void frmListUsers_Load(object sender, EventArgs e)
        {
            _dtAllUsers = clsUser.GetAllUsers();

            dgvUsers.DataSource = _dtAllUsers;

            cbFilterBy.SelectedIndex = 0;

            lblRecordsCount.Text = dgvUsers.Rows.Count.ToString();

            dgvUsers.Columns[0].HeaderText = "User ID";
            dgvUsers.Columns[0].Width = 110;

            dgvUsers.Columns[1].HeaderText = "Person ID";
            dgvUsers.Columns[1].Width = 120;

            dgvUsers.Columns[2].HeaderText = "Full Name";
            dgvUsers.Columns[2].Width = 350;

            dgvUsers.Columns[3].HeaderText = "User Name";
            dgvUsers.Columns[3].Width = 120;

            dgvUsers.Columns[4].HeaderText = "Is Active";
            dgvUsers.Columns[4].Width = 120;
        }

        private void cbFilterBy_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cbFilterBy.Text == "Is Active")
            {
                txtFilterValue.Visible = false;

                cbIsActive.Visible = true;
                cbIsActive.Focus();
                cbIsActive.SelectedIndex = 0;
            }
            else
            {
                txtFilterValue.Visible = (cbFilterBy.Text != "None");

                cbIsActive.Visible = false;

                if (cbFilterBy.Text == "None")
                {
                    txtFilterValue.Enabled = false;
                }
                else
                {
                    txtFilterValue.Enabled = true;
                }

                txtFilterValue.Text = "";
                txtFilterValue.Focus();
            }
        }

        private void txtFilterValue_TextChanged(object sender, EventArgs e)
        {
            string filterColumn = "";

            // Map Selected Filter to real Column name.
            switch (cbFilterBy.Text)
            {
                case "User ID":
                    {
                        filterColumn = "UserID";
                        break;
                    }

                case "User Name":
                    {
                        filterColumn = "UserName";
                        break;
                    }

                case "Person ID":
                    {
                        filterColumn = "PersonID";
                        break;
                    }

                case "Full Name":
                    {
                        filterColumn = "FullName";
                        break;
                    }

                default:
                    {
                        filterColumn = "None";
                        break;
                    }
            }

            // Reset the filters in case nothing selected or filter value contains nothing.
            if (txtFilterValue.Text.Trim() == "" || filterColumn == "None")
            {
                _dtAllUsers.DefaultView.RowFilter = "";

                lblRecordsCount.Text = dgvUsers.Rows.Count.ToString();


                return;
            }

            if (filterColumn != "FullName" && filterColumn != "UserName")
            {
                // In this case we deal with numbers not string.
                _dtAllUsers.DefaultView.RowFilter = string.Format("[{0}] = {1}", filterColumn, txtFilterValue.Text.Trim());
            }
            else
            {
                _dtAllUsers.DefaultView.RowFilter = string.Format("[{0}] LIKE '{1}%'", filterColumn, txtFilterValue.Text.Trim());
            }

            lblRecordsCount.Text = _dtAllUsers.Rows.Count.ToString();
        }

        private void cbIsActive_SelectedIndexChanged(object sender, EventArgs e)
        {
            string filterColumn = "IsActive";
            string filterValue = cbIsActive.Text;

            switch (filterValue)
            {
                case "All":
                    {
                        break;
                    }

                case "Yes":
                    {
                        filterValue = "1";
                        break;
                    }

                case "No":
                    {
                        filterValue = "0";
                        break;
                    }
            }

            if (filterValue == "All")
            {
                _dtAllUsers.DefaultView.RowFilter = "";
            }
            else
            {
                // In this case we deal with numbers not string.
                _dtAllUsers.DefaultView.RowFilter = string.Format("[{0}] = {1}", filterColumn, filterValue);
            }

            lblRecordsCount.Text = _dtAllUsers.Rows.Count.ToString();
        }
    }
}
