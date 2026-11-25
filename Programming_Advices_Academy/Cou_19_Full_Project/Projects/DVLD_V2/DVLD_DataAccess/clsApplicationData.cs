using Microsoft.Data.SqlClient;
using System.Data;

namespace DVLD_DataAccess
{
    public class clsApplicationData
    {
        public static bool GetApplicationInfoByID(int applicationID, ref int applicantPersonID, ref DateTime applicationDate, ref int applicationTypeID, ref byte applicationStatus, ref DateTime lastStatusDate, ref float paidFees, ref int createdByUserID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM Applications WHERE ApplicationID = @applicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                if (reader.Read())
                {
                    // The record was found.
                    isFound = true;

                    applicantPersonID = (int)reader["ApplicantPersonID"];
                    applicationDate = (DateTime)reader["ApplicationDate"];
                    applicationTypeID = (int)reader["ApplicationTypeID"];
                    applicationStatus = (byte)reader["ApplicationStatus"];
                    lastStatusDate = (DateTime)reader["LastStatusDate"];
                    paidFees = Convert.ToSingle(reader["PaidFees"]);
                    createdByUserID = (int)reader["CreatedByUserID"];
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
                // The record was not found.
                isFound = false;
            }
            finally
            {
                connection.Close();
            }

            return isFound;
        }

        public static DataTable GetAllApplications()
        {
            DataTable dt = new DataTable();

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT * FROM Applications ORDER BY ApplicationDate DESC";

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

        public static int AddNewApplication(int applicantPersonID, DateTime applicationDate, int applicationTypeID, byte applicationStatus, DateTime lastStatusDate, float paidFees, int createdByUserID)
        {
            // This function will return the new person id if succeeded and -1 if not.
            int applicationID = -1;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"INSERT INTO Applications
                            (ApplicantPersonID, ApplicationDate, ApplicationTypeID,
                             ApplicationStatus, LastStatusDate, PaidFees, CreatedByUserID)
                             VALUES
                            (@applicantPersonID, @applicationDate, @applicationTypeID,
                             @applicationStatus, @lastStatusDate, @paidFees, @createdByUserID);

                             SELECT SCOPE_IDENTITY();";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicantPersonID", applicantPersonID);
            command.Parameters.AddWithValue("@applicationDate", applicationDate);
            command.Parameters.AddWithValue("@applicationTypeID", applicationTypeID);
            command.Parameters.AddWithValue("@applicationStatus", applicationStatus);
            command.Parameters.AddWithValue("@lastStatusDate", lastStatusDate);
            command.Parameters.AddWithValue("@paidFees", paidFees);
            command.Parameters.AddWithValue("@createdByUserID", createdByUserID);

            try
            {
                connection.Open();

                object result = command.ExecuteScalar();

                if (result != null && int.TryParse(result.ToString(), out int insertedID))
                {
                    applicationID = insertedID;
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

            return applicationID;
        }

        public static bool UpdateApplication(int applicationID, int applicantPersonID, DateTime applicationDate, int applicationTypeID, byte applicationStatus, DateTime lastStatusDate, float paidFees, int createdByUserID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"UPDATE Applications  
                            SET
                                ApplicantPersonID = @applicantPersonID,
                                ApplicationDate = @applicationDate,
                                ApplicationTypeID = @applicationTypeID,
                                ApplicationStatus = @applicationStatus, 
                                LastStatusDate = @lastStatusDate,
                                PaidFees = @paidFees,
                                CreatedByUserID = @createdByUserID
                            WHERE
                                ApplicationID=@applicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);
            command.Parameters.AddWithValue("@applicantPersonID", applicantPersonID);
            command.Parameters.AddWithValue("@applicationDate", applicationDate);
            command.Parameters.AddWithValue("@applicationTypeID", applicationTypeID);
            command.Parameters.AddWithValue("@applicationStatus", applicationStatus);
            command.Parameters.AddWithValue("@lastStatusDate", lastStatusDate);
            command.Parameters.AddWithValue("@paidFees", paidFees);
            command.Parameters.AddWithValue("@createdByUserID", createdByUserID);

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

        public static bool DeleteApplication(int applicationID)
        {
            int rowsAffected = 0;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"DELETE Applications 
                             WHERE
                             ApplicationID = @applicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);

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

        public static bool IsApplicationExist(int applicationID)
        {
            bool isFound = false;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = "SELECT Found = 1 FROM Applications WHERE ApplicationID = @applicationID";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicationID", applicationID);

            try
            {
                connection.Open();

                SqlDataReader reader = command.ExecuteReader();

                isFound = reader.HasRows;

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

        public static int GetActiveApplicationID(int personID, int applicationTypeID)
        {
            int activeApplicationID = -1;

            SqlConnection connection = new SqlConnection(clsDataAccessSettings.connectionString);

            string query = @"SELECT ActiveApplicationID = ApplicationID
                             FROM Applications
                             WHERE ApplicantPersonID = @applicantPersonID
                             and ApplicationTypeID = @applicationTypeID
                             and ApplicationStatus = 1";

            SqlCommand command = new SqlCommand(query, connection);

            command.Parameters.AddWithValue("@applicantPersonID", personID);
            command.Parameters.AddWithValue("@applicationTypeID", applicationTypeID);

            try
            {
                connection.Open();

                object result = command.ExecuteScalar();

                if (result != null && int.TryParse(result.ToString(), out int appID))
                {
                    activeApplicationID = appID;
                }
            }
            catch (Exception ex)
            {
                //Console.WriteLine("Error: " + ex.Message);
                return activeApplicationID;
            }
            finally
            {
                connection.Close();
            }

            return activeApplicationID;
        }
    }
}
