using DVLD_Business;

namespace DVLD_Test.BusinessTests
{
    public class clsCountryTests
    {
        public static void TestFindCountry(int countryID)
        {
            clsCountry country = clsCountry.Find(countryID);

            if (country != null)
            {
                Console.WriteLine("Country found successfully!");
                Console.WriteLine($"Country ID: {country.countryID}");
                Console.WriteLine($"Country Name: {country.countryName}");
            }
            else
            {
                Console.WriteLine("Country was not found.");
            }
        }

        public static void TestFindCountry(string countryName)
        {
            clsCountry country = clsCountry.Find(countryName);

            if (country != null)
            {
                Console.WriteLine("Country found successfully!");
                Console.WriteLine($"Country Name: {country.countryName}");
                Console.WriteLine($"Country ID: {country.countryID}");
            }
            else
            {
                Console.WriteLine("Country was not found.");
            }
        }


    }
}
