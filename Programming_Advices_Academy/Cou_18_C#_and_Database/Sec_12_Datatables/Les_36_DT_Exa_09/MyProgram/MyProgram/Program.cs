using System;
using System.Data;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DataTable employeesDataTable = new DataTable();

            //employeesDataTable.Columns.Add("ID", typeof(int));
            //employeesDataTable.Columns.Add("Name", typeof(string));
            //employeesDataTable.Columns.Add("Country", typeof(string));
            //employeesDataTable.Columns.Add("Salary", typeof(int));
            //employeesDataTable.Columns.Add("Date", typeof(DateTime));

            DataColumn dtColumn = new DataColumn();
            dtColumn.DataType = typeof(int);
            dtColumn.ColumnName = "ID";
            dtColumn.AutoIncrement = true;
            dtColumn.AutoIncrementSeed = 1;
            dtColumn.AutoIncrementStep = 1;
            dtColumn.Caption = "Employee ID";
            dtColumn.ReadOnly = true;
            dtColumn.Unique = true;
            employeesDataTable.Columns.Add(dtColumn);

            dtColumn = new DataColumn();
            dtColumn.DataType = typeof(string);
            dtColumn.ColumnName = "Name";
            dtColumn.AutoIncrement = false;
            dtColumn.Caption = "Employee Name";
            dtColumn.ReadOnly = false;
            dtColumn.Unique = false;
            employeesDataTable.Columns.Add(dtColumn);

            dtColumn = new DataColumn();
            dtColumn.DataType = typeof(string);
            dtColumn.ColumnName = "Country";
            dtColumn.AutoIncrement = false;
            dtColumn.Caption = "Employee Country";
            dtColumn.ReadOnly = false;
            dtColumn.Unique = false;
            employeesDataTable.Columns.Add(dtColumn);

            dtColumn = new DataColumn();
            dtColumn.DataType = typeof(double);
            dtColumn.ColumnName = "Salary";
            dtColumn.AutoIncrement = false;
            dtColumn.Caption = "Employee Salary";
            dtColumn.ReadOnly = false;
            dtColumn.Unique = false;
            employeesDataTable.Columns.Add(dtColumn);

            dtColumn = new DataColumn();
            dtColumn.DataType = typeof(DateTime);
            dtColumn.ColumnName = "Date";
            dtColumn.AutoIncrement = false;
            dtColumn.Caption = "Employee Date";
            dtColumn.ReadOnly = false;
            dtColumn.Unique = false;
            employeesDataTable.Columns.Add(dtColumn);

            // Make ID column the primary key column.
            DataColumn[] primarykeyColumns = new DataColumn[1];
            primarykeyColumns[0] = employeesDataTable.Columns["ID"];
            employeesDataTable.PrimaryKey = primarykeyColumns;


            employeesDataTable.Rows.Add(null, "kifah", "syria", 1800, DateTime.Now);
            employeesDataTable.Rows.Add(null, "ashraf", "jordn", 1500, DateTime.Now);
            employeesDataTable.Rows.Add(null, "omar", "syria", 1000, DateTime.Now);
            employeesDataTable.Rows.Add(null, "shaza", "shahba", 1000, DateTime.Now);
            employeesDataTable.Rows.Add(null, "saleh", "shahba", 1000, DateTime.Now);

            Console.WriteLine("Employees List:");
            foreach (DataRow row in employeesDataTable.Rows)
            {
                Console.WriteLine($"ID: {row["ID"]}\t Name: {row["Name"]}\t Country: {row["Country"]}\t Salary: {row["Salary"]}\t Date: {row["Date"]}");
            }

            Console.ReadLine();
        }
    }
}
