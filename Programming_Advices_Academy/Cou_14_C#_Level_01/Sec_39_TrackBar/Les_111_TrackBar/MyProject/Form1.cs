using System.Windows.Forms;

namespace MyProject
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void trackBar1_Scroll(object sender, System.EventArgs e)
        {
            label1.Text = trackBar1.Value.ToString();
        }
    }
}
