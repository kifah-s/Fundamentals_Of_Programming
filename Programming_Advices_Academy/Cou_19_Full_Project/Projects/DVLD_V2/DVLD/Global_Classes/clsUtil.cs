namespace DVLD.Global_Classes
{
    public class clsUtil
    {
        public static string GenerateGUID()
        {
            // Generate a new GUID.
            Guid newGUID = Guid.NewGuid();

            // Convert the GUID to a string.
            return newGUID.ToString();
        }

        public static bool CreateFolderIfDoesNotExist(string folderPath)
        {
            // Check if the folder exists.
            if (!Directory.Exists(folderPath))
            {
                try
                {
                    // If it doesn't exist, create the folder.
                    Directory.CreateDirectory(folderPath);
                    return true;
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error creating folder: " + ex.Message);
                    return false;
                }
            }

            return true;
        }

        public static string ReplaceFileNameWithGUID(string sourceFile)
        {
            // Full file name, Change your file name.
            string fileName = sourceFile;
            FileInfo fi = new FileInfo(fileName);
            string extn = fi.Extension;

            return GenerateGUID() + extn;
        }

        public static bool CopyImageToProjectImagesFolder(ref string sourceFile)
        {
            /*
            This function will copy the image to the
            project images folder after renaming it
            with GUID with the same extension, then it will update the sourceFileName with the new name.
             */

            string destinationFolder = @"D:\Ambition\My_GitHub_Account\Fundamentals_Of_Programming\Programming_Advices_Academy\Cou_19_Full_Project\Projects\DVLD_V2\DVLD\People-Images\";

            if (!CreateFolderIfDoesNotExist(destinationFolder))
            {
                return false;
            }

            string destinationFile = destinationFolder + ReplaceFileNameWithGUID(sourceFile);

            try
            {
                File.Copy(sourceFile, destinationFile, true);
            }
            catch (IOException iox)
            {
                MessageBox.Show(iox.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }

            sourceFile = destinationFile;

            return true;
        }
    }
}
