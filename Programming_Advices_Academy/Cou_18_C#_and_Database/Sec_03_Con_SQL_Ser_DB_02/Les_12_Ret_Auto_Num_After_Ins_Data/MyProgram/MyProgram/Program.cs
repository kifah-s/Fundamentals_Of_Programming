using System;
using System.Data.SqlClient;

internal class Program
{
    //static string connectionString = "Server = .;" +
    //                                 "Database = ContactsDB;" +
    //                                 "User ID = sa;" +
    //                                 "Password = sql12345;";

    static string connectionString = @"Server = .;
                                     Database = ContactsDB;
                                     User ID = sa;
                                     Password = sql12345;";

    public static void AddNewContactAndGetID(stContact NewContact)
    {
        SqlConnection connection = new SqlConnection(connectionString);

        string query = @"INSERT INTO Contacts (FirstName, LastName, Email, Phone, Address, CountryID)
                         VALUES(@FirstName, @LastName, @Email, @Phone, @Address, @CountryID);
                         SELECT SCOPE_IDENTITY();";

        SqlCommand command = new SqlCommand(query, connection);

        command.Parameters.AddWithValue("@FirstName", NewContact.FirstName);
        command.Parameters.AddWithValue("@LastName", NewContact.LastName);
        command.Parameters.AddWithValue("@Email", NewContact.Email);
        command.Parameters.AddWithValue("@Phone", NewContact.Phone);
        command.Parameters.AddWithValue("@Address", NewContact.Address);
        command.Parameters.AddWithValue("@CountryID", NewContact.CountryID);

        try
        {
            connection.Open();

            object result = command.ExecuteScalar();

            if (result != null && int.TryParse(result.ToString(), out int insertedID))
            {
                Console.WriteLine($"Newly inserted ID: {insertedID}.");
            }
            else
            {
                Console.WriteLine("Failed to retrived the inserted ID.");
            }

            connection.Close();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Erroe: {ex.Message}");
        }
    }


    public struct stContact
    {
        public string FirstName { get; set; }

        public string LastName { get; set; }

        public string Email { get; set; }

        public string Phone { get; set; }

        public string Address { get; set; }

        public int CountryID { get; set; }
    }


    static void Main(string[] args)
    {
        stContact Contact = new stContact
        {
            FirstName = "Laila",
            LastName = "Maher",
            Email = "laila@example.com",
            Phone = "0123456789",
            Address = "Syria, Swida",
            CountryID = 1
        };

        AddNewContactAndGetID(Contact);

        Console.ReadKey();
    }
}

