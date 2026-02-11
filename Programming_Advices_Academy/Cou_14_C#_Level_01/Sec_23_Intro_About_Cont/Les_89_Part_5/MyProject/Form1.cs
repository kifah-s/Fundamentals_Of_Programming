using System;
using System.Drawing;
using System.Windows.Forms;

namespace MyProject
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }

        private void button2_MouseEnter(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox1.Enabled == false)
            {
                textBox1.Enabled = true;
            }
            else
            {
                textBox1.Enabled = false;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Visible == false)
            {
                textBox1.Visible = true;
            }
            else
            {
                textBox1.Visible = false;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (textBox1.BackColor == Color.White && textBox2.BackColor == Color.White)
            {
                textBox1.BackColor = Color.YellowGreen;
                textBox2.BackColor = Color.YellowGreen;
            }
            else
            {
                textBox1.BackColor = Color.White;
                textBox2.BackColor = Color.White;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (this.BackColor == Color.White)
            {
                this.BackColor = Color.YellowGreen;
                this.BackColor = Color.YellowGreen;
            }
            else
            {
                this.BackColor = Color.White;
                this.BackColor = Color.White;
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (this.Text == "Form1")
            {
                this.Text = "Kifah";
            }
            else
            {
                this.Text = "Form1";
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (label1.Text == "This is a Practice Project")
            {
                label1.Text = "            Kifah";
            }
            else
            {
                label1.Text = "This is a Practice Project";
            }
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
