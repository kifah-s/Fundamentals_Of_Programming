namespace ConApp_02
{
    public class RectangleHelper
    {
        public void GetArea(decimal width, decimal height)
        {
            var reslt = width * height;
            Console.WriteLine($"Area: {width} x {height} = {reslt}");
        }

        public void GetPerimeter(decimal width, decimal height)
        {
            var reslt = 2 * (width + height);
            Console.WriteLine($"Area: 2 x ({width} + {height}) = {reslt}");
        }


        public delegate void RectDelegate(decimal width, decimal height);
    }
}
