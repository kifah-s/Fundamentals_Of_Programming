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

    }
}
