using DVLD_DataAccess;
using System.Data;


namespace DVLD_Test.DataAccessTests
{
    public class clsPersonDataTests
    {
        public static void TestGetPersonInfoByID(int personID)
        {
            string firstName = "", secondName = "", thirdName = "", lastName = "";
            string nationalNo = "", address = "", phone = "", email = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            short gendor = 0;
            int nationalityCountryID = 0;

            bool isFound = clsPersonData.GetPersonInfoByID(personID, ref firstName, ref secondName, ref thirdName, ref lastName, ref nationalNo, ref dateOfBirth, ref gendor, ref address, ref phone, ref email, ref nationalityCountryID, ref imagePath
            );

            if (isFound)
            {
                Console.WriteLine("========================================");
                Console.WriteLine("Record Found Successfully!");
                Console.WriteLine("========================================");
                Console.WriteLine($"Person ID: {personID}");
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
                Console.WriteLine($"Person with ID [{personID}] was NOT found!");
            }
        }


        public static void TestGetPersonInfoByNationalNo(string personNationalNo)
        {
            string firstName = "", secondName = "", thirdName = "", lastName = "";
            string address = "", phone = "", email = "", imagePath = "";
            DateTime dateOfBirth = DateTime.Now;
            short gendor = 0;
            int personID = 1, nationalityCountryID = 0;

            bool isFound = clsPersonData.GetPersonByNationalNo(personNationalNo, ref personID, ref firstName, ref secondName, ref thirdName, ref lastName, ref dateOfBirth, ref gendor, ref address, ref phone, ref email, ref nationalityCountryID, ref imagePath);

            if (isFound)
            {
                Console.WriteLine("========================================");
                Console.WriteLine("Record Found Successfully!");
                Console.WriteLine("========================================");
                Console.WriteLine($"Person NationalNo: {personNationalNo}");
                Console.WriteLine($"Full Name: {firstName} {secondName} {thirdName} {lastName}");
                Console.WriteLine($"Person ID: {personID}");
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
                Console.WriteLine($"Person with NationalNo [{personNationalNo}] was NOT found!");
            }
        }


        public static void TestAddNewPerson()
        {
            string firstName = "John";
            string secondName = "Robert";
            string thirdName = "David";
            string lastName = "Smith";
            string nationalNo = "N11";
            DateTime dateOfBirth = new DateTime(1995, 5, 15);
            short gendor = 0;
            string address = "123 Main Street, New York, USA";
            string phone = "+1234567890";
            string email = "john.smith@example.com";
            int nationalityCountryID = 90;
            string imagePath = "";

            int newPersonID = clsPersonData.AddNewPerson(firstName, secondName, thirdName, lastName, nationalNo, dateOfBirth, gendor, address, phone, email, nationalityCountryID, imagePath);

            if (newPersonID != -1)
            {
                Console.WriteLine($"SUCCESS: Person added successfully with ID = {newPersonID}");
            }
            else
            {
                Console.WriteLine("FAILED: Failed to add new person.");
            }

            TestGetPersonInfoByID(newPersonID);
        }


        public static void TestUpdatePerson(int personIDToUpdate)
        {
            string firstName = "John";
            string secondName = "Robert";
            string thirdName = "David";
            string lastName = "Smith";
            string nationalNo = "N11";
            DateTime dateOfBirth = new DateTime(1995, 5, 15);
            short gendor = 0;
            string address = "123 Main Street, New York, USA";
            string phone = "+1234567890";
            string email = "john.smith@example.com";
            int nationalityCountryID = 90;
            string imagePath = "";

            bool isUpdated = clsPersonData.UpdatePerson(personIDToUpdate, firstName, secondName, thirdName, lastName, nationalNo, dateOfBirth, gendor, address, phone, email, nationalityCountryID, imagePath);

            if (isUpdated)
            {
                Console.WriteLine($"[SUCCESS] Person with ID ({personIDToUpdate}) updated successfully.");
            }
            else
            {
                Console.WriteLine($"[FAILED] Failed to update Person with ID ({personIDToUpdate}). Check if ID exists or connection settings.");
            }

            TestGetPersonInfoByID(personIDToUpdate);
        }


        public static void TestGetAllPeople()
        {
            DataTable dtPeople = clsPersonData.GetAllPeople();

            if (dtPeople != null && dtPeople.Rows.Count > 0)
            {
                Console.WriteLine($"[SUCCESS] Total People Found: {dtPeople.Rows.Count}\n");

                Console.WriteLine($"{"ID",-5} | {"National No",-12} | {"Full Name",-36} | {"Gender",-8} | {"Country",-15}");
                Console.WriteLine(new string('-', 80));

                foreach (DataRow row in dtPeople.Rows)
                {
                    int personID = Convert.ToInt32(row["PersonID"]);
                    string nationalNo = row["NationalNo"].ToString();

                    string fullName = $"{row["FirstName"]} {row["SecondName"]} {row["ThirdName"]} {row["LastName"]}".Replace("  ", " ").Trim();

                    string genderCaption = row["GendorCaption"].ToString();
                    string countryName = row["CountryName"].ToString();

                    Console.WriteLine($"{personID,-5} | {nationalNo,-12} | {fullName,-36} | {genderCaption,-8} | {countryName,-15}");
                }
            }
            else
            {
                Console.WriteLine("[WARNING] No records found in the People table or failed to connect.");
            }
        }


        public static void TestDeletePerson(int personIDToDelete)
        {
            Console.WriteLine($"[INFO] Attempting to delete person with ID: {personIDToDelete}...");

            bool isDeleted = clsPersonData.DeletePerson(personIDToDelete);


            if (isDeleted)
            {
                Console.WriteLine($"[SUCCESS] Person with ID ({personIDToDelete}) was deleted successfully.");
            }
            else
            {
                Console.WriteLine($"[FAILED] Failed to delete person with ID ({personIDToDelete}).");
                Console.WriteLine("Possible reasons:");
                Console.WriteLine(" - The PersonID does not exist in the database.");
                Console.WriteLine(" - The record is referenced as a Foreign Key in another table (e.g., Users, Drivers, Applications).");
                Console.WriteLine(" - Database connection issues.");
            }
        }


        public static void TestIsPersonExist(int personIDToExist)
        {
            bool isFound = clsPersonData.IsPersonExist(personIDToExist);

            if (isFound)
            {
                Console.WriteLine($"[SUCCESS] Person with ID ({personIDToExist}) exists in the database.");
            }
            else
            {
                Console.WriteLine($"[FAILED] Person with ID ({personIDToExist}) was NOT found.");
            }

            TestGetPersonInfoByID(personIDToExist);
        }
    }
}
