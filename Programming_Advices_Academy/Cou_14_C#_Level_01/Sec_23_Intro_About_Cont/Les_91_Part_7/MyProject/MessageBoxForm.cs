using System;
using System.Windows.Forms;

namespace MyProject
{
    public partial class MessageBoxForm : Form
    {
        public MessageBoxForm()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message.");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message!", "This is a title");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are You Sure?", "Confirm!", MessageBoxButtons.OKCancel) == DialogResult.OK)
            {
                MessageBox.Show("User Pressed OK");
            }

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are You Sure?", "Confirm!", MessageBoxButtons.OKCancel, MessageBoxIcon.Question) == DialogResult.OK)
            {
                MessageBox.Show("User Pressed OK");
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are You Sure?", "Confirm!", MessageBoxButtons.OKCancel, MessageBoxIcon.Question, MessageBoxDefaultButton.Button2) == DialogResult.OK)
            {
                MessageBox.Show("User Pressed OK");
            }
        }
    }
}
