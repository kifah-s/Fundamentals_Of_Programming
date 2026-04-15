

select * from Employees where DepartmentID = 1 Or DepartmentID = 2;


select * from Employees where DepartmentID = 1 Or DepartmentID = 2 or DepartmentID = 7;


select * from Employees where DepartmentID = 1 Or DepartmentID = 2 or DepartmentID = 5 or DepartmentID = 7;


select * from Employees where DepartmentID in (1, 2, 5, 7);


select * from Employees where FirstName in ('Jacob','Brooks','Harper');


select Departments.Name from Departments  where ID in ( select DepartmentID from Employees where MonthlySalary <= 210 );


select Departments.Name from Departments  where ID not in ( select DepartmentID from Employees where MonthlySalary <= 210 );