using System;
using System.Data.SqlClient;

internal class Program
{
    static string connectionString = "Server = .;" +
                                     "Database = ContactsDB;" +
                                     "User ID = sa;" +
                                     "Password = sql12345;";

    static string GetFirstName(int ContactID)
    {
        string FirstName = "";

        SqlConnection connection = new SqlConnection(connectionString);

        string query = "SELECT FirstName FROM Contacts WHERE ContactID = @ContactID";

        SqlCommand command = new SqlCommand(query, connection);

        command.Parameters.AddWithValue("@ContactID", ContactID);

        try
        {
            connection.Open();

            object result = command.ExecuteScalar();

            if (result != null)
            {
                FirstName = result.ToString();
            }
            else
            {
                FirstName = "";
            }

            connection.Close();
        }
        catch (Exception ex)
        {
            //Console.WriteLine("Error: " + ex.Message);
            Console.WriteLine($"Error: {ex.Message}");
        }

        return FirstName;
    }

    static void Main(string[] args)
    {
        Console.WriteLine(GetFirstName(1));

        Console.ReadKey();
    }
}

