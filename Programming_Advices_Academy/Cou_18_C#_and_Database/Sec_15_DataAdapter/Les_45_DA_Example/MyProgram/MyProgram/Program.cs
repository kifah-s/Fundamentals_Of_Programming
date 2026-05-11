using System;
using System.Data;
using System.Data.SqlClient;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Connection String.
            String connectionString = $"Server = .; Database = ContactsDB; User ID = sa; Password = sql12345";

            // Create DS.
            DataSet DS = new DataSet();

            // Create Query.
            string query = "SELECT * FROM Contacts;";

            // Create DA.
            SqlDataAdapter DA = new SqlDataAdapter(query, connectionString);

            // Create Connection.
            SqlConnection connection = new SqlConnection(connectionString);

            // Open Connection.
            connection.Open();

            // Set SelectCommand of the DataAdapter to the Connection.
            DA.SelectCommand.Connection = connection;

            // Fill DS with data from data source.
            DA.Fill(DS, "Contacts");

            // Close Connection.
            connection.Close();

            // Print data from DS.
            DataTable customersTable = DS.Tables["Contacts"];
            foreach (DataRow row in customersTable.Rows)
            {
                Console.WriteLine($"Contact ID: {row["ContactID"]}\t Contact Full Name: {row["FirstName"]} {row["LastName"]}");
            }

            // Make Changes to DS (Add, Modify, or Delete rows).
            //
            //
            //

            // Update data source with changes made to DS.

            //connection.Open();

            // Set UpdateCommand of DA to connection.
            //DA.Update(DS, "Contacts");

            //connection.Close();




            Console.ReadKey();
        }
    }
}
