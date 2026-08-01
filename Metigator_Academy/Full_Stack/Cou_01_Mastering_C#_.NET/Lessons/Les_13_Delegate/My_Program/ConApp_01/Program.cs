using ConApp_01;

var emps = new Employee[]
{
    new Employee {ID = 1, Name = "kifah 01", TotalSales = 65000m, Gender = "M" },
    new Employee {ID = 2, Name = "kifah 02", TotalSales = 60000m, Gender = "F" },
    new Employee {ID = 3, Name = "kifah 03", TotalSales = 55000m, Gender = "M" },
    new Employee {ID = 4, Name = "kifah 04", TotalSales = 40000m, Gender = "F" },
    new Employee {ID = 5, Name = "kifah 05", TotalSales = 20000m, Gender = "M" },
};

/*
var report = new Report();
report.ProcessEmployeeWith60000PlusSales(emps);
report.ProcessEmployeeWithSalesBetween30000And59999(emps);
report.ProcessEmployeeWithSalesLessThan30000(emps);
*/

var report = new Report();
report.ProcessEmployees(emps, "Sales >= 60,000$ :", e => e.TotalSales >= 60000m);
report.ProcessEmployees(emps, "30,000 > Sales < 60,000$ :", e => e.TotalSales >= 30000m && e.TotalSales < 60000m);
report.ProcessEmployees(emps, "Sales < 30,000$ :", e => e.TotalSales < 30000);


Console.ReadKey();


//static bool IsGreaterThenOrEqual60000(Employee emp) => emp.TotalSales >= 60000m;
//static bool IsBetween30000and59999(Employee emp) => emp.TotalSales >= 30000m && emp.TotalSales < 60000m;
//static bool IsLessThan30000(Employee emp) => emp.TotalSales < 30000;


