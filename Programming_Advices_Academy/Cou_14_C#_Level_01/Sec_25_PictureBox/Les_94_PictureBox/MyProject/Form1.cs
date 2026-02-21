using MyProject.Properties;
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

        private bool isImg1 = true;
        private void btnSwitchingBetweenImages_Click(object sender, EventArgs e)
        {
            //pictureBox1.Image = Resources.img2;

            if (isImg1)
            {
                pictureBox1.Image = Resources.img2;
                isImg1 = false;
            }
            else
            {
                pictureBox1.Image = Resources.img1;
                isImg1 = true;
            }
        }

        private void btnImage1_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.img1;
        }

        private void btnImage2_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.img2;
        }

        private void btnLoadFromFile_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile(@"C:\Users\Hp\Desktop\New_Folder\img3.jpg");
        }
    }
}
