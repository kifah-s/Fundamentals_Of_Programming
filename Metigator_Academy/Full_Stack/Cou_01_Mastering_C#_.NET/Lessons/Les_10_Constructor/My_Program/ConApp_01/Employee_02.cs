namespace ConApp_01
{
    internal class Employee_02
    {
        private int _ID;
        private string _FName;
        private string _LName;

        private Employee_02()
        {

        }

        private Employee_02(int id, string fName, string lName)
        {
            _ID = id;
            _FName = fName;
            _LName = lName;
        }

        public static Employee_02 Create(int id, string fName, string lName)
        {
            return new Employee_02(id, fName, lName);
        }

        public void PrintEmployeeInfo()
        {
            Console.WriteLine($"ID: {_ID}.");
            Console.WriteLine($"First Name: {_FName}.");
            Console.WriteLine($"Last Name: {_LName}.");
        }
    }
}
