using DVLD_Business;

namespace DVLD.User
{
    public partial class frmAddUpdateUser : Form
    {
        public enum enMode { addNew = 0, update = 1 };
        private enMode _mode;

        private int _userID = -1;

        clsUser _User;

        public frmAddUpdateUser()
        {
            InitializeComponent();

            _mode = enMode.addNew;
        }

        public frmAddUpdateUser(int userID)
        {
            InitializeComponent();

            _mode = enMode.update;

            _userID = userID;
        }

        private void _ResetDefaultValues()
        {
            // This will initialize the reset the default values.
            if (_mode == enMode.addNew)
            {
                lblTitle.Text = "Add New User";

                this.Text = "Add New User";

                _User = new clsUser();

                tpLoginInfo.Enabled = false;

                ctrlPersonCardWithFilter1.FilterFocus();
            }
            else
            {
                lblTitle.Text = "Update User";

                this.Text = "Update User";

                tpLoginInfo.Enabled = true;

                btnSave.Enabled = true;
            }

            txtUserName.Text = "";
            txtPassword.Text = "";
            txtConfirmPassword.Text = "";
            chkIsActive.Checked = true;
        }

        private void _LoadData()
        {
            _User = clsUser.FindByUserID(_userID);

            ctrlPersonCardWithFilter1.FilterEnabled = false;

            if (_User == null)
            {
                MessageBox.Show("No User With ID: " + _User, "User Not Found", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);

                this.Close();

                return;
            }

            // The following code will not be executed if the person was not found.
            lblUserID.Text = _User.userID.ToString();
            txtUserName.Text = _User.userName;
            txtPassword.Text = _User.password;
            txtConfirmPassword.Text = _User.password;
            chkIsActive.Checked = _User.isActive;
            ctrlPersonCardWithFilter1.LoadPersonInfo(_User.personID);
        }

        private void frmAddUpdateUser_Load(object sender, EventArgs e)
        {
            _ResetDefaultValues();

            if (_mode == enMode.update)
            {
                _LoadData();
            }
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            if (!this.ValidateChildren())
            {
                // Here we don't continue because the form is not valid.
                MessageBox.Show("Some fields are not valid!, put the mouse over the red icon(s) to see the error", "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                return;
            }

            _User.personID = ctrlPersonCardWithFilter1.PersonID;
            _User.userName = txtUserName.Text.Trim();
            _User.password = txtPassword.Text.Trim();
            _User.isActive = chkIsActive.Checked;

            if (_User.Save())
            {
                lblUserID.Text = _User.userID.ToString();

                // Change form mode to update.
                _mode = enMode.update;
                lblTitle.Text = "Update User";
                this.Text = "Update User";

                MessageBox.Show("Data Saved Successfully.", "Saved", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Error: Data Is not Saved Successfully.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void txtConfirmPassword_Validating(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (txtConfirmPassword.Text.Trim() != txtPassword.Text.Trim())
            {
                e.Cancel = true;
                errorProvider1.SetError(txtConfirmPassword, "Password Confirmation does not match Password!");
            }
            else
            {
                errorProvider1.SetError(txtConfirmPassword, null);
            }
        }

        private void txtPassword_Validating(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (string.IsNullOrEmpty(txtPassword.Text.Trim()))
            {
                e.Cancel = true;
                errorProvider1.SetError(txtPassword, "Password cannot be blank");
            }
            else
            {
                errorProvider1.SetError(txtPassword, null);
            }
        }

        private void txtUserName_Validating(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (string.IsNullOrEmpty(txtUserName.Text.Trim()))
            {
                e.Cancel = true;

                errorProvider1.SetError(txtUserName, "Username cannot be blank");

                return;
            }
            else
            {
                errorProvider1.SetError(txtUserName, null);
            }

            if (_mode == enMode.addNew)
            {
                if (clsUser.isUserExist(txtUserName.Text.Trim()))
                {
                    e.Cancel = true;

                    errorProvider1.SetError(txtUserName, "Username is used by another user");
                }
                else
                {
                    errorProvider1.SetError(txtUserName, null);
                }
            }
            else
            {
                // Incase update make sure not to use another user name.
                if (_User.userName != txtUserName.Text.Trim())
                {
                    if (clsUser.isUserExist(txtUserName.Text.Trim()))
                    {
                        e.Cancel = true;

                        errorProvider1.SetError(txtUserName, "Username is used by another user");

                        return;
                    }
                    else
                    {
                        errorProvider1.SetError(txtUserName, null);
                    }
                }
            }
        }

        private void btnPersonInfoNext_Click(object sender, EventArgs e)
        {
            if (_mode == enMode.update)
            {
                btnSave.Enabled = true;

                tpLoginInfo.Enabled = true;

                tcUserInfo.SelectedTab = tcUserInfo.TabPages["tpLoginInfo"];

                return;
            }

            // Incase of add new mode.
            if (ctrlPersonCardWithFilter1.PersonID != -1)
            {
                if (clsUser.isUserExistForPersonID(ctrlPersonCardWithFilter1.PersonID))
                {
                    MessageBox.Show("Selected Person already has a user, choose another one.", "Select another Person", MessageBoxButtons.OK, MessageBoxIcon.Error);

                    ctrlPersonCardWithFilter1.FilterFocus();
                }
                else
                {
                    btnSave.Enabled = true;

                    tpLoginInfo.Enabled = true;

                    tcUserInfo.SelectedTab = tcUserInfo.TabPages["tpLoginInfo"];
                }
            }
            else
            {
                MessageBox.Show("Please Select a Person", "Select a Person", MessageBoxButtons.OK, MessageBoxIcon.Error);

                ctrlPersonCardWithFilter1.FilterFocus();
            }
        }

        private void frmAddUpdateUser_Activated(object sender, EventArgs e)
        {
            ctrlPersonCardWithFilter1.FilterFocus();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}

