using System;
using System.Data;
using System.Linq;

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

            int employeesCount = employeesDataTable.Rows.Count;
            int totalSalary = Convert.ToInt32(employeesDataTable.Compute("Sum(Salary)", string.Empty));
            int averageSalary = Convert.ToInt32(employeesDataTable.Compute("AVG(Salary)", string.Empty));
            int maxSalary = Convert.ToInt32(employeesDataTable.Compute("MAX(Salary)", string.Empty));
            int minSalary = Convert.ToInt32(employeesDataTable.Compute("MIN(Salary)", string.Empty));

            Console.WriteLine($"\nCount Of Employees: {employeesCount}");
            Console.WriteLine($"Total Employees Salary: {totalSalary}");
            Console.WriteLine($"Averaage Salary: {averageSalary}");
            Console.WriteLine($"Max Salary: {maxSalary}");
            Console.WriteLine($"Min Salary: {minSalary}");

            // -------------------------------------------------------------

            // Filter By Country "Syria".
            DataRow[] resultRows = employeesDataTable.Select("Country = 'syria'");

            Console.WriteLine("\nFilter \"Syria\" Employees:");
            foreach (DataRow row in resultRows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            int resultCount = resultRows.Count();
            totalSalary = Convert.ToInt32(employeesDataTable.Compute("Sum(Salary)", "Country = 'syria'"));
            averageSalary = Convert.ToInt32(employeesDataTable.Compute("AVG(Salary)", "Country = 'syria'"));
            maxSalary = Convert.ToInt32(employeesDataTable.Compute("MAX(Salary)", "Country = 'syria'"));
            minSalary = Convert.ToInt32(employeesDataTable.Compute("MIN(Salary)", "Country = 'syria'"));

            Console.WriteLine($"\nCount Of Employees: {resultCount}");
            Console.WriteLine($"Total Employees Salary: {totalSalary}");
            Console.WriteLine($"Averaage Salary: {averageSalary}");
            Console.WriteLine($"Max Salary: {maxSalary}");
            Console.WriteLine($"Min Salary: {minSalary}");

            // -------------------------------------------------------------

            // Filter By Country "Syria or Shahba".
            resultRows = employeesDataTable.Select("Country = 'syria' or Country = 'shahba'");

            Console.WriteLine("\nFilter \"syria or shahba\" Employees:");

            foreach (DataRow row in resultRows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            resultCount = resultRows.Count();
            totalSalary = Convert.ToInt32(employeesDataTable.Compute("Sum(Salary)", "Country = 'syria' or Country = 'shahba'"));
            averageSalary = Convert.ToInt32(employeesDataTable.Compute("AVG(Salary)", "Country = 'syria' or Country = 'shahba'"));
            maxSalary = Convert.ToInt32(employeesDataTable.Compute("MAX(Salary)", "Country = 'syria' or Country = 'shahba'"));
            minSalary = Convert.ToInt32(employeesDataTable.Compute("MIN(Salary)", "Country = 'syria' or Country = 'shahba'"));

            Console.WriteLine($"\nCount Of Employees: {resultCount}");
            Console.WriteLine($"Total Employees Salary: {totalSalary}");
            Console.WriteLine($"Averaage Salary: {averageSalary}");
            Console.WriteLine($"Max Salary: {maxSalary}");
            Console.WriteLine($"Min Salary: {minSalary}");

            // -------------------------------------------------------------

            // Filter Employee With ID = 1.
            resultRows = employeesDataTable.Select("ID = 1");

            Console.WriteLine("\nFilter Employee With ID = 1");

            foreach (DataRow row in resultRows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            resultCount = resultRows.Count();
            totalSalary = Convert.ToInt32(employeesDataTable.Compute("Sum(Salary)", "ID = 1"));
            averageSalary = Convert.ToInt32(employeesDataTable.Compute("AVG(Salary)", "ID = 1"));
            maxSalary = Convert.ToInt32(employeesDataTable.Compute("MAX(Salary)", "ID = 1"));
            minSalary = Convert.ToInt32(employeesDataTable.Compute("MIN(Salary)", "ID = 1"));

            Console.WriteLine($"\nCount Of Employees: {resultCount}");
            Console.WriteLine($"Total Employees Salary: {totalSalary}");
            Console.WriteLine($"Averaage Salary: {averageSalary}");
            Console.WriteLine($"Max Salary: {maxSalary}");
            Console.WriteLine($"Min Salary: {minSalary}");
        }
    }
}
