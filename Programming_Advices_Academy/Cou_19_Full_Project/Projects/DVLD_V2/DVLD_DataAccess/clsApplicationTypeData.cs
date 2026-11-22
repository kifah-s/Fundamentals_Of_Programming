using Microsoft.Data.SqlClient;

namespace DVLD_DataAccess
{
    public class clsApplicationTypeData
    {
        public static bool GetApplicationTypeInfoByID(int applicationTypeID, ref string applicationTypeTitle, ref float applicationFees)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM ApplicationTypes WHERE ApplicationTypeID = @applicationTypeID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationTypeID", applicationTypeID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found.
                    isFound = true;

                    applicationTypeTitle = (string)reader["ApplicationTypeTitle"];
                    applicationFees = Convert.ToSingle(reader["ApplicationFees"]);
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
                //Console.WriteLine("Error: " + ex.Message);
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
