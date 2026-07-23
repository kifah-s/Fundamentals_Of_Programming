namespace ConApp_01
{
    public class Employee_01
    {
        public int ID;
        public string FName;
        public string LName;

        public Employee_01()
        {

        }

        public Employee_01(int id)
        {
            ID = id;
        }

        public void PrintEmployeeInfo()
        {
            Console.WriteLine($"ID: {ID}.");
            Console.WriteLine($"First Name: {FName}.");
            Console.WriteLine($"Last Name: {LName}.");
        }
    }
}
