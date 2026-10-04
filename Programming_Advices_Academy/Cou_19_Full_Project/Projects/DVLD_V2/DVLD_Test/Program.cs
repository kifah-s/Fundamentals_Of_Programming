using DVLD_Test.BusinessTests;

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
            clsCountryTests.TestGetAllCountries();

            Console.ReadLine();
        }
    }
}