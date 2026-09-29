using Microsoft.Data.SqlClient;
using System.Data;

namespace DVLD_DataAccess
{
    public class clsPersonData
    {
        public static bool GetPersonInfoByID(int personID, ref string firstName, ref string secondName, ref string thirdName, ref string lastName, ref string nationalNo, ref DateTime dateOfBirth, ref short gendor, ref string address, ref string phone, ref string email, ref int nationalityCountryID, ref string imagePath)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM People WHERE PersonID = @personID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@personID", personID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found.
                    isFound = true;

                    firstName = (string)reader["FirstName"];
                    secondName = (string)reader["SecondName"];

                    // thirdName: allows null in database so we should (handle) null.
                    if (reader["ThirdName"] != DBNull.Value)
                    {
                        thirdName = (string)reader["ThirdName"];
                    }
                    else
                    {
                        thirdName = "";
                    }

                    lastName = (string)reader["LastName"];
                    nationalNo = (string)reader["NationalNo"];
                    dateOfBirth = (DateTime)reader["DateOfBirth"];
                    gendor = (byte)reader["Gendor"];
                    address = (string)reader["Address"];
                    phone = (string)reader["Phone"];

                    // email: allows null in database so we should (handle) null.
                    if (reader["Email"] != DBNull.Value)
                    {
                        email = (string)reader["Email"];
                    }
                    else
                    {
                        email = "";
                    }

                    nationalityCountryID = (int)reader["NationalityCountryID"];


                    // imagePath: allows null in database so we should (handle) null.
                    if (reader["imagePath"] != DBNull.Value)
                    {
                        imagePath = (string)reader["imagePath"];
                    }
                    else
                    {
                        imagePath = "";
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


        public static bool GetPersonByNationalNo(string nationalNo, ref int personID, ref string firstName, ref string secondName, ref string thirdName, ref string lastName, ref DateTime dateOfBirth, ref short gendor, ref string address, ref string phone, ref string email, ref int nationalityCountryID, ref string imagePath)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM People WHERE NationalNO = @nationalNo";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@nationalNo", nationalNo);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found.
                    isFound = true;

                    personID = (int)reader["PersonID"];
                    firstName = (string)reader["FirstName"];
                    secondName = (string)reader["SecondName"];

                    // ThirdName: allows null in database so we should handle null.
                    if (reader["ThirdName"] != DBNull.Value)
                    {
                        thirdName = (string)reader["ThirdName"];
                    }
                    else
                    {
                        thirdName = "";
                    }

                    lastName = (string)reader["LastName"];
                    dateOfBirth = (DateTime)reader["DateOfBirth"];
                    gendor = (byte)reader["Gendor"];
                    address = (string)reader["Address"];
                    phone = (string)reader["Phone"];

                    // Email: allows null in database so we should handle null.
                    if (reader["Email"] != DBNull.Value)
                    {
                        email = (string)reader["Email"];
                    }
                    else
                    {
                        email = "";
                    }

                    nationalityCountryID = (int)reader["NationalityCountryID"];

                    //ImagePath: allows null in database so we should handle null.
                    if (reader["ImagePath"] != DBNull.Value)
                    {
                        imagePath = (string)reader["ImagePath"];
                    }
                    else
                    {
                        imagePath = "";
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


        public static int AddNewPerson(string firstName, string secondName, string thirdName, string lastName, string nationalNo, DateTime dateOfBirth, short gendor, string address, string phone, string email, int nationalityCountryID, string imagePath)
        {
            // This function will return the new person id if succeeded and -1 if not.
            int personID = -1;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"INSERT INTO People (FirstName, SecondName, ThirdName, LastName, NationalNo, DateOfBirth,
                                                Gendor, Address, Phone, Email, NationalityCountryID, ImagePath)
                            VALUES(@FirstName, @SecondName, @ThirdName, @LastName, @NationalNo, @DateOfBirth, @Gendor,
                                                @Address, @Phone, @Email, @NationalityCountryID, @ImagePath);
                            SELECT SCOPE_IDENTITY()";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@FirstName", firstName);
            command.Parameters.AddWithValue("@SecondName", secondName);

            if (thirdName != "" && thirdName != null)
            {
                command.Parameters.AddWithValue("@ThirdName", thirdName);
            }
            else
            {
                command.Parameters.AddWithValue("@ThirdName", System.DBNull.Value);
            }

            command.Parameters.AddWithValue("@LastName", lastName);
            command.Parameters.AddWithValue("@NationalNo", nationalNo);
            command.Parameters.AddWithValue("@DateOfBirth", dateOfBirth);
            command.Parameters.AddWithValue("@Gendor", gendor);
            command.Parameters.AddWithValue("@Address", address);
            command.Parameters.AddWithValue("@Phone", phone);

            if (email != "" && email != null)
            {
                command.Parameters.AddWithValue("@Email", email);
            }
            else
            {
                command.Parameters.AddWithValue("@Email", System.DBNull.Value);
            }

            command.Parameters.AddWithValue("@NationalityCountryID", nationalityCountryID);

            if (imagePath != "" && imagePath != null)
            {
                command.Parameters.AddWithValue("@ImagePath", imagePath);
            }
            else
            {
                command.Parameters.AddWithValue("@ImagePath", System.DBNull.Value);
            }

            try
            {
                connection.Open();

                object result = command.ExecuteScalar();

                if (result != null && int.TryParse(result.ToString(), out int insertedID))
                {
                    personID = insertedID;
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

            return personID;
        }


        public static bool UpdatePerson(int personID, string firstName, string secondName, string thirdName, string lastName, string nationalNo, DateTime dateOfBirth, short gendor, string address, string phone, string email, int nationalityCountryID, string imagePath)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"UPDATE People
                             SET FirstName = @FirstName,
                                 SecondName = @SecondName,
                                 ThirdName = @ThirdName,
                                 LastName = @LastName, 
                                 NationalNo = @NationalNo,
                                 DateOfBirth = @DateOfBirth,
                                 Gendor = @Gendor,
                                 Address = @Address,  
                                 Phone = @Phone,
                                 Email = @Email, 
                                 NationalityCountryID = @NationalityCountryID,
                                 ImagePath = @ImagePath
                                 WHERE PersonID = @PersonID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@PersonID", personID);
            command.Parameters.AddWithValue("@FirstName", firstName);
            command.Parameters.AddWithValue("@SecondName", secondName);

            if (thirdName != "" && thirdName != null)
            {
                command.Parameters.AddWithValue("@ThirdName", thirdName);
            }
            else
            {
                command.Parameters.AddWithValue("@ThirdName", System.DBNull.Value);
            }

            command.Parameters.AddWithValue("@LastName", lastName);
            command.Parameters.AddWithValue("@NationalNo", nationalNo);
            command.Parameters.AddWithValue("@DateOfBirth", dateOfBirth);
            command.Parameters.AddWithValue("@Gendor", gendor);
            command.Parameters.AddWithValue("@Address", address);
            command.Parameters.AddWithValue("@Phone", phone);

            if (email != "" && email != null)
            {
                command.Parameters.AddWithValue("@Email", email);
            }
            else
            {
                command.Parameters.AddWithValue("@Email", System.DBNull.Value);
            }

            command.Parameters.AddWithValue("@NationalityCountryID", nationalityCountryID);

            if (imagePath != "" && imagePath != null)
            {
                command.Parameters.AddWithValue("@ImagePath", imagePath);
            }
            else
            {
                command.Parameters.AddWithValue("@ImagePath", System.DBNull.Value);
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


        public static DataTable GetAllPeople()
        {
            DataTable dt = new DataTable();

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"SELECT People.PersonID, People.NationalNo, People.FirstName, People.SecondName, People.ThirdName,
                            People.LastName, People.DateOfBirth, People.Gendor,
	                        CASE
                            WHEN People.Gendor = 0
                            THEN 'Male'
                            ELSE 'Female'
                            END as GendorCaption,
                            People.Address, People.Phone, People.Email, People.NationalityCountryID, Countries.CountryName, People.ImagePath
                            FROM People
                            INNER JOIN Countries
                            ON People.NationalityCountryID = Countries.CountryID
                            ORDER BY People.FirstName";

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


        public static bool DeletePerson(int personID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"DELETE People WHERE PersonID = @PersonID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@PersonID", personID);

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


        public static bool IsPersonExist(int personID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT Found = 1 FROM People WHERE PersonID = @PersonID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@PersonID", personID);

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


        public static bool IsPersonExist(string nationalNo)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT Found = 1 FROM People WHERE NationalNo = @NationalNo";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@NationalNo", nationalNo);

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
    }
}
