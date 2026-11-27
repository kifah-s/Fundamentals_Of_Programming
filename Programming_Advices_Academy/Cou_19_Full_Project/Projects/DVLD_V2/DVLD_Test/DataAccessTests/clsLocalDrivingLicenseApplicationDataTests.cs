using DVLD_DataAccess;
using System.Data;

namespace DVLD_Test.DataAccessTests
{
    public class clsLocalDrivingLicenseApplicationDataTests
    {
        public static void TestGetLocalDrivingLicenseApplicationInfoByID(int localDrivingLicenseApplicationID)
        {
            int applicationID = -1;
            int licenseClassID = -1;

            bool isFound = clsLocalDrivingLicenseApplicationData.GetLocalDrivingLicenseApplicationInfoByID(localDrivingLicenseApplicationID, ref applicationID, ref licenseClassID);

            if (isFound)
            {
                Console.WriteLine($"[PASS] Local Driving License Application #{localDrivingLicenseApplicationID} FOUND!");
                Console.WriteLine($"ApplicationID: {applicationID} | LicenseClassID: {licenseClassID}");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / FALSE] Local Driving License Application #{localDrivingLicenseApplicationID} was not found.");
            }
        }

        public static void TestGetLocalDrivingLicenseApplicationInfoByApplicationID(int applicationID)
        {
            int localDrivingLicenseApplicationID = -1;
            int licenseClassID = -1;

            bool isFound = clsLocalDrivingLicenseApplicationData.GetLocalDrivingLicenseApplicationInfoByApplicationID(applicationID, ref localDrivingLicenseApplicationID, ref licenseClassID);

            if (isFound)
            {
                Console.WriteLine($"[PASS] Local Driving License Application found for Application #{applicationID}!");
                Console.WriteLine($"LocalDrivingLicenseApplicationID: {localDrivingLicenseApplicationID} | " + $"LicenseClassID: {licenseClassID}");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / FALSE] No Local Driving License Application found for Application #{applicationID}.");
            }
        }

        public static void TestGetAllLocalDrivingLicenseApplications()
        {
            DataTable dt = clsLocalDrivingLicenseApplicationData.GetAllLocalDrivingLicenseApplications();

            if (dt != null && dt.Rows.Count > 0)
            {
                Console.WriteLine($"[PASS] Retrieved {dt.Rows.Count} Local Driving License Application(s).");

                Console.WriteLine("Columns: " + string.Join(" | ", dt.Columns.Cast<DataColumn>().Select(c => c.ColumnName)));

                int rowsToShow = Math.Min(dt.Rows.Count, 5);

                for (int i = 0; i < rowsToShow; i++)
                {
                    DataRow row = dt.Rows[i];
                    Console.WriteLine($"Row {i + 1}: " + string.Join(" | ", row.ItemArray));
                }
            }
            else
            {
                Console.WriteLine("[EMPTY / NO ROWS] No records found in LocalDrivingLicenseApplications_View (DataTable is empty).");
            }
        }

        public static void TestAddNewLocalDrivingLicenseApplication(int applicationID, int licenseClassID)
        {
            int newID = clsLocalDrivingLicenseApplicationData.AddNewLocalDrivingLicenseApplication(applicationID, licenseClassID);

            if (newID != -1)
            {
                Console.WriteLine($"[PASS] Added new LocalDrivingLicenseApplication! New ID: {newID}");
                Console.WriteLine($"ApplicationID: {applicationID} | LicenseClassID: {licenseClassID}");
            }
            else
            {
                Console.WriteLine($"[FAIL] Could not add LocalDrivingLicenseApplication. Check ApplicationID ({applicationID}), LicenseClassID ({licenseClassID}), or constraints.");
            }
        }

        public static void TestUpdateLocalDrivingLicenseApplication(int localDrivingLicenseApplicationID, int applicationID, int licenseClassID)
        {
            bool isUpdated = clsLocalDrivingLicenseApplicationData.UpdateLocalDrivingLicenseApplication(localDrivingLicenseApplicationID, applicationID, licenseClassID);

            if (isUpdated)
            {
                Console.WriteLine($"[PASS] Updated LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} successfully.");
                Console.WriteLine($"ApplicationID: {applicationID} | LicenseClassID: {licenseClassID}");
            }
            else
            {
                Console.WriteLine($"[FAIL] Could not update LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID}. Check ID existence, foreign keys, or SQL constraints.");
            }
        }

        public static void TestDeleteLocalDrivingLicenseApplication(int localDrivingLicenseApplicationID)
        {
            bool isDeleted = clsLocalDrivingLicenseApplicationData.DeleteLocalDrivingLicenseApplication(localDrivingLicenseApplicationID);

            if (isDeleted)
            {
                Console.WriteLine($"[PASS] Deleted LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} successfully.");
            }
            else
            {
                Console.WriteLine($"[FAIL / NOT FOUND] Could not delete LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID}. It may not exist or may be referenced by another table (e.g. TestAppointments).");
            }
        }

        public static void TestDoesPassTestType(int localDrivingLicenseApplicationID, int testTypeID)
        {
            bool isPassed = clsLocalDrivingLicenseApplicationData.DoesPassTestType(localDrivingLicenseApplicationID, testTypeID);

            if (isPassed)
            {
                Console.WriteLine($"[PASS] LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} PASSED TestType #{testTypeID}.");
            }
            else
            {
                Console.WriteLine($"[FALSE / NOT PASSED] LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} has NOT passed TestType #{testTypeID} (or no test record exists).");
            }
        }

        public static void TestDoesAttendTestType(int localDrivingLicenseApplicationID, int testTypeID)
        {
            bool isAttended = clsLocalDrivingLicenseApplicationData.DoesAttendTestType(localDrivingLicenseApplicationID, testTypeID);

            if (isAttended)
            {
                Console.WriteLine($"[PASS] LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} ATTENDED TestType #{testTypeID} (test record exists).");
            }
            else
            {
                Console.WriteLine($"[FALSE / NOT ATTENDED] LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} has NO recorded test for TestType #{testTypeID}.");
            }
        }

        public static void TestTotalTrialsPerTest(int localDrivingLicenseApplicationID, int testTypeID)
        {
            byte trialsCount = clsLocalDrivingLicenseApplicationData.TotalTrialsPerTest(localDrivingLicenseApplicationID, testTypeID);

            Console.WriteLine($"[TEST] LocalDrivingLicenseApplication #{localDrivingLicenseApplicationID} | " + $"TestType #{testTypeID} => TotalTrialsPerTest: {trialsCount}");
        }
    }
}
