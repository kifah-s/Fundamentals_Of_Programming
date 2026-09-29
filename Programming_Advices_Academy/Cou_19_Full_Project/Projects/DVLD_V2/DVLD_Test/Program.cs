using DVLD_Test.DataAccessTests;

namespace DVLD_Test
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // clsPersonDataTests ..

            //clsPersonDataTests.GetPersonInfoByIDTest(1);
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
            clsCountryDataTests.TestGetCountryInfoByName("Italy");

            Console.ReadLine();
        }
    }
}