using System;
using System.Data.SqlClient;

internal class Program
{
    static string connectionString = "Server = .;" +
                                     "Database = ContactsDB;" +
                                     "User ID = sa;" +
                                     "Password = sql12345;";

    public static void AddNewContact(stContact NewContact)
    {
        SqlConnection connection = new SqlConnection(connectionString);

        string query = @"INSERT INTO Contacts (FirstName, LastName, Email, Phone, Address, CountryID)
                         VALUES(@FirstName, @LastName, @Email, @Phone, @Address, @CountryID)";

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

            int rowsAffected = command.ExecuteNonQuery();

            if (rowsAffected > 0)
            {
                Console.WriteLine("Record inserted successfully.");
            }
            else
            {
                Console.WriteLine("Record inserted failed.");
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
            FirstName = "Kifah",
            LastName = "Saloum",
            Email = "kifa@example.com",
            Phone = "0988621421",
            Address = "Syria, Swida",
            CountryID = 1
        };

        AddNewContact(Contact);

        Console.ReadKey();
    }
}

