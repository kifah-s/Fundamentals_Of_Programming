using Library_02;
using Library1;
using System;
using System.Windows.Forms;

namespace TestLibrary_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            clsMath math = new clsMath();

            MessageBox.Show(math.Sum(1, 2).ToString());
        }

        private void button2_Click(object sender, EventArgs e)
        {
            clsSayHello sayHello = new clsSayHello();

            MessageBox.Show(sayHello.SayHello_02());
        }
    }
}
