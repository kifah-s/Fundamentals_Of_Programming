using System;
using System.Data;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Create DataTable.
            DataTable employeesDT = new DataTable();

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

            // Create DataView.
            DataView employeesDV1 = employeesDT.DefaultView;

            // Print employees details from DV.
            Console.WriteLine("\n\nEmployees List From DV:");
            for (int i = 0; i < employeesDV1.Count; i++)
            {
                Console.WriteLine($"{employeesDV1[i][0]}, {employeesDV1[i][1]}, {employeesDV1[i][2]}, {employeesDV1[i][3]}, {employeesDV1[i][4]}");
            }

            // --------------------------------------------------------------------------------------

            // Soting with DV.
            employeesDV1.Sort = ("Name ASC");

            // Print employees details from DV.
            Console.WriteLine("\n\nEmployees List From DV After Sorting:");
            for (int i = 0; i < employeesDV1.Count; i++)
            {
                Console.WriteLine($"{employeesDV1[i][0]}, {employeesDV1[i][1]}, {employeesDV1[i][2]}, {employeesDV1[i][3]}, {employeesDV1[i][4]}");
            }

            // --------------------------------------------------------------------------------------

            Console.ReadKey();
        }
    }
}
