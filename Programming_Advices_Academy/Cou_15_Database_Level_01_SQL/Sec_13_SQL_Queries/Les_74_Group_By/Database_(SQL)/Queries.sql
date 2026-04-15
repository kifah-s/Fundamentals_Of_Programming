

select TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees;


select TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees where DepartmentID = 3;
	   
select DepartmentID, TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees Group By DepartmentID;

select DepartmentID, TotalCount = Count(MonthlySalary), 
	   TotalSum = Sum(MonthlySalary),
	   Average = Avg(MonthlySalary),
	   MinSalary = Min(MonthlySalary),
	   MaxSalary = Max(MonthlySalary) from Employees Group By DepartmentID order by DepartmentID;