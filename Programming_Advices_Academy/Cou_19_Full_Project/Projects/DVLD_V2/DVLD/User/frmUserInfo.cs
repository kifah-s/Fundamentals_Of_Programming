namespace DVLD.User
{
    public partial class frmUserInfo : Form
    {
        private int _userID;

        public frmUserInfo(int userID)
        {
            InitializeComponent();

            _userID = userID;
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void frmUserInfo_Load(object sender, EventArgs e)
        {
            ctrlUserCard1.LoadUserInfo(_userID);
        }
    }
}
