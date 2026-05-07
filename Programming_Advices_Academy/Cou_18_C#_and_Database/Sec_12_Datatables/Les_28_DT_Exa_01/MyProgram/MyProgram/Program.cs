using System;
using System.Data;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DataTable employeesDatatyple = new DataTable();

            // Definition of columns.
            employeesDatatyple.Columns.Add("ID", typeof(int));
            employeesDatatyple.Columns.Add("Name", typeof(string));
            employeesDatatyple.Columns.Add("Country", typeof(string));
            employeesDatatyple.Columns.Add("Salary", typeof(double));
            employeesDatatyple.Columns.Add("Date", typeof(DateTime));

            // Add rows.
            employeesDatatyple.Rows.Add(1, "kifah", "syria", 1500, DateTime.Now);
            employeesDatatyple.Rows.Add(2, "ashraf", "syria", 1500, DateTime.Now);
            employeesDatatyple.Rows.Add(3, "omar", "syria", 1500, DateTime.Now);

            Console.WriteLine("\nEmployees List:\n");
            foreach (DataRow recordRow in employeesDatatyple.Rows)
            {
                Console.WriteLine($"ID: {recordRow["ID"]}\t Name: {recordRow["Name"]}\t Country: {recordRow["Country"]}\t" +
                                 $" Salary: {recordRow["Salary"]}\t Date: {recordRow["Date"]}");
            }


        }
    }
}
