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
    }
}
