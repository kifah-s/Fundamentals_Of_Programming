using DVLD_Business;

namespace DVLD.User
{
    public partial class frmChangePassword : Form
    {
        private clsUser _User;

        private int _userID;

        public frmChangePassword(int userID)
        {
            InitializeComponent();

            _userID = userID;
        }

        private void _ResetDefaultValues()
        {
            txtConfirmPassword.Focus();

            txtConfirmPassword.Text = "";
            txtNewPassword.Text = "";
            txtConfirmPassword.Text = "";
        }

        private void frmChangePassword_Load(object sender, EventArgs e)
        {
            _ResetDefaultValues();

            _User = clsUser.FindByPersonID(_userID);

            if (_User == null)
            {
                // Here we don't continue because the form is not valid.
                MessageBox.Show("Could not Find User with id = " + _userID, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                this.Close();

                return;
            }

            ctrlUserCard1.LoadUserInfo(_userID);
        }
    }
}
