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

        private void findClintToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Find Client is here.");
        }

        private void addNewClintToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Add New Client is here.");
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Exit is here.");
        }
    }
}
