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


        public static void TestGetCountryInfoByName(string existingCountryName)
        {
            int countryID = 0;

            if (clsCountryData.GetCountryInfoByName(existingCountryName, ref countryID))
            {
                Console.WriteLine($"[SUCCESS] Country Found!");
                Console.WriteLine($"Country Name   : {existingCountryName}");
                Console.WriteLine($"Country ID : {countryID}\n");
            }
            else
            {
                Console.WriteLine($"[FAILED] Country with Name ({existingCountryName}) was NOT found.\n");
            }
        }



    }
}
