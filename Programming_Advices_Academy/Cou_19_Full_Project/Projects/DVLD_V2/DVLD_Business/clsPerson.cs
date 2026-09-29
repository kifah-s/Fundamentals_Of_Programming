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





    }
}
