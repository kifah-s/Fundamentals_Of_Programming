using System;
using System.Windows.Forms;

namespace My_Project
{
    public partial class SimpleCalculate : UserControl
    {
        // Define a custum event handler delegate with parameters.
        public event Action<int> OnCalculationComplete;

        // Create a protected method to raise the event with a parameter.
        protected virtual void CalculationComplete(int PersonID)
        {
            Action<int> handler = OnCalculationComplete;
            if (handler != null)
            {
                handler(PersonID);
            }
        }

        public SimpleCalculate()
        {
            InitializeComponent();
        }

        private void btnCalculate_Click(object sender, System.EventArgs e)
        {
            int Result = Convert.ToInt32(txtNumber1.Text) + Convert.ToInt32(txtNumber2.Text);
            lblResult.Text = Result.ToString();

            if (OnCalculationComplete != null)
            {
                // Rise the event with a parameter.
                CalculationComplete(Result);
            }

        }
    }
}
