using DVLD_DataAccess;
using System.Data;

namespace DVLD_Test.DataAccessTests
{
    public class clsApplicationDataTests
    {
        public static void TestGetApplicationInfoByID(int applicationID)
        {
            int applicantPersonID = -1;
            DateTime applicationDate = DateTime.MinValue;
            int applicationTypeID = -1;
            byte applicationStatus = 0;
            DateTime lastStatusDate = DateTime.MinValue;
            float paidFees = 0f;
            int createdByUserID = -1;

            bool isFound = clsApplicationData.GetApplicationInfoByID(applicationID, ref applicantPersonID, ref applicationDate, ref applicationTypeID, ref applicationStatus, ref lastStatusDate, ref paidFees, ref createdByUserID);

            if (isFound)
            {
                Console.WriteLine($"[PASS] ApplicationID: {applicationID}");
                Console.WriteLine($"  ApplicantPersonID : {applicantPersonID}");
                Console.WriteLine($"  ApplicationDate   : {applicationDate}");
                Console.WriteLine($"  ApplicationTypeID : {applicationTypeID}");
                Console.WriteLine($"  ApplicationStatus : {applicationStatus}");
                Console.WriteLine($"  LastStatusDate    : {lastStatusDate}");
                Console.WriteLine($"  PaidFees          : {paidFees}");
                Console.WriteLine($"  CreatedByUserID   : {createdByUserID}");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / ERROR] No Application found with ID: {applicationID}");
            }
        }

        public static void TestGetAllApplications()
        {
            DataTable dt = clsApplicationData.GetAllApplications();

            if (dt != null && dt.Rows.Count > 0)
            {
                Console.WriteLine($"[PASS] Total Applications: {dt.Rows.Count}");
                Console.WriteLine("--------------------------------------------------------------------------------");

                foreach (DataRow row in dt.Rows)
                {
                    Console.WriteLine(
                        $"AppID: {row["ApplicationID"]} | " +
                        $"PersonID: {row["ApplicantPersonID"]} | " +
                        $"TypeID: {row["ApplicationTypeID"]} | " +
                        $"Status: {row["ApplicationStatus"]} | " +
                        $"Date: {row["ApplicationDate"]} | " +
                        $"PaidFees: {row["PaidFees"]} | " +
                        $"UserID: {row["CreatedByUserID"]}"
                    );
                }
            }
            else
            {
                Console.WriteLine("[EMPTY / ERROR] No applications found or an exception occurred.");
            }
        }

        public static void TestAddNewApplication(int applicantPersonID, DateTime applicationDate, int applicationTypeID, byte applicationStatus, DateTime lastStatusDate, float paidFees, int createdByUserID)
        {
            int newApplicationID = clsApplicationData.AddNewApplication(applicantPersonID, applicationDate, applicationTypeID, applicationStatus,
                                                                        lastStatusDate, paidFees, createdByUserID);

            if (newApplicationID != -1)
            {
                Console.WriteLine($"[PASS] Inserted Application! New ApplicationID: {newApplicationID}");
                Console.WriteLine($"PersonID: {applicantPersonID} | TypeID: {applicationTypeID} | " + $"Status: {applicationStatus} | PaidFees: {paidFees} | UserID: {createdByUserID}");
            }
            else
            {
                Console.WriteLine("[FAIL] Could not insert Application. Check foreign keys (PersonID, ApplicationTypeID, UserID) or SQL constraints.");
            }
        }

        public static void TestUpdateApplication(int applicationID, int applicantPersonID, DateTime applicationDate, int applicationTypeID, byte applicationStatus, DateTime lastStatusDate, float paidFees, int createdByUserID)
        {
            bool isUpdated = clsApplicationData.UpdateApplication(applicationID, applicantPersonID, applicationDate, applicationTypeID,
                                                                  applicationStatus, lastStatusDate, paidFees, createdByUserID);

            if (isUpdated)
            {
                Console.WriteLine($"[PASS] Updated Application #{applicationID} successfully.");
                Console.WriteLine($"PersonID: {applicantPersonID} | TypeID: {applicationTypeID} | " + $"Status: {applicationStatus} | PaidFees: {paidFees} | UserID: {createdByUserID}");
            }
            else
            {
                Console.WriteLine($"[FAIL] Could not update Application #{applicationID}. Check ID existence, foreign keys, or SQL constraints.");
            }
        }

        public static void TestDeleteApplication(int applicationID)
        {
            bool isDeleted = clsApplicationData.DeleteApplication(applicationID);

            if (isDeleted)
            {
                Console.WriteLine($"[PASS] Deleted Application #{applicationID} successfully.");
            }
            else
            {
                Console.WriteLine($"[FAIL / NOT FOUND] Could not delete Application #{applicationID}. It may not exist or may be referenced by another table (Foreign Key).");
            }
        }

        public static void TestIsApplicationExist(int applicationID)
        {
            bool isFound = clsApplicationData.IsApplicationExist(applicationID);

            if (isFound)
            {
                Console.WriteLine($"[PASS] Application #{applicationID} EXISTS.");
            }
            else
            {
                Console.WriteLine($"[PASS / NOT FOUND] Application #{applicationID} DOES NOT EXIST.");
            }
        }

        public static void TestGetActiveApplicationID(int personID, int applicationTypeID)
        {
            int activeApplicationID = clsApplicationData.GetActiveApplicationID(personID, applicationTypeID);

            if (activeApplicationID != -1)
            {
                Console.WriteLine(
                    $"[PASS] Active Application found! ActiveApplicationID: {activeApplicationID} " + $"(PersonID: {personID}, ApplicationTypeID: {applicationTypeID}, Status = 1)"
                );
            }
            else
            {
                Console.WriteLine(
                    $"[NOT FOUND / -1] No active application (Status = 1) found for " + $"PersonID: {personID} and ApplicationTypeID: {applicationTypeID}."
                );
            }
        }

        public static void TestGetActiveApplicationIDForLicenseClass(int personID, int applicationTypeID, int licenseClassID)
        {
            int activeApplicationID = clsApplicationData.GetActiveApplicationIDForLicenseClass(personID, applicationTypeID, licenseClassID);

            if (activeApplicationID != -1)
            {
                Console.WriteLine($"[PASS] Active Local Application found! ActiveApplicationID: {activeApplicationID} " + $"(PersonID: {personID}, ApplicationTypeID: {applicationTypeID}, LicenseClassID: {licenseClassID}, Status = 1)");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / -1] No active application (Status = 1) found for " + $"PersonID: {personID}, ApplicationTypeID: {applicationTypeID}, LicenseClassID: {licenseClassID}.");
            }
        }


    }
}
