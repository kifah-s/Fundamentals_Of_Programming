using Microsoft.Data.SqlClient;
using System.Data;

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

        public static DataTable GetAllLocalDrivingLicenseApplications()
        {
            DataTable dt = new DataTable();

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"SELECT *
                             FROM
                             LocalDrivingLicenseApplications_View
                             ORDER BY
                             ApplicationDate DESC";

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

        public static int AddNewLocalDrivingLicenseApplication(int applicationID, int licenseClassID)
        {
            // This function will return the new person id if succeeded and -1 if not.
            int localDrivingLicenseApplicationID = -1;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"INSERT INTO
                             LocalDrivingLicenseApplications (ApplicationID, LicenseClassID)
                             VALUES
                             (@applicationID, @licenseClassID);

                             SELECT SCOPE_IDENTITY();";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);
            command.Parameters.AddWithValue("@licenseClassID", licenseClassID);

            try
            {
                connection.Open();

                object result = command.ExecuteScalar();

                if (result != null && int.TryParse(result.ToString(), out int insertedID))
                {
                    localDrivingLicenseApplicationID = insertedID;
                }
            }

            catch (Exception ex)
            {
                //Console.WriteLine("Error: " + ex.Message);
            }

            finally
            {
                connection.Close();
            }

            return localDrivingLicenseApplicationID;
        }

        public static bool UpdateLocalDrivingLicenseApplication(int localDrivingLicenseApplicationID, int applicationID, int licenseClassID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"Update LocalDrivingLicenseApplications  
                             SET ApplicationID = @applicationID,
                                 LicenseClassID = @licenseClassID
                             WHERE
                                 LocalDrivingLicenseApplicationID = @localDrivingLicenseApplicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@localDrivingLicenseApplicationID", localDrivingLicenseApplicationID);
            command.Parameters.AddWithValue("@applicationID", applicationID);
            command.Parameters.AddWithValue("@licenseClassID", licenseClassID);

            try
            {
                connection.Open();

                rowsAffected = command.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                //Console.WriteLine("Error: " + ex.Message);
                return false;
            }
            finally
            {
                connection.Close();
            }

            return (rowsAffected > 0);
        }

        public static bool DeleteLocalDrivingLicenseApplication(int localDrivingLicenseApplicationID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"Delete LocalDrivingLicenseApplications 
                             WHERE
                             LocalDrivingLicenseApplicationID = @localDrivingLicenseApplicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@localDrivingLicenseApplicationID", localDrivingLicenseApplicationID);

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
    }
}
