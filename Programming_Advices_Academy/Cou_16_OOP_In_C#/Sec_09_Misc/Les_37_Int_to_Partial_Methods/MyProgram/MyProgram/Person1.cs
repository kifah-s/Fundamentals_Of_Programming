namespace MyProgram
{
    public partial class Person
    {
        public int age { set; get; }

        partial void PrintAge();

        public void Birthday()
        {
            age++;
            PrintAge();
        }
    }
}
