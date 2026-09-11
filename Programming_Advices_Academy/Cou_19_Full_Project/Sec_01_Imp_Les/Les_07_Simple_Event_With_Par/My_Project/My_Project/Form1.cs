using System.Windows.Forms;

namespace My_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            simpleCalculate1.OnCalculationComplete += MyUserControl1_OnCalculationComplete_1;
        }

        private void MyUserControl1_OnCalculationComplete_1(int obj)
        {
            int Results = obj;
            MessageBox.Show("Result: " + obj);
        }
    }
}
