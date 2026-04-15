

-- Join and Inner Join are the same

select * from Customers;

select * from Orders;


SELECT Customers.CustomerID, Customers.Name, Orders.Amount
FROM Customers 
JOIN Orders 
ON Customers.CustomerID = Orders.CustomerID;



SELECT Customers.CustomerID, Customers.Name, Orders.Amount
FROM Customers 
Inner JOIN Orders 
ON Customers.CustomerID = Orders.CustomerID;


--------------------------------------------------------------------------------------------

--This code for HR_Database

--Inner Join two Tables
SELECT Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name as DeptName
FROM Employees
INNER JOIN Departments ON Employees.DepartmentID = Departments.ID;




--Inner joind with where
SELECT Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name as DeptName
FROM Employees
INNER JOIN Departments ON Employees.DepartmentID = Departments.ID
where Departments.Name = 'IT';




--Inner Join Three Tables
SELECT Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name as DeptName, Countries.Name AS CountryName
FROM Employees 
INNER JOIN Departments ON Employees.DepartmentID = Departments.ID
INNER JOIN Countries ON Employees.CountryID = Countries.ID;


						 
--Inner Join Three Tables with where
SELECT Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name as DeptName, Countries.Name AS CountryName
FROM Employees
INNER JOIN Departments ON Employees.DepartmentID = Departments.ID
INNER JOIN Countries ON Employees.CountryID = Countries.ID
where Countries.Name = 'USA';