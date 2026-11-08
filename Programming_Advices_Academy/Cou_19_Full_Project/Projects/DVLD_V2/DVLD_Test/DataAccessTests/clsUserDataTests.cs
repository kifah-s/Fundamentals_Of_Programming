using DVLD_DataAccess;

namespace DVLD_Test.DataAccessTests
{
    public class clsUserDataTests
    {
        public static void TestGetUserInfoByUserID(int testUserID)
        {
            // Variables to store the retrieved data
            int personID = -1;
            string userName = "";
            string password = "";
            bool isActive = false;

            Console.WriteLine($"--- Searching for User ID: {testUserID} ---");

            // Call the function being tested
            bool isFound = clsUserData.GetUserInfoByUserID(testUserID, ref personID, ref userName, ref password, ref isActive);

            if (isFound)
            {
                Console.WriteLine("User found successfully:");
                Console.WriteLine($"  - User ID: {testUserID}");
                Console.WriteLine($"  - Person ID: {personID}");
                Console.WriteLine($"  - User Name: {userName}");
                Console.WriteLine($"  - Password:  {password}");
                Console.WriteLine($"  - Is Active: {isActive}");
            }
            else
            {
                Console.WriteLine($"No user found with ID: {testUserID}");
            }
        }

        public static void TestGetUserInfoByPersonID(int testPersonID)
        {
            // Variables to store the retrieved data
            int userID = -1;
            string userName = "";
            string password = "";
            bool isActive = false;

            Console.WriteLine($"--- Searching for Person ID: {testPersonID} ---");

            // Call the function being tested
            bool isFound = clsUserData.GetUserInfoByPersonID(testPersonID, ref userID, ref userName, ref password, ref isActive);

            if (isFound)
            {
                Console.WriteLine("User found successfully:");
                Console.WriteLine($"  - Person ID: {testPersonID}");
                Console.WriteLine($"  - User ID: {userID}");
                Console.WriteLine($"  - User Name: {userName}");
                Console.WriteLine($"  - Password:  {password}");
                Console.WriteLine($"  - Is Active: {isActive}");
            }
            else
            {
                Console.WriteLine($"No user found with ID: {testPersonID}");
            }
        }

        public static void TestGetUserInfoByUsernameAndPassword(string testUserName, string testPassword)
        {
            // Variables to store the retrieved data
            int userID = -1;
            int personID = -1;
            bool isActive = false;

            Console.WriteLine($"--- Searching for User Name: {testUserName} and Password: {testPassword} ---");

            // Call the function being tested
            bool isFound = clsUserData.GetUserInfoByUsernameAndPassword(testUserName, testPassword, ref userID, ref personID, ref isActive);

            if (isFound)
            {
                Console.WriteLine("User found successfully:");
                Console.WriteLine($"  - User Name: {testUserName}");
                Console.WriteLine($"  - Password:  {testPassword}");
                Console.WriteLine($"  - User ID: {userID}");
                Console.WriteLine($"  - Person ID: {personID}");
                Console.WriteLine($"  - Is Active: {isActive}");
            }
            else
            {
                Console.WriteLine($"No user found with User Name: {testUserName} and Password: {testPassword}");
            }
        }

        public static void TestAddNewUser()
        {
            // 1. Put a real and existing PersonID in the Persons table (to avoid Foreign Key issues)
            int testPersonID = 1; // Modify this number to match an existing ID in your database

            // 2. Use a unique username each time (by adding Ticks or a random number) to avoid unique key violation errors
            string testUserName = "user_" + DateTime.Now.Ticks.ToString().Substring(10);
            string testPassword = "Password123";
            bool testIsActive = true;

            Console.WriteLine("Testing new user addition...");

            // Call the function you wrote
            int newUserID = clsUserData.AddNewUser(testPersonID, testUserName, testPassword, testIsActive);

            // Verify the result
            if (newUserID != -1)
            {
                Console.WriteLine($"Test passed! User added successfully.");
                Console.WriteLine($"The newly generated UserID is: {newUserID}");
            }
            else
            {
                Console.WriteLine("Test failed! The user was not added.");
                Console.WriteLine("Note: Make sure that the PersonID exists in the Persons table and the database connection is correct.");
            }
        }

        public static void TestUpdateUser()
        {
            // 1. Specify an existing UserID in the Users table that you want to update
            int testUserID = 19; // Change this to a valid UserID that exists in your database

            // 2. Specify an existing PersonID (foreign key constraint)
            int testPersonID = 1; // Make sure this PersonID exists in the Persons table

            // 3. Prepare the updated values
            string testUserName = "user_" + DateTime.Now.Ticks.ToString().Substring(10);
            string testPassword = "NewPass456";
            bool testIsActive = false; // You can change this to true or false

            Console.WriteLine($"Testing update for UserID: {testUserID}...");

            // Call the UpdateUser function
            bool isUpdated = clsUserData.UpdateUser(testUserID, testPersonID, testUserName, testPassword, testIsActive);

            // Verify the result
            if (isUpdated)
            {
                Console.WriteLine($"Test passed! User with ID {testUserID} was updated successfully.");
                Console.WriteLine($"New Username: {testUserName}");
                Console.WriteLine($"New Password: {testPassword}");
                Console.WriteLine($"Is Active: {testIsActive}");
            }
            else
            {
                Console.WriteLine($"Test failed! The user with ID {testUserID} was not updated.");
                Console.WriteLine("Note: Make sure that the UserID and PersonID exist in the database and connection is correct.");
            }
        }
    }
}
