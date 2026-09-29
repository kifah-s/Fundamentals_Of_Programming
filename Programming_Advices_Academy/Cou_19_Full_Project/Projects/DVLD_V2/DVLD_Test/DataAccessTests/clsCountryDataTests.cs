using DVLD_DataAccess;

namespace DVLD_Test.DataAccessTests
{
    public class clsCountryDataTests
    {
        public static void TestGetCountryInfoByID(int existingCountryID)
        {
            string countryName = string.Empty;

            if (clsCountryData.GetCountryInfoByID(existingCountryID, ref countryName))
            {
                Console.WriteLine($"[SUCCESS] Country Found!");
                Console.WriteLine($"Country ID   : {existingCountryID}");
                Console.WriteLine($"Country Name : {countryName}\n");
            }
            else
            {
                Console.WriteLine($"[FAILED] Country with ID ({existingCountryID}) was NOT found.\n");
            }
        }



    }
}
