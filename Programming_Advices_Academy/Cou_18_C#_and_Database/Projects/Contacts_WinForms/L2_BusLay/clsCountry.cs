using L3_DataAccLay;
using System.Data;

namespace L2_BusLay
{
    public class clsCountry
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode Mode = enMode.addNew;

        public int ID { set; get; }

        public string countryName { set; get; }

        public string code { set; get; }

        public string phoneCode { set; get; }



        public clsCountry()
        {
            this.ID = -1;
            this.countryName = "";

            Mode = enMode.addNew;
        }

        private clsCountry(int ID, string countryName, string code, string phoneCode)
        {
            this.ID = ID;
            this.countryName = countryName;
            this.code = code;
            this.code = phoneCode;

            Mode = enMode.update;
        }

        private bool _AddNewCountry()
        {
            // Call DataAccess Layer .
            this.ID = clsCountryDataAccess.AddNewCountry(this.countryName, this.code, this.phoneCode);

            return (this.ID != -1);
        }

        private bool _UpdateContact()
        {
            // Call DataAccess Layer.
            return clsCountryDataAccess.UpdateCountry(this.ID, this.countryName, this.code, this.phoneCode);
        }

        public static clsCountry Find(int ID)
        {
            string countryName = "";
            string code = "";
            string phoneCode = "";

            // DateTime dateOfBirth = DateTime.Now;
            // int countryID = -1;


            if (clsCountryDataAccess.GetCountryInfoByID(ID, ref countryName, ref code, ref phoneCode))
            {
                return new clsCountry(ID, countryName, code, phoneCode);
            }
            else
            {
                return null;
            }
        }

        public static clsCountry Find(string countryName)
        {
            int ID = -1;
            string code = "";
            string phoneCode = "";

            if (clsCountryDataAccess.GetCountryInfoByName(countryName, ref ID, ref code, ref phoneCode))
            {
                return new clsCountry(ID, countryName, code, phoneCode);
            }
            else
            {
                return null;
            }
        }

        public static bool IsCountryExist(int ID)
        {
            return clsCountryDataAccess.IsCountryExist(ID);
        }

        public static bool IsCountryExist(string CountryName)
        {
            return clsCountryDataAccess.IsCountryExist(CountryName);
        }

        public bool Save()
        {
            switch (Mode)
            {
                case enMode.addNew:
                    {
                        if (_AddNewCountry())
                        {
                            Mode = enMode.update;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }

                case enMode.update:
                    {
                        return _UpdateContact();
                    }

            }

            return false;
        }

        public static bool DeleteCountry(int ID)
        {
            return clsCountryDataAccess.DeleteCountry(ID);
        }

        public static DataTable GetAllCountries()
        {
            return clsCountryDataAccess.GetAllCountries();
        }
    }
}