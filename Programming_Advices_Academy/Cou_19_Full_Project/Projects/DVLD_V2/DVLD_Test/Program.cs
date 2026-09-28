using DVLD_Test.DataAccessTests;

namespace DVLD_Test
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //clsPersonDataTests.GetPersonInfoByIDTest(1);
            //clsPersonDataTests.GetPersonInfoByNationalNoTest("N1");
            //clsPersonDataTests.TestAddNewPerson();
            //clsPersonDataTests.TestUpdatePerson(1030);
            clsPersonDataTests.TestGetAllPeople();



            Console.ReadLine();
        }
    }
}