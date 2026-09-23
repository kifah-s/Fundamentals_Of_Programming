namespace DVLD_DataAccess
{
    static class clsDataAccessSettings
    {
        //public static string connectionString = @"Server = .;
        //                                          Database = DVLD;
        //                                          User Id = sa;
        //                                          Password = sql12345;";

        public static string connectionString = @"Server = .;
                                                  Database = DVLD;
                                                  Integrated Security = True;
                                                  TrustServerCertificate = True;";
    }
}
