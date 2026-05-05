using L3_DataAccLay;
using System;
using System.Data;

namespace L2_BusLay
{
    public class clsContact
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode mode = enMode.addNew;

        public int ID { get; set; }

        public string firstName { get; set; }

        public string lastName { get; set; }

        public string email { get; set; }

        public string phone { get; set; }

        public string address { get; set; }

        public DateTime dateOfBirth { get; set; }

        public string imagePath { get; set; }

        public int countryID { get; set; }

        public clsContact()
        {
            this.ID = -1;
            this.firstName = "";
            this.lastName = "";
            this.email = "";
            this.phone = "";
            this.address = "";
            this.dateOfBirth = DateTime.Now;
            this.countryID = -1;
            this.imagePath = "";

            mode = enMode.addNew;
        }

        private clsContact(int ID, string firstName, string lastName, string email, string phone, string address, DateTime dateOfBirth, int countryID, string imagePath)
        {
            this.ID = ID;
            this.firstName = firstName;
            this.lastName = lastName;
            this.email = email;
            this.phone = phone;
            this.address = address;
            this.dateOfBirth = dateOfBirth;
            this.countryID = countryID;
            this.imagePath = imagePath;

            mode = enMode.update;
        }

        private bool _AddNewContact()
        {
            // Call Database Layer.
            this.ID = clsContactDataAccess.AddNewContact(this.firstName, this.lastName, this.email, this.phone, this.address, this.dateOfBirth, this.countryID, this.imagePath);

            return (this.ID != -1);
        }

        private bool _UpdateContact()
        {
            // Call Database Layer.
            return clsContactDataAccess.UpdateContact(this.ID, this.firstName, this.lastName, this.email, this.phone, this.address, this.dateOfBirth, this.countryID, this.imagePath); ;
        }

        public static clsContact Find(int ID)
        {
            string firstName = "", lastName = "", email = "", phone = "", address = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            int countryID = -1;

            if (clsContactDataAccess.GetContactInfoByID(ID, ref firstName, ref lastName, ref email, ref phone, ref address, ref dateOfBirth, ref countryID, ref imagePath))
            {
                return new clsContact(ID, firstName, lastName, email, phone, address, dateOfBirth, countryID, imagePath);
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
                        if (_AddNewContact())
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
                        return _UpdateContact();
                    }
            }

            return false;
        }

        public static bool DeleteContact(int ID)
        {
            return clsContactDataAccess.DeleteContact(ID);
        }

        public static bool IsContactExist(int ID)
        {
            return clsContactDataAccess.IsContactExist(ID);
        }

        public static DataTable GetAllContacts()
        {
            return clsContactDataAccess.GetAllContacts();
        }
    }
}