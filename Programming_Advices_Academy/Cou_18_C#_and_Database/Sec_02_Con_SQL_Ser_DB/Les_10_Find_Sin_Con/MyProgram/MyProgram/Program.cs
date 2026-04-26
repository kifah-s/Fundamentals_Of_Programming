using System;
using System.Data.SqlClient;

internal class Program
{
    static string connectionString = "Server = .;" +
                                     "Database = ContactsDB;" +
                                     "User ID = sa;" +
                                     "Password = sql12345;";

    public static bool FindContactByID(int ContactID, ref stContact ContactInfo)
    {
        bool isFound = false;

        SqlConnection connection = new SqlConnection(connectionString);

        string query = "SELECT * FROM Contacts WHERE ContactID = @ContactID";

        SqlCommand command = new SqlCommand(query, connection);

        command.Parameters.AddWithValue("@ContactID", ContactID);

        try
        {
            connection.Open();

            SqlDataReader reader = command.ExecuteReader();

            if (reader.Read())
            {
                // The Record Was Found.
                isFound = true;

                ContactInfo.ID = (int)reader["ContactID"];
                ContactInfo.FirstName = (string)reader["FirstName"];
                ContactInfo.LastName = (string)reader["LastName"];
                ContactInfo.Email = (string)reader["Email"];
                ContactInfo.Phone = (string)reader["Phone"];
                ContactInfo.Address = (string)reader["Address"];
                ContactInfo.CountryID = (int)reader["CountryID"];
            }
            else
            {
                // The Record Was Not Found.
                isFound = false;
            }

            reader.Close();
            connection.Close();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Erroe: {ex.Message}");
        }

        return isFound;
    }


    public struct stContact
    {
        public int ID { get; set; }

        public string FirstName { get; set; }

        public string LastName { get; set; }

        public string Email { get; set; }

        public string Phone { get; set; }

        public string Address { get; set; }

        public int CountryID { get; set; }
    }


    static void Main(string[] args)
    {
        stContact ContactInfo = new stContact();

        if (FindContactByID(1, ref ContactInfo))
        {
            Console.WriteLine($"Contact ID: {ContactInfo.ID}");
            Console.WriteLine($"Name: {ContactInfo.FirstName} {ContactInfo.LastName}");
            Console.WriteLine($"Email: {ContactInfo.Email}");
            Console.WriteLine($"Phone: {ContactInfo.Phone}");
            Console.WriteLine($"Address: {ContactInfo.Address}");
            Console.WriteLine($"Country ID: {ContactInfo.CountryID}");
        }
        else
        {
            Console.WriteLine("Contact is not found.");
        }

        Console.ReadKey();
    }
}

