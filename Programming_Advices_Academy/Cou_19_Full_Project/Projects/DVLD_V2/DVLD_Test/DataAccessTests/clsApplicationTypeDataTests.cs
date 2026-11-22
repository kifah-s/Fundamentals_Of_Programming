using DVLD_DataAccess;

namespace DVLD_Test.DataAccessTests
{
    public class clsApplicationTypeDataTests
    {
        public static void TestGetApplicationTypeInfoByID(int applicationTypeID)
        {
            string title = string.Empty;
            float fees = 0f;

            bool isFound = clsApplicationTypeData.GetApplicationTypeInfoByID(applicationTypeID, ref title, ref fees);

            if (isFound)
            {
                Console.WriteLine($"[PASS] ID: {applicationTypeID} | Title: {title} | Fees: {fees}");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / ERROR] No record found for ID: {applicationTypeID}");
            }
        }
    }
}
