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
            //picBox.Image = Resources.Boy;

            //lblHeader.Text = "BOY";
            //lblHeader.Text = rbBoy.Text;
            //lblHeader.Text = rbBoy.Tag.ToString();
            lblHeader.Text = ((RadioButton)sender).Tag.ToString();


        }

        private void rbGirl_CheckedChanged(object sender, EventArgs e)
        {
            //picBox.Image = Resources.Girl;

            //lblHeader.Text = "Girls";
            //lblHeader.Text = rbGirls.Text;
            //lblHeader.Text = rbGirls.Tag.ToString();
            lblHeader.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rbBook_CheckedChanged(object sender, EventArgs e)
        {
            //picBox.Image = Resources.Book;

            //lblHeader.Text = "Book";
            //lblHeader.Text = rbBook.Text;
            //lblHeader.Text = rbBook.Tag.ToString();
            lblHeader.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rbPen_CheckedChanged(object sender, EventArgs e)
        {
            //picBox.Image = Resources.Pen;

            //lblHeader.Text = "Pen";
            //lblHeader.Text = rbPen.Text;
            //lblHeader.Text = rbPen.Tag.ToString();
            lblHeader.Text = ((RadioButton)sender).Tag.ToString();
        }
    }
}
