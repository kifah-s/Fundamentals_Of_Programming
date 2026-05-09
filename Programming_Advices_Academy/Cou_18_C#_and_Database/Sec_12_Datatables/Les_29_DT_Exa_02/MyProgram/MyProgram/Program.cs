using System;
using System.Data;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DataTable employeesDataTable = new DataTable();

            employeesDataTable.Columns.Add("ID", typeof(int));
            employeesDataTable.Columns.Add("Name", typeof(string));
            employeesDataTable.Columns.Add("Country", typeof(string));
            employeesDataTable.Columns.Add("Salary", typeof(int));
            employeesDataTable.Columns.Add("Date", typeof(DateTime));

            employeesDataTable.Rows.Add(1, "kifah", "syria", 18000, DateTime.Now);
            employeesDataTable.Rows.Add(2, "ashraf", "syria", 18000, DateTime.Now);
            employeesDataTable.Rows.Add(3, "omar", "syria", 18000, DateTime.Now);

            int employeesCount = employeesDataTable.Rows.Count;
            int totalSalary = Convert.ToInt32(employeesDataTable.Compute("Sum(Salary)", string.Empty));
            int averageSalary = Convert.ToInt32(employeesDataTable.Compute("AVG(Salary)", string.Empty));
            int maxSalary = Convert.ToInt32(employeesDataTable.Compute("MAX(Salary)", string.Empty));
            int minSalary = Convert.ToInt32(employeesDataTable.Compute("MIN(Salary)", string.Empty));

            Console.WriteLine("Employees List:");
            foreach (DataRow row in employeesDataTable.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            Console.WriteLine($"\nCount Of Employees: {employeesCount}");
            Console.WriteLine($"Total Employees Salary: {totalSalary}");
            Console.WriteLine($"Averaage Salary: {averageSalary}");
            Console.WriteLine($"Max Salary: {maxSalary}");
            Console.WriteLine($"Min Salary: {minSalary}");
        }
    }
}
