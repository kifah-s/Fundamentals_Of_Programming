using System;

namespace Calculator_Project_V2
{
    public class clsCalculator
    {
        private float _result = 0;
        private float _lastNumber = 0;
        private string _lastOperation = "Clear";

        private bool _IsZero(float number)
        {
            return (number == 0);
        }

        public void Add(float number)
        {
            _lastNumber = number;
            _lastOperation = "Adding";

            _result += number;
        }

        public void Subtract(float number)
        {
            _lastNumber = number;
            _lastOperation = "Subtracting";

            _result -= number;
        }

        public bool Divide(float number)
        {
            bool succeeded = true;
            _lastOperation = "Divideing";

            if (_IsZero(number))
            {
                _lastNumber = number;
                _result /= 1;
                succeeded = false;
            }
            else
            {
                _lastNumber = number;
                _result /= number;

            }

            return succeeded;
        }

        public void Multiply(float number)
        {
            _lastNumber = number;
            _lastOperation = "Multiplying";

            _result *= number;
        }

        public float GetFinalResult()
        {
            return _result;
        }

        public void Clear()
        {
            _lastNumber = 0;
            _lastOperation = "Clear";
            _result = 0;
        }

        public void PrintResult()
        {
            Console.WriteLine("Result After {0} {1} is: {2}", _lastOperation, _lastNumber, _result);
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            clsCalculator Calculator1 = new clsCalculator();

            Calculator1.Clear();

            Calculator1.Add(10);
            Calculator1.PrintResult();

            Calculator1.Add(100);
            Calculator1.PrintResult();

            Calculator1.Subtract(20);
            Calculator1.PrintResult();

            Calculator1.Divide(0);
            Calculator1.PrintResult();

            Calculator1.Divide(2);
            Calculator1.PrintResult();

            Calculator1.Multiply(3);
            Calculator1.PrintResult();

            Calculator1.Clear();
            Calculator1.PrintResult();

            Console.ReadLine();
        }
    }
}
