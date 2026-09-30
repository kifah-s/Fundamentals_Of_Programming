using DVLD_DataAccess;
using System.Data;

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


        public static void TestGetAllCountries()
        {
            DataTable dtCountries = clsCountryData.GetAllCountries();

            if (dtCountries != null && dtCountries.Rows.Count > 0)
            {
                Console.WriteLine($"[SUCCESS] Total Countries Found: {dtCountries.Rows.Count}\n");

                Console.WriteLine($"{"ID",-5} | {"Country Name",-30}");
                Console.WriteLine(new string('-', 40));

                foreach (DataRow row in dtCountries.Rows)
                {
                    int countryID = Convert.ToInt32(row["CountryID"]);
                    string countryName = row["CountryName"].ToString();

                    Console.WriteLine($"{countryID,-5} | {countryName,-30}");
                }
            }
            else
            {
                Console.WriteLine("[WARNING] No records found in the Countries table or failed to connect.");
            }
        }
    }
}
