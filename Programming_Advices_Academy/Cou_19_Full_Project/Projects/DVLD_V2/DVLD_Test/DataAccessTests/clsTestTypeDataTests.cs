using DVLD_DataAccess;
using System.Data;

namespace DVLD_Test.DataAccessTests
{
    public class clsTestTypeDataTests
    {
        public static void TestGetTestTypeInfoByID(int testTypeID)
        {
            string title = string.Empty;
            string description = string.Empty;
            float fees = 0f;

            bool isFound = clsTestTypeData.GetTestTypeInfoByID(testTypeID, ref title, ref description, ref fees);

            if (isFound)
            {
                Console.WriteLine($"[PASS] ID: {testTypeID} | Title: {title} | Description: {description} | Fees: {fees}");
            }
            else
            {
                Console.WriteLine($"[NOT FOUND / ERROR] No TestType found for ID: {testTypeID}");
            }
        }

        public static void TestGetAllTestTypes()
        {
            DataTable dt = clsTestTypeData.GetAllTestTypes();

            if (dt != null && dt.Rows.Count > 0)
            {
                Console.WriteLine($"[PASS] Total TestTypes: {dt.Rows.Count}");

                foreach (DataRow row in dt.Rows)
                {
                    Console.WriteLine(
                        $"ID: {row["TestTypeID"]} | Title: {row["TestTypeTitle"]} | Description: {row["TestTypeDescription"]} | Fees: {row["TestTypeFees"]}"
                    );
                }
            }
            else
            {
                Console.WriteLine("[EMPTY / ERROR] DataTable is empty or an error occurred.");
            }
        }

        public static void TestAddNewTestType(string title, string description, float fees)
        {
            int newTestTypeID = clsTestTypeData.AddNewTestType(title, description, fees);

            if (newTestTypeID != -1)
            {
                Console.WriteLine($"[PASS] Inserted TestType! New ID: {newTestTypeID} | Title: {title} | Fees: {fees}");
            }
            else
            {
                Console.WriteLine($"[FAIL] Could not insert TestType: \"{title}\"");
            }
        }
    }
}
