using MyProject.Properties;
using System;
using System.Windows.Forms;

namespace MyProject
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rbBoy_CheckedChanged(object sender, EventArgs e)
        {
            lblHeader.Text = "BOY";
            picBox.Image = Resources.Boy;
        }

        private void rbGirl_CheckedChanged(object sender, EventArgs e)
        {
            lblHeader.Text = "Girls";
            picBox.Image = Resources.Girl;
        }

        private void rbBook_CheckedChanged(object sender, EventArgs e)
        {
            lblHeader.Text = "Book";
            picBox.Image = Resources.Book;
        }

        private void rbPen_CheckedChanged(object sender, EventArgs e)
        {
            lblHeader.Text = "Pen";
            picBox.Image = Resources.Pen;
        }
    }
}
