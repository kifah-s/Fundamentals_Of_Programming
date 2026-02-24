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

        private void btnSelectedRange_Click(object sender, EventArgs e)
        {
            MessageBox.Show(monthCalendar1.SelectionRange.ToString());
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            MessageBox.Show(monthCalendar1.SelectionRange.Start.ToShortDateString());
        }

        private void btnEnd_Click(object sender, EventArgs e)
        {
            MessageBox.Show(monthCalendar1.SelectionRange.End.ToShortDateString());
        }
    }
}
