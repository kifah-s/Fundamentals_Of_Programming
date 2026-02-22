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

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Color Black = Color.FromArgb(255, 0, 0, 0);
            Pen Pen = new Pen(Black);
            Pen.Width = 5;

            // Pen.DashStyle = System.Drawing.Drawing2D.DashStyle.Dash;
            Pen.StartCap = System.Drawing.Drawing2D.LineCap.Round;
            Pen.EndCap = System.Drawing.Drawing2D.LineCap.Round;

            // Draw Horizental Line.
            e.Graphics.DrawLine(Pen, 100, 100, 100, 300);
            e.Graphics.DrawRectangle(Pen, 220, 100, 200, 200);
            e.Graphics.DrawEllipse(Pen, 500, 100, 200, 200);

        }
    }
}
