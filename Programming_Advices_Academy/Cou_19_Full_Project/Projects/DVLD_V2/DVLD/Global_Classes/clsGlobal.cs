using DVLD_Business;

namespace DVLD.Global_Classes
{
    internal static class clsGlobal
    {
        public static clsUser currentUser;

        public static bool RememberUsernameAndPassword(string userName, string password)
        {
            try
            {
                // This will get the current project directory folder.
                string currentDirectory = System.IO.Directory.GetCurrentDirectory();

                // Define the path to the text file where you want to save the data.
                string filePath = currentDirectory + "\\data.txt";

                // Incase the username is empty, delete the file.
                if (userName == "" && File.Exists(filePath))
                {
                    File.Delete(filePath);

                    return true;
                }

                // Concatenate username and password with separator.
                string dataToSave = userName + "#//#" + password;

                // Create a StreamWriter to write to the file.
                using (StreamWriter writer = new StreamWriter(filePath))
                {
                    // Write the data to the file.
                    writer.WriteLine(dataToSave);

                    return true;
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show($"An error occurred: {ex.Message}");

                return false;
            }
        }

        public static bool GetStoredCredential(ref string username, ref string password)
        {
            // This will get the stored username and password and will return true if found and false if not found.
            try
            {
                // Gets the current project's directory.
                string currentDirectory = System.IO.Directory.GetCurrentDirectory();

                // Path for the file that contains the credential.
                string filePath = currentDirectory + "\\data.txt";

                // Check if the file exists before attempting to read it.
                if (File.Exists(filePath))
                {
                    // Create a StreamReader to read from the file.
                    using (StreamReader reader = new StreamReader(filePath))
                    {
                        // Read data line by line until the end of the file.
                        string line;

                        while ((line = reader.ReadLine()) != null)
                        {
                            Console.WriteLine(line); // Output each line of data to the console.

                            string[] result = line.Split(new string[] { "#//#" }, StringSplitOptions.None);

                            username = result[0];
                            password = result[1];
                        }

                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"An error occurred: {ex.Message}");

                return false;
            }
        }
    }
}
