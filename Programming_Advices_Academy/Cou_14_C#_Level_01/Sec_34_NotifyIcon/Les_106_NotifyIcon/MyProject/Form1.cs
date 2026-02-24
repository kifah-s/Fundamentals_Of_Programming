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
            notifyIcon1.Icon = SystemIcons.Application;
            notifyIcon1.BalloonTipIcon = ToolTipIcon.Error;
            notifyIcon1.BalloonTipTitle = "This is a title";
            notifyIcon1.BalloonTipText = "This is a message";
            notifyIcon1.ShowBalloonTip(1000);

        }

        private void notifyIcon1_BalloonTipClicked(object sender, EventArgs e)
        {
            MessageBox.Show("BalloonTip Clicked");
        }
    }
}
