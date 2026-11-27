using Microsoft.Data.SqlClient;

namespace DVLD_DataAccess
{
    public class clsLocalDrivingLicenseApplicationData
    {
        public static bool GetLocalDrivingLicenseApplicationInfoByID(int localDrivingLicenseApplicationID, ref int applicationID, ref int licenseClassID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);


            string query = @"SELECT *
                             FROM
                             LocalDrivingLicenseApplications
                             WHERE
                             LocalDrivingLicenseApplicationID = @localDrivingLicenseApplicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@localDrivingLicenseApplicationID", localDrivingLicenseApplicationID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found.
                    isFound = true;

                    applicationID = (int)reader["ApplicationID"];
                    licenseClassID = (int)reader["LicenseClassID"];
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

        public static bool GetLocalDrivingLicenseApplicationInfoByApplicationID(int applicationID, ref int localDrivingLicenseApplicationID, ref int licenseClassID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"SELECT *
                             FROM
                             LocalDrivingLicenseApplications
                             WHERE
                             ApplicationID = @applicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found
                    isFound = true;

                    localDrivingLicenseApplicationID = (int)reader["LocalDrivingLicenseApplicationID"];
                    licenseClassID = (int)reader["LicenseClassID"];
                }
                else
                {
                    // The record was not found
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
