using DVLD_DataAccess;

namespace DVLD_Business
{
    public class clsUser
    {
        public enum enMode { addNew = 0, update = 1 };

        public enMode mode = enMode.addNew;

        public int userID { get; set; }

        public int personID { get; set; }

        public string userName { get; set; }

        public string password { get; set; }

        public bool isActive { get; set; }

        public clsPerson PersonInfo;

        public clsUser()
        {
            this.userID = -1;
            //this.personID = -1;
            this.userName = "";
            this.password = "";
            this.isActive = true;

            mode = enMode.addNew;
        }

        private clsUser(int userID, int personID, string userName, string password, bool isActive)
        {
            this.userID = userID;
            this.personID = personID;
            this.userName = userName;
            this.password = password;
            this.isActive = isActive;

            mode = enMode.update;

            this.PersonInfo = clsPerson.Find(personID);
        }

        private bool _AddNewUser()
        {
            // Call DataAccess Layer.
            this.userID = clsUserData.AddNewUser(this.personID, this.userName, this.password, this.isActive);

            return (this.userID != -1);

        }

        private bool _UpdateUser()
        {
            // Call DataAccess Layer.
            return clsUserData.UpdateUser(this.userID, this.personID, this.userName, this.password, this.isActive);
        }

        public static clsUser FindByUserID(int userID)
        {
            int personID = -1;
            string userName = "", password = "";
            bool isActive = false;

            bool isFound = clsUserData.GetUserInfoByUserID(userID, ref personID, ref userName, ref password, ref isActive);

            if (isFound)
            {
                // We return new object of that User with the right data.
                return new clsUser(userID, personID, userName, password, isActive);
            }
            else
            {
                return null;
            }
        }

        public static clsUser FindByPersonID(int personID)
        {
            int userID = -1;
            string userName = "", password = "";
            bool isActive = false;

            bool isFound = clsUserData.GetUserInfoByPersonID(personID, ref userID, ref userName, ref password, ref isActive);

            if (isFound)
            {
                // We return new object of that User with the right data.
                return new clsUser(userID, userID, userName, password, isActive);
            }
            else
            {
                return null;
            }
        }


    }
}
