using DVLD_Business;

namespace DVLD.User
{
    public partial class ctrlUserCard : UserControl
    {
        private clsUser _User;

        private int _userID = -1;

        public int userID
        {
            get { return _userID; }
        }

        public ctrlUserCard()
        {
            InitializeComponent();
        }

        private void _ResetPersonInfo()
        {
            ctrlPersonCard1.ResetPersonInfo();

            lblUserID.Text = "[???]";
            lblUserName.Text = "[???]";
            lblIsActive.Text = "[???]";
        }

        private void _FillUserInfo()
        {
            ctrlPersonCard1.LoadPersonInfo(_User.personID);
            lblUserID.Text = _User.userID.ToString();
            lblUserName.Text = _User.userName.ToString();

            if (_User.isActive)
            {
                lblIsActive.Text = "Yes";
            }
            else
            {
                lblIsActive.Text = "No";
            }
        }

        public void LoadUserInfo(int userID)
        {
            // _userID = userID;

            _User = clsUser.FindByPersonID(userID);

            if (_User == null)
            {
                _ResetPersonInfo();

                MessageBox.Show("No User with UserID = " + userID.ToString(), "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                return;
            }

            _FillUserInfo();
        }
    }
}
