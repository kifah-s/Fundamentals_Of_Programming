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

            employeesDataTable.Rows.Add(1, "kifah", "syria", 1800, DateTime.Now);
            employeesDataTable.Rows.Add(2, "ashraf", "jordn", 1500, DateTime.Now);
            employeesDataTable.Rows.Add(3, "omar", "syria", 1000, DateTime.Now);
            employeesDataTable.Rows.Add(4, "shaza", "shahba", 1000, DateTime.Now);
            employeesDataTable.Rows.Add(5, "saleh", "shahba", 1000, DateTime.Now);

            Console.WriteLine("Employees List:");
            foreach (DataRow row in employeesDataTable.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            // -------------------------------------------------------------

            // First: filter for employee ID = 4.
            DataRow[] results = employeesDataTable.Select("ID = 4");

            foreach (var row in results)
            {
                row["Name"] = "Maha Ahmed";
                row["Salary"] = "600";
            }

            //employeesDataTable.AcceptChanges();

            Console.WriteLine("\n\nUpdating Employee ID = 4:");
            foreach (DataRow row in employeesDataTable.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            Console.ReadKey();
        }
    }
}
