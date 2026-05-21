namespace Con_App_01
{
    public class clsEmployee
    {
        public int ID { get; set; }

        public string FirstName { get; set; }

        public string LastName { get; set; }

        //public clsEmployee()
        //{

        //}

        //public clsEmployee(int id)
        //{
        //    ID = id;
        //}

        private clsEmployee()
        {

        }

        private clsEmployee(int id, string firstName, string lastName)
        {
            ID = id;
            FirstName = firstName;
            LastName = lastName;
        }

        public static clsEmployee Create(int id, string firstName, string lastName)
        {
            return new clsEmployee(id, firstName, lastName);
        }

    }
}
