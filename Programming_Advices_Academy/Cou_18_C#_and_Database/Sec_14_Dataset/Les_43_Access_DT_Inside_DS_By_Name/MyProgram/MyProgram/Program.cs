using System;
using System.Data;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Create Employees DataTable.
            DataTable employeesDT = new DataTable("employeesDT");

            // Add columns to DT.
            employeesDT.Columns.Add("ID", typeof(int));
            employeesDT.Columns.Add("Name", typeof(string));
            employeesDT.Columns.Add("Country", typeof(string));
            employeesDT.Columns.Add("Salary", typeof(double));
            employeesDT.Columns.Add("Date", typeof(DateTime));

            // Add rows to DT.
            employeesDT.Rows.Add(1, "kifah", "syria", 1800, DateTime.Now);
            employeesDT.Rows.Add(2, "ashraf", "swida", 1500, DateTime.Now);
            employeesDT.Rows.Add(3, "omar", "shahba", 1300, DateTime.Now);

            // Print employees details from DT.
            Console.WriteLine("Employees List From DT:");
            foreach (DataRow row in employeesDT.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}\t ");
            }

            // --------------------------------------------------------------------------------------

            // Create Departments DataTable.
            DataTable departmentsDT = new DataTable("departmentsDT");

            // Add columns to DT.
            departmentsDT.Columns.Add("ID", typeof(int));
            departmentsDT.Columns.Add("Name", typeof(string));

            // Add rows to DT.
            departmentsDT.Rows.Add(1, "Marketing");
            departmentsDT.Rows.Add(2, "IT");
            departmentsDT.Rows.Add(3, "HR");

            // Print departments details from DT.
            Console.WriteLine("\n\nDepartments List From DT:");
            foreach (DataRow row in departmentsDT.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}");
            }

            // --------------------------------------------------------------------------------------

            // Create Dataset.
            DataSet dataSet1 = new DataSet();

            // Adding DTs into DS.
            dataSet1.Tables.Add(employeesDT);
            dataSet1.Tables.Add(departmentsDT);

            // Print employees details from DS.
            Console.WriteLine("\n\nEmployees List From DS:");
            foreach (DataRow row in dataSet1.Tables["employeesDT"].Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}\t ");
            }

            // Print departments details from DS.
            Console.WriteLine("\n\nDepartments List From DS:");
            foreach (DataRow row in dataSet1.Tables["departmentsDT"].Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}");
            }

            Console.ReadKey();
        }
    }
}
