using DVLD_DataAccess;
using System.Data;

namespace DVLD_Business
{
    public class clsApplicationType
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode mode = enMode.addNew;

        public int id { set; get; }
        public string title { set; get; }
        public float fees { set; get; }

        public clsApplicationType()
        {
            this.id = -1;
            this.title = "";
            this.fees = 0;

            mode = enMode.addNew;
        }

        public clsApplicationType(int id, string applicationTypeTitle, float applicationTypeFees)
        {
            this.id = id;
            this.title = applicationTypeTitle;
            this.fees = applicationTypeFees;

            mode = enMode.update;
        }

        private bool _AddNewApplicationType()
        {
            // Call DataAccess Layer.
            this.id = clsApplicationTypeData.AddNewApplicationType(this.title, this.fees);

            return (this.id != -1);
        }

        private bool _UpdateApplicationType()
        {
            // Call DataAccess Layer.
            return (clsApplicationTypeData.UpdateApplicationType(this.id, this.title, this.fees));
        }

        public static clsApplicationType Find(int id)
        {
            string title = "";
            float fees = 0;

            if (clsApplicationTypeData.GetApplicationTypeInfoByID(id, ref title, ref fees))
            {
                return new clsApplicationType(id, title, fees);
            }
            else
            {
                return null;
            }
        }

        public static DataTable GetAllApplicationTypes()
        {
            return clsApplicationTypeData.GetAllApplicationTypes();
        }

        public bool Save()
        {
            switch (mode)
            {
                case enMode.addNew:
                    {
                        if (_AddNewApplicationType())
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
                        return _UpdateApplicationType();
                    }
            }

            return false;
        }
    }
}
