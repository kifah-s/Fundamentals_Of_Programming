

Select A = 5 * 4, B = 6 / 2;

Select A = 5 * 4, B = 6 / 2 from employees;

Select ID, FirstName, A = MonthlySalary / 2 from employees;

Select ID, FirstName + ' ' + LastName as FullName From Employees;

Select ID, FullName = FirstName + ' ' + LastName  From Employees;

select ID, FirstName, MonthlySalary, YealySalary = MonthlySalary * 12 from employees;

select ID, FirstName, MonthlySalary, YealySalary = MonthlySalary * 12, BonusAmount = MonthlySalary * BonusPerc from employees;

select Today = getDate();

select ID, FullName = FirstName + ' ' + LastName, Age = DATEDIFF(Year, DateOfBirth, getDate()) from Employees;


select ID, FullName = FirstName + ' ' + LastName, Age = DATEDIFF(Month, DateOfBirth, getDate()) from Employees;


select ID, FullName = FirstName + ' ' + LastName, Age = DATEDIFF(Day, DateOfBirth, getDate()) from Employees;

