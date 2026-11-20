using DVLD.Global_Classes;
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
                    clsGlobal.RememberUsernameAndPassword(userName, password);

                }
                else
                {
                    // store empty username and password.
                    clsGlobal.RememberUsernameAndPassword("", "");
                }

                // Incase the user is not active.
                if (!user.isActive)
                {
                    txtUserName.Focus();

                    MessageBox.Show("Your account is not Active, Contact Admin.", "In Active Account", MessageBoxButtons.OK, MessageBoxIcon.Error);

                    return;
                }

                clsGlobal.currentUser = user;
                this.Hide();
                frmMain frm = new frmMain(this);
                frm.ShowDialog();
            }
            else
            {
                txtUserName.Focus();
                MessageBox.Show("Invalid Username/Password.", "Wrong Credentials", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void frmLogin_Load(object sender, EventArgs e)
        {
            string userName = "", password = "";

            if (clsGlobal.GetStoredCredential(ref userName, ref password))
            {
                txtUserName.Text = userName;
                txtPassword.Text = password;
                chkRememberMe.Checked = true;
            }
            else
            {
                chkRememberMe.Checked = false;
            }
        }
    }
}