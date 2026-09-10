using System;
using System.Windows.Forms;

namespace My_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();

            // Subscribe to the event.
            form2.DataBack += Form2_DataBack;

            form2.ShowDialog();
        }

        private void Form2_DataBack(object sender, int PersonID)
        {
            // Handle the data received from Form 2.
            textBox1.Text = PersonID.ToString();
        }
    }
}
