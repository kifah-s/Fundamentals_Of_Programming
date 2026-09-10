using System.Windows.Forms;

namespace My_Project
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        // Declare a delegate.
        public delegate void DataBackEventHandler(object sender, int PersonID);

        // Declare an event using the delegate.
        public event DataBackEventHandler DataBack;

        private void button1_Click(object sender, System.EventArgs e)
        {
            int PersonID = int.Parse(textBox1.Text);

            // Trigger the event to send data back to form 1.
            DataBack?.Invoke(this, PersonID);

            this.Close();
        }
    }
}
