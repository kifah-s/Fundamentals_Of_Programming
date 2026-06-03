-- CREATE DATABASE CompanyDB;

-- USE CompanyDB;

-- CREATE TABLE Employees
-- (
-- 		EmpID INT PRIMARY KEY,
-- 		EmpName VARCHAR(50),
-- 		EmpSalary DECIMAL
-- )

-- INSERT INTO Employees (EmpID, EmpName, EmpSalary) VALUES (1, 'kifah', 1800);
-- INSERT INTO Employees (EmpID, EmpName, EmpSalary) VALUES (2, 'ashraf', 1500);
-- INSERT INTO Employees (EmpID, EmpName, EmpSalary) VALUES (3, 'omar', 1000);

---------------------------------------------------------------------------------------------

-- Clear caching.
-- DBCC FREEPROCCACHE;

-- Get time.
-- SET STATISTICS TIME , IO ON;
-- SET STATISTICS TIME , IO OFF;

-- SELECT EmpName FROM Employees;

-- Create index.
-- CREATE INDEX idx_EmpNames
-- ON Employees (EmpName);

-- SELECT EmpName FROM Employees;

-- Drop index.
-- DROP INDEX idx_EmpNames
-- ON Employees;