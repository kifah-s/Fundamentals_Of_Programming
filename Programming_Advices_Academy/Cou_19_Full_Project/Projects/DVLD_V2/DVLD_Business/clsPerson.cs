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





    }
}
