using DVLD_DataAccess;

namespace DVLD_Test
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int testPersonID = 1;

            string firstName = "", secondName = "", thirdName = "", lastName = "";
            string nationalNo = "", address = "", phone = "", email = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            short gendor = 0;
            int nationalityCountryID = 0;

            bool isFound = clsPersonData.GetPersonInfoByID(
                testPersonID,
                ref firstName, ref secondName, ref thirdName, ref lastName,
                ref nationalNo, ref dateOfBirth, ref gendor, ref address,
                ref phone, ref email, ref nationalityCountryID, ref imagePath
            );

            if (isFound)
            {
                Console.WriteLine("========================================");
                Console.WriteLine("Record Found Successfully!");
                Console.WriteLine("========================================");
                Console.WriteLine($"Full Name: {firstName} {secondName} {thirdName} {lastName}");
                Console.WriteLine($"National No: {nationalNo}");
                Console.WriteLine($"Birth Date: {dateOfBirth.ToShortDateString()}");
                Console.WriteLine($"Gender: {gendor}");
                Console.WriteLine($"Phone: {phone}");
                Console.WriteLine($"Email: {email}");
                Console.WriteLine($"Country ID: {nationalityCountryID}");
                Console.WriteLine($"Image Path: {imagePath}");
                Console.WriteLine("========================================");
            }
            else
            {
                Console.WriteLine($"Person with ID [{testPersonID}] was NOT found!");
            }

            Console.ReadLine();
        }
    }
}