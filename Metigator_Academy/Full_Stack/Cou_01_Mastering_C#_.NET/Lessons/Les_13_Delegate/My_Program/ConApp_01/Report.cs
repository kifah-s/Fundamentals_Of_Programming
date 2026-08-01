namespace ConApp_01
{
    public class Report
    {
        /*
        public void ProcessEmployeeWith60000PlusSales(Employee[] employees)
        {
            Console.WriteLine("Employees With 60,000$ + Sales:");
            Console.WriteLine("--------------------------------");

            foreach (var e in employees)
            {
                if (e.TotalSales >= 60000m)
                {
                    Console.WriteLine($"{e.ID} | {e.Name} | {e.TotalSales} | {e.Gender}");
                }
            }
            Console.WriteLine("\n\n");
        }

        public void ProcessEmployeeWithSalesBetween30000And59999(Employee[] employees)
        {
            Console.WriteLine("Employees With Sales Between 30,000$ and 59,999$ Sales:");
            Console.WriteLine("--------------------------------");

            foreach (var e in employees)
            {
                if (e.TotalSales < 60000m && e.TotalSales >= 30000m)
                {
                    Console.WriteLine($"{e.ID} | {e.Name} | {e.TotalSales} | {e.Gender}");
                }
            }
            Console.WriteLine("\n\n");
        }

        public void ProcessEmployeeWithSalesLessThan30000(Employee[] employees)
        {
            Console.WriteLine("Employees With Sales Less Than 30,000$:");
            Console.WriteLine("--------------------------------");

            foreach (var e in employees)
            {
                if (e.TotalSales < 30000m)
                {
                    Console.WriteLine($"{e.ID} | {e.Name} | {e.TotalSales} | {e.Gender}");
                }
            }
            Console.WriteLine("\n\n");
        }
        */



        public delegate bool IllegibleSales(Employee e);
        public void ProcessEmployees(Employee[] employees, string title, IllegibleSales IsIllegible)
        {
            Console.WriteLine(title);
            Console.WriteLine("--------------------------------");

            foreach (var e in employees)
            {
                if (IsIllegible(e))
                {
                    Console.WriteLine($"{e.ID} | {e.Name} | {e.TotalSales} | {e.Gender}");
                }
            }
            Console.WriteLine("\n\n");
        }
    }
}