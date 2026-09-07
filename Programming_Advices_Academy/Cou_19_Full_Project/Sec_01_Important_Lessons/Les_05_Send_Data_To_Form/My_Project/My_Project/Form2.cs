using System.Windows.Forms;

namespace My_Project
{
    public partial class Form2 : Form
    {
        private int _PersonID;

        public Form2(int PersonID)
        {
            InitializeComponent();

            _PersonID = PersonID;
        }

        private void Form2_Load(object sender, System.EventArgs e)
        {
            lblPersonID.Text = _PersonID.ToString();
        }
    }
}
