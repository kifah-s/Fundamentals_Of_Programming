using DVLD_DataAccess;
using System.Data;

namespace DVLD_Business
{
    public class clsPerson
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode mode = enMode.addNew;

        public int personID { set; get; }
        public string firstName { set; get; }
        public string secondName { set; get; }
        public string thirdName { set; get; }
        public string lastName { set; get; }
        public string fullName
        {
            get { return firstName + " " + secondName + " " + thirdName + " " + lastName; }
        }
        public string nationalNo { set; get; }
        public DateTime dateOfBirth { set; get; }
        public short gendor { set; get; }
        public string address { set; get; }
        public string phone { set; get; }
        public string email { set; get; }
        public int nationalityCountryID { set; get; }

        public clsCountry countryInfo;

        private string _imagePath;

        public string imagePath
        {
            set { _imagePath = value; }
            get { return _imagePath; }
        }

        public clsPerson()
        {
            this.personID = -1;
            this.firstName = "";
            this.secondName = "";
            this.thirdName = "";
            this.lastName = "";
            this.dateOfBirth = DateTime.Now;
            this.address = "";
            this.phone = "";
            this.email = "";
            this.nationalityCountryID = -1;
            this.imagePath = "";

            mode = enMode.addNew;
        }

        private clsPerson(int personID, string firstName, string secondName, string thirdName, string lastName, string nationalNo, DateTime dateOfBirth, short gendor, string address, string phone, string email, int nationalityCountryID, string imagePath)
        {
            this.personID = personID;
            this.firstName = firstName;
            this.secondName = secondName;
            this.thirdName = thirdName;
            this.lastName = lastName;
            this.nationalNo = nationalNo;
            this.dateOfBirth = dateOfBirth;
            this.gendor = gendor;
            this.address = address;
            this.phone = phone;
            this.email = email;
            this.nationalityCountryID = nationalityCountryID;
            this.imagePath = imagePath;
            this.countryInfo = clsCountry.Find(nationalityCountryID);

            mode = enMode.update;
        }


        private bool _AddNewPerson()
        {
            // Call DataAccess Layer.
            this.personID = clsPersonData.AddNewPerson(this.firstName, this.secondName, this.thirdName, this.lastName, this.nationalNo, this.dateOfBirth, this.gendor, this.address, this.phone, this.email, this.nationalityCountryID, this.imagePath);

            return (this.personID != -1);
        }

        private bool _UpdatePerson()
        {
            // Call Data Access.
            return clsPersonData.UpdatePerson(this.personID, this.firstName, this.secondName, this.thirdName, this.lastName, this.nationalNo, this.dateOfBirth, this.gendor, this.address, this.phone, this.email, this.nationalityCountryID, this.imagePath);
        }

        public static clsPerson Find(int personID)
        {
            string firstName = "", secondName = "", thirdName = "", lastName = "", nationalNo = "", email = "", phone = "", address = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            int nationalityCountryID = -1;
            short gendor = 0;

            bool isFound = clsPersonData.GetPersonInfoByID(personID, ref firstName, ref secondName, ref thirdName, ref lastName, ref nationalNo, ref dateOfBirth, ref gendor, ref address, ref phone, ref email, ref nationalityCountryID, ref imagePath);

            if (isFound)
            {
                // We return new object of that person with the right data.
                return new clsPerson(personID, firstName, secondName, thirdName, lastName, nationalNo, dateOfBirth, gendor, address, phone, email, nationalityCountryID, imagePath);
            }
            else
            {
                return null;
            }
        }

        public static clsPerson Find(string nationalNo)
        {
            string firstName = "", secondName = "", thirdName = "", lastName = "", email = "", phone = "", address = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            int personID = -1, nationalityCountryID = -1;
            short gendor = 0;

            bool isFound = clsPersonData.GetPersonInfoByNationalNo(nationalNo, ref personID, ref firstName, ref secondName, ref thirdName, ref lastName, ref dateOfBirth, ref gendor, ref address, ref phone, ref email, ref nationalityCountryID, ref imagePath);

            if (isFound)
            {
                // We return new object of that person with the right data.
                return new clsPerson(personID, firstName, secondName, thirdName, lastName, nationalNo, dateOfBirth, gendor, address, phone, email, nationalityCountryID, imagePath);
            }
            else
            {
                return null;
            }
        }

        public bool Save()
        {
            switch (mode)
            {
                case enMode.addNew:
                    {
                        if (_AddNewPerson())
                        {
                            mode = enMode.update;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                case enMode.update:
                    {
                        return _UpdatePerson();
                    }
            }

            return false;
        }

        public static DataTable GetAllPeople()
        {
            return clsPersonData.GetAllPeople();
        }

        public static bool DeletePerson(int personID)
        {
            return clsPersonData.DeletePerson(personID);
        }

        public static bool IsPersonExist(int personID)
        {
            return clsPersonData.IsPersonExist(personID);
        }

        public static bool IsPersonExist(string nationalNo)
        {
            return clsPersonData.IsPersonExist(nationalNo);
        }
    }
}
