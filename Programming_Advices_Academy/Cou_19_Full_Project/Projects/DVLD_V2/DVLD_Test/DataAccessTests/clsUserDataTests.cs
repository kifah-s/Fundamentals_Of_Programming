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
    }
}
