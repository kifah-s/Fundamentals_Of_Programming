using System;

namespace Calculator_Project_V1
{
    public class clsCalculater
    {
        private float _result = 0;

        public void PrintResult()
        {
            Console.WriteLine("Result is: {0}", _result);
        }

        public void Clear()
        {
            _result = 0;
        }

        public void Add(int num)
        {
            _result += num;
        }

        public void Subtract(int num)
        {
            _result -= num;
        }

        public void Multiply(int num)
        {
            _result *= num;
        }

        public void Divide(int num)
        {
            if (num == 0)
            {
                num = 1;
            }

            _result /= num;
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            clsCalculater Calculater1 = new clsCalculater();

            Calculater1.Clear();
            Calculater1.PrintResult();

            Calculater1.Add(10);
            Calculater1.PrintResult();

            Calculater1.Add(10);
            Calculater1.PrintResult();

            Calculater1.Add(10);
            Calculater1.PrintResult();

            Calculater1.Subtract(10);
            Calculater1.PrintResult();

            Calculater1.Multiply(2);
            Calculater1.PrintResult();

            Calculater1.Divide(0);
            Calculater1.PrintResult();

            Calculater1.Divide(10);
            Calculater1.PrintResult();

            Calculater1.Clear();
            Calculater1.PrintResult();
        }
    }
}
