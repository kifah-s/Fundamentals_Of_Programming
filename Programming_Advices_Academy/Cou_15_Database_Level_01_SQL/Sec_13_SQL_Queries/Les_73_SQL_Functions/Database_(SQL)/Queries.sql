

select TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees;



select TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees where DepartmentID = 1;
	   
	   
select * from employees;

select TotalEmployees = count (ID) from Employees;

-- count function only counts the not null values.
select ResignedEmployees = count(ExitDate) from employees;