using DVLD_DataAccess;

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
    }
}
