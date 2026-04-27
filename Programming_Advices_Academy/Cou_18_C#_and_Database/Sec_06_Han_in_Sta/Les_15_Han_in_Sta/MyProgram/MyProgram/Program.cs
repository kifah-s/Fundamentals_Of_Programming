using System;
using System.Data.SqlClient;

internal class Program
{
    static string connectionString = @"Server = .;
                                     Database = ContactsDB;
                                     User ID = sa;
                                     Password = sql12345;";

    public static void DeleteContacts(string contactIDs)
    {
        SqlConnection connection = new SqlConnection(connectionString);

        string query = @"DELETE FROM Contacts
                         WHERE ContactID in (" + contactIDs + ")";

        SqlCommand command = new SqlCommand(query, connection);

        try
        {
            connection.Open();

            int rowsAffected = command.ExecuteNonQuery();

            if (rowsAffected > 0)
            {
                Console.WriteLine("Record Delete Successfully.");
            }
            else
            {
                Console.WriteLine("Record Delete Failed.");
            }

            connection.Close();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Erroe: {ex.Message}");
        }
    }

    static void Main(string[] args)
    {
        DeleteContacts("6,7,8");

        Console.ReadKey();
    }
}

