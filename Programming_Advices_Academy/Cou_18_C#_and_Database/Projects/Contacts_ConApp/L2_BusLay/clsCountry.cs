using L3_DataAccLay;
using System;
using System.Data;

namespace L2_BusLay
{
    public class clsCountry
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode Mode = enMode.addNew;

        public int ID { set; get; }

        public string countryName { set; get; }

        public clsCountry()
        {
            this.ID = -1;
            this.countryName = "";

            Mode = enMode.addNew;
        }

        private clsCountry(int ID, string countryName)
        {
            this.ID = ID;
            this.countryName = countryName;

            Mode = enMode.update;
        }

        private bool _AddNewCountry()
        {
            // Call DataAccess Layer .
            this.ID = clsCountryDataAccess.AddNewCountry(this.countryName);

            return (this.ID != -1);
        }

        private bool _UpdateContact()
        {
            // Call DataAccess Layer.
            return clsCountryDataAccess.UpdateCountry(this.ID, this.countryName);
        }

        public static clsCountry Find(int ID)
        {
            string countryName = "";
            DateTime dateOfBirth = DateTime.Now;

            int countryID = -1;

            if (clsCountryDataAccess.GetCountryInfoByID(ID, ref countryName))
            {
                return new clsCountry(ID, countryName);
            }
            else
            {
                return null;
            }
        }

        public static clsCountry Find(string countryName)
        {
            int ID = -1;

            if (clsCountryDataAccess.GetCountryInfoByName(countryName, ref ID))
            {
                return new clsCountry(ID, countryName);
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