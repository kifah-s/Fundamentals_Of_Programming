using DVLD_DataAccess;
using System.Data;

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

        public static void TestGetAllApplicationTypes()
        {
            DataTable dt = clsApplicationTypeData.GetAllApplicationTypes();

            if (dt != null && dt.Rows.Count > 0)
            {
                Console.WriteLine($"[PASS] Total rows: {dt.Rows.Count}");

                foreach (DataRow row in dt.Rows)
                {
                    Console.WriteLine($"ID: {row["ApplicationTypeID"]} | Title: {row["ApplicationTypeTitle"]} | Fees: {row["ApplicationFees"]}");
                }
            }
            else
            {
                Console.WriteLine("[EMPTY / ERROR] DataTable has no rows or an exception occurred.");
            }
        }

        public static void TestAddNewApplicationType(string title, float fees)
        {
            int newID = clsApplicationTypeData.addNewApplicationType(title, fees);

            if (newID != -1)
            {
                Console.WriteLine($"[PASS] Inserted successfully! New ApplicationTypeID: {newID} | Title: {title} | Fees: {fees}");
            }
            else
            {
                Console.WriteLine($"[FAIL] Could not insert ApplicationType with Title: {title}");
            }
        }
    }
}
