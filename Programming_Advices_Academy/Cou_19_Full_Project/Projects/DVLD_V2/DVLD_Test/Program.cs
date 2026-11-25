using DVLD_Test.DataAccessTests;

namespace DVLD_Test
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // clsPersonDataTests ..

            //clsPersonDataTests.TestGetPersonInfoByID(1);
            //clsPersonDataTests.GetPersonInfoByNationalNoTest("N1");
            //clsPersonDataTests.TestAddNewPerson();
            //clsPersonDataTests.TestUpdatePerson(1030);
            //clsPersonDataTests.TestGetAllPeople();
            //clsPersonDataTests.TestDeletePerson(1030);
            //clsPersonDataTests.TestIsPersonExist(9999);
            //clsPersonDataTests.TestIsPersonExist("N500");

            // ---------------------------------------------------------------

            // clsCountryDataTests ..

            //clsCountryDataTests.TestGetCountryInfoByID(1);
            //clsCountryDataTests.TestGetCountryInfoByName("Italy");
            //clsCountryDataTests.TestGetAllCountries();

            // ---------------------------------------------------------------

            // clsCountryTests ..

            //clsCountryTests.TestFindCountry(1);
            //clsCountryTests.TestFindCountry("syria");
            //clsCountryTests.TestGetAllCountries();

            // ---------------------------------------------------------------

            // clsUserDataTests ..

            //clsUserDataTests.TestGetUserInfoByUserID(1);
            //clsUserDataTests.TestGetUserInfoByPersonID(1025);
            //clsUserDataTests.TestGetUserInfoByUsernameAndPassword("user4", "12345");
            //clsUserDataTests.TestAddNewUser();
            //clsUserDataTests.TestUpdateUser();
            //clsUserDataTests.TestGetAllUsers();
            //clsUserDataTests.TestDeleteUser();
            //clsUserDataTests.TestIsUserExist(1);
            //clsUserDataTests.TestIsUserExist("user4");
            //clsUserDataTests.TestIsUserExistForPersonID(1025);
            //clsUserDataTests.TestDoesPersonHaveUser(1025);
            //clsUserDataTests.TestChangePassword(17, "12345");

            // ---------------------------------------------------------------

            // clsApplicationTypeDataTests ..
            //clsApplicationTypeDataTests.TestGetApplicationTypeInfoByID(10);
            //clsApplicationTypeDataTests.TestGetAllApplicationTypes();
            //clsApplicationTypeDataTests.TestAddNewApplicationType("Test 1", 20);

            // ---------------------------------------------------------------

            // clsTestTypeDataTests ..
            //clsTestTypeDataTests.TestGetTestTypeInfoByID(1);
            //clsTestTypeDataTests.TestGetAllTestTypes();
            //clsTestTypeDataTests.TestAddNewTestType("Test1", "kkkkkkkk", 50);

            // ---------------------------------------------------------------

            // clsApplicationDataTests ..
            //clsApplicationDataTests.TestGetApplicationInfoByID(110);
            //clsApplicationDataTests.TestGetAllApplications();
            //clsApplicationDataTests.TestAddNewApplication(1, DateTime.Now, 5, 1, DateTime.Now, 15, 1);
            //clsApplicationDataTests.TestUpdateApplication(138, 1, DateTime.Now, 1, 2, DateTime.Now, 10, 1);
            //clsApplicationDataTests.TestDeleteApplication(138);
            clsApplicationDataTests.TestIsApplicationExist(132);


            // ---------------------------------------------------------------






            Console.ReadKey();
        }
    }
}