using DVLD_DataAccess;
using System.Data;

namespace DVLD_Business
{
    public class clsCountry
    {
        public int countryID { set; get; }
        public string countryName { set; get; }

        public clsCountry()
        {
            this.countryID = -1;
            this.countryName = "";
        }

        private clsCountry(int countryID, string countryName)
        {
            this.countryID = countryID;
            this.countryName = countryName;
        }

        public static clsCountry Find(int countryID)
        {
            string countryName = "";

            if (clsCountryData.GetCountryInfoByID(countryID, ref countryName))
            {
                return new clsCountry(countryID, countryName);
            }
            else
            {
                return null;
            }
        }

        public static clsCountry Find(string countryName)
        {
            int countryID = -1;

            if (clsCountryData.GetCountryInfoByName(countryName, ref countryID))
            {
                return new clsCountry(countryID, countryName);
            }
            else
            {
                return null;
            }
        }

        public static DataTable GetAllCountries()
        {
            return clsCountryData.GetAllCountries();
        }
    }
}
