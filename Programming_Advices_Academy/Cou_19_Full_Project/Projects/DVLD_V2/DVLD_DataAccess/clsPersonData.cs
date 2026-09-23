using Microsoft.Data.SqlClient;

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
    }
}
