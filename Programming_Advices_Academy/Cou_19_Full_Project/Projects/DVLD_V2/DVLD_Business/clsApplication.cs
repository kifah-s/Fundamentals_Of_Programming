using DVLD_DataAccess;

namespace DVLD_Business
{
    public class clsApplication
    {
        public enum enMode { addNew = 0, update = 1 };
        public enMode mode = enMode.addNew;

        public enum enApplicationStatus { New = 1, Cancelled = 2, Completed = 3 };

        public enum enApplicationType
        {
            newDrivingLicense = 1,
            renewDrivingLicense = 2,
            replaceLostDrivingLicense = 3,
            replaceDamagedDrivingLicense = 4,
            releaseDetainedDrivingLicense = 5,
            newInternationalLicense = 6,
            retakeTest = 7
        }

        public int applicationID { set; get; }

        public int applicantPersonID { set; get; }

        public string applicantFullName
        {
            get
            {
                return clsPerson.Find(applicantPersonID).fullName;
            }
        }

        public DateTime applicationDate { set; get; }

        public int applicationTypeID { set; get; }

        public clsApplicationType applicationTypeInfo;

        public enApplicationStatus applicationStatus { set; get; }

        public string statusText
        {
            get
            {
                switch (applicationStatus)
                {
                    case enApplicationStatus.New:
                        return "New";

                    case enApplicationStatus.Cancelled:
                        return "Cancelled";

                    case enApplicationStatus.Completed:
                        return "Completed";

                    default:
                        return "Unknown";
                }
            }
        }

        public DateTime lastStatusDate { set; get; }

        public float paidFees { set; get; }

        public int createdByUserID { set; get; }

        public clsUser createdByUserInfo;

        public clsApplication()
        {
            this.applicationID = -1;
            this.applicantPersonID = -1;
            this.applicationDate = DateTime.Now;
            this.applicationTypeID = -1;
            this.applicationStatus = enApplicationStatus.New;
            this.lastStatusDate = DateTime.Now;
            this.paidFees = 0;
            this.createdByUserID = -1;

            mode = enMode.addNew;
        }

        private clsApplication(int applicationID, int applicantPersonID, DateTime applicationDate, int applicationTypeID, enApplicationStatus applicationStatus, DateTime lastStatusDate, float paidFees, int createdByUserID)
        {
            this.applicationID = applicationID;
            this.applicantPersonID = applicantPersonID;
            this.applicationDate = applicationDate;
            this.applicationTypeID = applicationTypeID;
            this.applicationTypeInfo = clsApplicationType.Find(applicationTypeID);
            this.applicationStatus = applicationStatus;
            this.lastStatusDate = lastStatusDate;
            this.paidFees = paidFees;
            this.createdByUserID = createdByUserID;
            this.createdByUserInfo = clsUser.FindByUserID(createdByUserID);

            mode = enMode.update;
        }

        private bool _AddNewApplication()
        {
            // Call DataAccess Layer.
            this.applicationID = clsApplicationData.AddNewApplication(this.applicantPersonID, this.applicationDate, this.applicationTypeID,
                (byte)this.applicationStatus, this.lastStatusDate, this.paidFees, this.createdByUserID);

            return (this.applicationID != -1);
        }

        private bool _UpdateApplication()
        {
            // Call DataAccess Layer.
            return clsApplicationData.UpdateApplication(this.applicationID, this.applicantPersonID, this.applicationDate, this.applicationTypeID,
                (byte)this.applicationStatus, this.lastStatusDate, this.paidFees, this.createdByUserID);
        }

        public static clsApplication FindBaseApplication(int applicationID)
        {
            int applicantPersonID = -1;
            DateTime applicationDate = DateTime.Now;
            int applicationTypeID = -1;
            byte applicationStatus = 1;
            DateTime lastStatusDate = DateTime.Now;
            float paidFees = 0;
            int createdByUserID = -1;

            bool isFound = clsApplicationData.GetApplicationInfoByID(applicationID, ref applicantPersonID, ref applicationDate,
                                                                     ref applicationTypeID, ref applicationStatus, ref lastStatusDate, ref paidFees,
                                                                     ref createdByUserID);

            if (isFound)
            {
                // We return new object of that person with the right data.
                return new clsApplication(applicationID, applicantPersonID, applicationDate, applicationTypeID,
                                         (enApplicationStatus)applicationStatus, lastStatusDate, paidFees, createdByUserID);
            }
            else
            {
                return null;
            }
        }

        public bool SetCancel()
        {
            return clsApplicationData.UpdateStatus(applicationID, 2);
        }

        public bool SetComplete()
        {
            return clsApplicationData.UpdateStatus(applicationID, 3);
        }

        public bool SetDelete()
        {
            return clsApplicationData.DeleteApplication(applicationID);
        }

        public bool Save()
        {
            switch (mode)
            {
                case enMode.addNew:
                    if (_AddNewApplication())
                    {
                        mode = enMode.update;

                        return true;
                    }
                    else
                    {
                        return false;
                    }

                case enMode.update:
                    return _UpdateApplication();
            }

            return false;
        }

        public static bool IsApplicationExist(int applicationID)
        {
            return clsApplicationData.IsApplicationExist(applicationID);
        }

        public static bool DoesPersonHaveActiveApplication(int PersonID, int ApplicationTypeID)
        {
            return clsApplicationData.DoesPersonHaveActiveApplication(PersonID, ApplicationTypeID);
        }

        public bool DoesPersonHaveActiveApplication(int ApplicationTypeID)
        {
            return DoesPersonHaveActiveApplication(this.applicantPersonID, ApplicationTypeID);
        }

        public static int GetActiveApplicationID(int personID, clsApplication.enApplicationType applicationTypeID)
        {
            return clsApplicationData.GetActiveApplicationID(personID, (int)applicationTypeID);
        }

        public static int GetActiveApplicationIDForLicenseClass(int personID, clsApplication.enApplicationType applicationTypeID, int licenseClassID)
        {
            return clsApplicationData.GetActiveApplicationIDForLicenseClass(personID, (int)applicationTypeID, licenseClassID);
        }

        public int GetActiveApplicationID(clsApplication.enApplicationType applicationTypeID)
        {
            return GetActiveApplicationID(this.applicantPersonID, applicationTypeID);
        }
    }
}
