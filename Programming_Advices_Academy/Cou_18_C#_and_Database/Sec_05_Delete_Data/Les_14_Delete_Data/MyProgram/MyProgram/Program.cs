using System;
using System.Data.SqlClient;

internal class Program
{
    static string connectionString = @"Server = .;
                                     Database = ContactsDB;
                                     User ID = sa;
                                     Password = sql12345;";

    public static void DeleteContact(int contactID)
    {
        SqlConnection connection = new SqlConnection(connectionString);

        string query = @"DELETE FROM Contacts
                         WHERE ContactID = @ContactID;";

        SqlCommand command = new SqlCommand(query, connection);

        command.Parameters.AddWithValue("@ContactID", contactID);

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
        DeleteContact(9);

        Console.ReadKey();
    }
}

