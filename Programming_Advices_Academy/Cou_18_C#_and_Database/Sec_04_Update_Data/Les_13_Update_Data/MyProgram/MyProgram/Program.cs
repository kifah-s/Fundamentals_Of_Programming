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

    public static void UpdateContact(int contactID, stContact contactInfo)
    {
        SqlConnection connection = new SqlConnection(connectionString);

        string query = @"UPDATE Contacts
                       SET FirstName = @FirstName,
                            LastName = @LastName,
                            Email = @Email,
                            Phone = @Phone,
                            Address = @Address,
                            CountryID = @CountryID
                       WHERE ContactID = @ContactID;";

        SqlCommand command = new SqlCommand(query, connection);

        command.Parameters.AddWithValue("@ContactID", contactID);
        command.Parameters.AddWithValue("@FirstName", contactInfo.FirstName);
        command.Parameters.AddWithValue("@LastName", contactInfo.LastName);
        command.Parameters.AddWithValue("@Email", contactInfo.Email);
        command.Parameters.AddWithValue("@Phone", contactInfo.Phone);
        command.Parameters.AddWithValue("@Address", contactInfo.Address);
        command.Parameters.AddWithValue("@CountryID", contactInfo.CountryID);

        try
        {
            connection.Open();

            int rowsAffected = command.ExecuteNonQuery();

            if (rowsAffected > 0)
            {
                Console.WriteLine("Record Update Successfully.");
            }
            else
            {
                Console.WriteLine("Record Update Failed.");
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
        stContact ContactInfo = new stContact
        {
            FirstName = "Kifah",
            LastName = "Saloum",
            Email = "kifah@saloum.com",
            Phone = "00963998621421",
            Address = "Swida, Shahba",
            CountryID = 1
        };

        UpdateContact(1, ContactInfo);

        Console.ReadKey();
    }
}

