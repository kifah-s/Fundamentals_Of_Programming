using DVLD_Business;

namespace DVLD.Login
{
    public partial class frmLogin : Form
    {
        public frmLogin()
        {
            InitializeComponent();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            string userName = txtUserName.Text.Trim();
            string password = txtPassword.Text.Trim();

            clsUser user = clsUser.FindByUsernameAndPassword(userName, password);

            if (user != null)
            {
                if (chkRememberMe.Checked)
                {
                    // Store username and password.

                }
                else
                {
                    txtUserName.Focus();
                    MessageBox.Show("Invalid Username/Password.", "Wrong Credentials", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }

            }
        }
    }
}