using DVLD_DataAccess;

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
    }
}
