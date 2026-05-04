using L2_BusLay;
using System;
using System.Data;

namespace L1_PreLay
{
    internal class Program
    {
        static void TestFindContact(int ID)
        {
            clsContact contact1 = clsContact.Find(ID);

            if (contact1 != null)
            {
                Console.WriteLine(contact1.firstName + " " + contact1.lastName);
                Console.WriteLine(contact1.email);
                Console.WriteLine(contact1.phone);
                Console.WriteLine(contact1.address);
                Console.WriteLine(contact1.dateOfBirth);
                Console.WriteLine(contact1.countryID);
                Console.WriteLine(contact1.imagePath);
            }
            else
            {
                Console.WriteLine("Contact [" + ID + "] Not found!");
            }
        }

        static void TestAddNewContact()
        {
            clsContact contact1 = new clsContact();

            contact1.firstName = "Fadi";
            contact1.lastName = "Maher";
            contact1.email = "a@a.com";
            contact1.phone = "010010";
            contact1.address = "address1";
            contact1.dateOfBirth = new DateTime(1997, 11, 6, 10, 30, 0);
            contact1.countryID = 1;
            contact1.imagePath = "";

            if (contact1.Save())
            {
                Console.WriteLine($"Contact Added Successfully With ID: {contact1.ID}");
            }


        }

        static void TestUpdateContact(int ID)
        {
            clsContact Contact1 = clsContact.Find(ID);

            if (Contact1 != null)
            {
                // Update whatever info you want.
                Contact1.firstName = "Lina";
                Contact1.lastName = "Lina";
                Contact1.email = "A2@a.com";
                Contact1.phone = "2222";
                Contact1.address = "222";
                Contact1.dateOfBirth = new DateTime(1977, 11, 6, 10, 30, 0);
                Contact1.countryID = 1;
                Contact1.imagePath = "";

                if (Contact1.Save())
                {
                    Console.WriteLine("Contact updated Successfully ");
                }
            }
            else
            {
                Console.WriteLine("Not found!");
            }
        }

        static void TestDeleteContact(int ID)
        {
            if (clsContact.IsContactExist(ID))
            {
                if (clsContact.DeleteContact(ID))
                {
                    Console.WriteLine("Contact Deleted Successfully.");
                }
                else
                {
                    Console.WriteLine("Faild to delete contact.");
                }
            }
            else
            {
                Console.WriteLine("The contact with id = " + ID + " is not found");
            }
        }

        static void ListContacts()
        {
            DataTable dataTable = clsContact.GetAllContacts();

            Console.WriteLine("Contacts Data:");

            foreach (DataRow row in dataTable.Rows)
            {
                Console.WriteLine($"{row["ContactID"]},  {row["FirstName"]} {row["LastName"]}");
            }
        }

        static void TestIsContactExist(int ID)
        {
            if (clsContact.IsContactExist(ID))
            {
                Console.WriteLine("Yes, Contact is there.");
            }
            else
            {
                Console.WriteLine("No, Contact Is not there.");
            }
        }

        // ----------------- Country ----------------- //

        static void TestFindCountryByID(int ID)
        {
            clsCountry country1 = clsCountry.Find(ID);

            if (country1 != null)
            {
                Console.WriteLine(country1.countryName);
            }
            else
            {
                Console.WriteLine("Country [" + ID + "] Not found!");
            }
        }

        static void TestFindCountryByName(string countryName)
        {
            clsCountry country1 = clsCountry.Find(countryName);

            if (country1 != null)
            {
                Console.WriteLine("Country [" + countryName + "] isFound with ID = " + country1.ID);
            }
            else
            {
                Console.WriteLine("Country [" + countryName + "] Is Not found!");
            }
        }

        static void TestIsCountryExistByID(int ID)
        {
            if (clsCountry.IsCountryExist(ID))
            {
                Console.WriteLine("Yes, Country is there.");
            }
            else
            {
                Console.WriteLine("No, Country Is not there.");
            }

        }

        static void TestIsCountryExistByName(string countryName)
        {
            if (clsCountry.IsCountryExist(countryName))
            {
                Console.WriteLine("Yes, Country is there.");
            }
            else
            {
                Console.WriteLine("No, Country Is not there.");
            }
        }

        static void TestAddNewCountry()
        {
            clsCountry country1 = new clsCountry();

            country1.countryName = "Lebanon";

            if (country1.Save())
            {
                Console.WriteLine("Country Added Successfully with id = " + country1.ID);
            }

        }

        static void TestUpdateCountry(int ID)
        {
            clsCountry country1 = clsCountry.Find(ID);

            if (country1 != null)
            {
                // update whatever info you want.
                country1.countryName = "Syria";

                if (country1.Save())
                {
                    Console.WriteLine("Country updated Successfully ");
                }
            }
            else
            {
                Console.WriteLine("Country is you want to update is Not found!");
            }
        }

        static void TestDeleteCountry(int ID)
        {
            if (clsCountry.IsCountryExist(ID))
            {
                if (clsCountry.DeleteCountry(ID))
                {
                    Console.WriteLine("Country Deleted Successfully.");
                }
                else
                {
                    Console.WriteLine("Faild to delete Country.");
                }
            }
            else
            {
                Console.WriteLine("Faild to delete: The Country with id = " + ID + " is not found");
            }

        }

        static void ListCountries()
        {
            DataTable dataTable = clsCountry.GetAllCountries();

            Console.WriteLine("Coutries Data:");

            foreach (DataRow row in dataTable.Rows)
            {
                Console.WriteLine($"{row["CountryID"]},  {row["CountryName"]}");
            }
        }

        static void Main(string[] args)
        {
            //TestFindContact(1);
            //TestAddNewContact();
            //TestUpdateContact(16);
            //TestDeleteContact(16);
            //ListContacts();
            //TestIsContactExist(5);

            // ----------------- Country ----------------- //

            //TestFindCountryByID(1);
            //TestFindCountryByName("Canada");
            //TestIsCountryExistByID(1);
            //TestIsCountryExistByName("Canada");
            //TestAddNewCountry();
            //TestUpdateCountry(6);
            //TestDeleteCountry(6);
            //ListCountries();

            // ----------------- ................ ----------------- //

            Console.ReadKey();
        }
    }
}
