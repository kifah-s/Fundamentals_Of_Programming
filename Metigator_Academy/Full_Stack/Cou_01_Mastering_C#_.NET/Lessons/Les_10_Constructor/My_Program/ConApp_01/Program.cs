using ConApp_01;


/*
Date date_01 = new Date(29, 02, 1996);
Date date_02 = new Date(02, 1996);
Date date_03 = new Date(1996);

Console.WriteLine(date_01.GetDate());
Console.WriteLine(date_02.GetDate());
Console.WriteLine(date_03.GetDate());
*/


// -----------------------------------------------------------------------


/*
Employee_01 emp_01 = new Employee_01();
emp_01.ID = 1;
emp_01.FName = "kifah";
emp_01.LName = "saloum";
emp_01.PrintEmployeeInfo();

Console.WriteLine("----------------------------");

Employee_01 emp_02 = new Employee_01
{
    ID = 2,
    FName = "kifah 02",
    LName = "saloum 02"
};
emp_02.PrintEmployeeInfo();

Console.WriteLine("----------------------------");

Employee_01 emp_03 = new Employee_01(3)
{
    FName = "kifah 03",
    LName = "saloum 03"
};
emp_03.PrintEmployeeInfo();
*/


// -----------------------------------------------------------------------




Employee_02 emp = Employee_02.Create(1, "kifah", "saloum");
emp.PrintEmployeeInfo();
















Console.ReadKey();





