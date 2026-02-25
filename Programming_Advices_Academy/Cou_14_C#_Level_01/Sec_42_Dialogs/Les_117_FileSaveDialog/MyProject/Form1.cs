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

        private void btnSaveFileDialog_Click(object sender, EventArgs e)
        {
            //saveFileDialog1.InitialDirectory = @"c:\";
            //saveFileDialog1.Title = "koko";
            //saveFileDialog1.DefaultExt = "txt";
            //saveFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
            //saveFileDialog1.FilterIndex = 2;


            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                MessageBox.Show(saveFileDialog1.FileName);
            }
        }
    }
}
