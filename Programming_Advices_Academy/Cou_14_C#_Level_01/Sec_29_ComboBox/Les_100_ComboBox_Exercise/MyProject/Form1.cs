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

        void SelectImage()
        {
            //switch (comboBox1.SelectedIndex)
            //{
            //    case 0:
            //        {
            //            pictureBox1.Image = Properties.Resources.Book;
            //            label1.Text = comboBox1.Text;
            //            break;
            //        }

            //    case 1:
            //        {
            //            pictureBox1.Image = Properties.Resources.Boy;
            //            label1.Text = comboBox1.Text;
            //            break;
            //        }

            //    case 2:
            //        {
            //            pictureBox1.Image = Properties.Resources.Girl;
            //            label1.Text = comboBox1.Text;
            //            break;
            //        }

            //    case 3:
            //        {
            //            pictureBox1.Image = Properties.Resources.Pen;
            //            label1.Text = comboBox1.Text;
            //            break;
            //        }
            //}


            switch (comboBox1.SelectedItem.ToString().ToLower())
            {
                case "boy":
                    {
                        pictureBox1.Image = Resources.Boy;
                        label1.Text = "Boy";
                        break;
                    }

                case "girl":
                    {
                        pictureBox1.Image = Resources.Girl;
                        label1.Text = "Girl";
                        break;
                    }

                case "book":
                    {
                        pictureBox1.Image = Resources.Book;
                        label1.Text = "Book";
                        break;
                    }

                case "pen":
                    {
                        pictureBox1.Image = Resources.Pen;
                        label1.Text = "Pen";
                        break;
                    }
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            comboBox1.SelectedIndex = 0;
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            SelectImage();
        }


    }
}
