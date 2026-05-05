using System;
using System.Data;
using System.Data.SqlClient;

namespace L3_DataAccLay
{
    public class clsContactDataAccess
    {
        public static bool GetContactInfoByID(int ID, ref string firstName, ref string lastName, ref string email, ref string phone, ref string address, ref DateTime dateOdBirth, ref int countryID, ref string imageBath)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"SELECT *
                            FROM Contacts
                            WHERE ContactID = @ContactID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@ContactID", ID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The Record Was Found.
                    isFound = true;

                    firstName = (string)reader["FirstName"];
                    lastName = (string)reader["LastName"];
                    email = (string)reader["Email"];
                    phone = (string)reader["Phone"];
                    address = (string)reader["Address"];
                    dateOdBirth = (DateTime)reader["DateOfBirth"];
                    countryID = (int)reader["CountryID"];

                    // ImagePath: allows null in database so we should handle null.
                    if (reader["ImagePath"] != DBNull.Value)
                    {
                        imageBath = (string)reader["ImagePath"];
                    }
                    else
                    {
                        imageBath = "";
                    }
                }
                else
                {
                    // The record was not found.
                    isFound = false;
                }

                reader.Close();
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
                isFound = false;
            }
            finally
            {
                connection.Close();
            }

            return isFound;
        }

        public static int AddNewContact(string firstName, string lastName, string email, string phone, string address, DateTime dateOfBirth, int countryID, string imagePath)
        {
            // This function will return the new contact id if succeeded and -1 if not.
            int contactID = -1;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"INSERT INTO Contacts
                            (FirstName, LastName, Email, Phone, Address, DateOfBirth, CountryID, ImagePath)
                            VALUES
                            (@firstName, @lastName, @email, @phone, @address, @dateOfBirth, @countryID, @imagePath);
                             SELECT SCOPE_IDENTITY();";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@firstName", firstName);
            command.Parameters.AddWithValue("@lastName", lastName);
            command.Parameters.AddWithValue("@email", email);
            command.Parameters.AddWithValue("@phone", phone);
            command.Parameters.AddWithValue("@address", address);
            command.Parameters.AddWithValue("@dateOfBirth", dateOfBirth);
            command.Parameters.AddWithValue("@countryID", countryID);

            if (imagePath != "")
            {
                command.Parameters.AddWithValue("@imagePath", imagePath);
            }
            else
            {
                command.Parameters.AddWithValue("@imagePath", System.DBNull.Value);
            }

            try
            {
                connection.Open();

                object result = command.ExecuteScalar();

                if (result != null && int.TryParse(result.ToString(), out int insertedID))
                {
                    contactID = insertedID;
                }
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
            }
            finally
            {
                connection.Close();
            }

            return contactID;
        }

        public static bool UpdateContact(int ID, string firstName, string lastName, string email, string phone, string address, DateTime dateOfBirth, int countryID, string imagePath)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"Update Contacts  
                            set FirstName = @firstName, 
                                LastName = @lastName, 
                                Email = @email, 
                                Phone = @phone, 
                                Address = @address, 
                                DateOfBirth = @dateOfBirth,
                                CountryID = @countryID,
                                ImagePath = @imagePath
                                where ContactID = @contactID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@contactID", ID);
            command.Parameters.AddWithValue("@firstName", firstName);
            command.Parameters.AddWithValue("@lastName", lastName);
            command.Parameters.AddWithValue("@email", email);
            command.Parameters.AddWithValue("@phone", phone);
            command.Parameters.AddWithValue("@address", address);
            command.Parameters.AddWithValue("@dateOfBirth", dateOfBirth);
            command.Parameters.AddWithValue("@countryID", countryID);

            if (imagePath != "")
            {
                command.Parameters.AddWithValue("@imagePath", imagePath);
            }
            else
            {
                command.Parameters.AddWithValue("@imagePath", System.DBNull.Value);
            }

            try
            {
                connection.Open();

                rowsAffected = command.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
                return false;
            }
            finally
            {
                connection.Close();
            }

            return (rowsAffected > 0);
        }

        public static bool IsContactExist(int ID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT Found = 1 FROM Contacts WHERE ContactID = @contactID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@contactID", ID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                isFound = reader.HasRows;

                reader.Close();
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
                isFound = false;
            }
            finally
            {
                connection.Close();
            }

            return isFound;
        }

        public static bool DeleteContact(int contactID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"Delete Contacts where ContactID = @contactID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@contactID", contactID);

            try
            {
                connection.Open();

                rowsAffected = command.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
            }
            finally
            {
                connection.Close();
            }

            return (rowsAffected > 0);
        }

        public static DataTable GetAllContacts()
        {
            DataTable dt = new DataTable();

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM Contacts";

            SqlCommand command = new SqlCommand(query, connection);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.HasRows)
                {
                    dt.Load(reader);
                }

                reader.Close();
            }
            catch (Exception ex)
            {
                // Console.WriteLine("Error: " + ex.Message);
            }
            finally
            {
                connection.Close();
            }

            return dt;
        }
    }
}
