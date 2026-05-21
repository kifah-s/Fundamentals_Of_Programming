using Con_App_01;

//clsDate date1 = new clsDate(06, 01, 1996);
//Console.WriteLine(date1.getDate());

//clsEmployee emp_01 = new clsEmployee();
//emp_01.ID = 1;
//emp_01.FirstName = "kifah";
//emp_01.LastName = "saloum";

//clsEmployee emp_02 = new clsEmployee
//{
//    ID = 2,
//    FirstName = "ashraf",
//    LastName = "koraone"
//};

//clsEmployee emp_03 = new clsEmployee()
//{
//    ID = 3,
//    FirstName = "ashraf",
//    LastName = "koraone"
//};

//clsEmployee emp_04 = new clsEmployee(4)
//{
//    FirstName = "ashraf",
//    LastName = "koraone"
//};

//Console.WriteLine(emp_04.ID);


clsEmployee emp_05 = clsEmployee.Create(5, "kifah", "saloum");
Console.WriteLine(emp_05.ID);





Console.ReadKey();