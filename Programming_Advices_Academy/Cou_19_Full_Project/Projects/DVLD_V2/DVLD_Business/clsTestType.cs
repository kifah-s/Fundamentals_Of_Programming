using DVLD_DataAccess;
using System.Data;

namespace DVLD_Business
{
    public class clsTestType
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode mode = enMode.addNew;
        public enum enTestType { visionTest = 1, writtenTest = 2, streetTest = 3 };

        public clsTestType.enTestType id { set; get; }

        public string title { set; get; }

        public string description { set; get; }

        public float fees { set; get; }

        public clsTestType()
        {
            this.id = clsTestType.enTestType.visionTest;
            this.title = "";
            this.description = "";
            this.fees = 0;

            mode = enMode.addNew;
        }

        public clsTestType(clsTestType.enTestType id, string testTypeTitle, string description, float testTypeFees)
        {
            this.id = id;
            this.title = testTypeTitle;
            this.description = description;
            this.fees = testTypeFees;

            mode = enMode.update;
        }

        private bool _AddNewTestType()
        {
            // Call DataAccess Layer.
            this.id = (clsTestType.enTestType)clsTestTypeData.AddNewTestType(this.title, this.description, this.fees);

            return (this.title != "");
        }

        private bool _UpdateTestType()
        {
            // Call DataAccess Layer.
            return clsTestTypeData.UpdateTestType((int)this.id, this.title, this.description, this.fees);
        }

        public static clsTestType Find(clsTestType.enTestType testTypeID)
        {
            string title = "", description = ""; float fees = 0;

            if (clsTestTypeData.GetTestTypeInfoByID((int)testTypeID, ref title, ref description, ref fees))
            {
                return new clsTestType(testTypeID, title, description, fees);
            }
            else
            {
                return null;
            }

        }

        public static DataTable GetAllTestTypes()
        {
            return clsTestTypeData.GetAllTestTypes();
        }

        public bool Save()
        {
            switch (mode)
            {
                case enMode.addNew:
                    if (_AddNewTestType())
                    {
                        mode = enMode.update;

                        return true;
                    }
                    else
                    {
                        return false;
                    }

                case enMode.update:
                    return _UpdateTestType();
            }

            return false;
        }
    }
}
