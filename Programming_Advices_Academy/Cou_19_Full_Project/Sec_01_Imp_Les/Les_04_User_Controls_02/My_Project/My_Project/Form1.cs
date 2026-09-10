namespace My_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnViewResult_01_Click(object sender, EventArgs e)
        {
            MessageBox.Show(ctrlSimpleCalc1.Result.ToString());
        }

        private void btnViewResult_02_Click(object sender, EventArgs e)
        {
            MessageBox.Show(ctrlSimpleCalc2.Result.ToString());
        }

        private void btnViewResult_03_Click(object sender, EventArgs e)
        {
            MessageBox.Show(ctrlSimpleCalc3.Result.ToString());
        }
    }
}
