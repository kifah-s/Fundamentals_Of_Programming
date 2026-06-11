-- CREATE FUNCTION GetEmployeeNameWithIDNumberIs_01 ()
-- RETURNS VARCHAR(100)
-- AS
-- BEGIN
--     DECLARE @Name VARCHAR(100);
--     
--     SELECT @Name = EmpName 
--     FROM Employees
--     WHERE EmpID = 1;
--     
--     RETURN @Name;
-- END;

-- SELECT dbo.GetEmployeeNameWithIDNumberIs_01();

------------------------------------------------------------------------

-- CREATE FUNCTION GetEmployeeNameWithIDNumberIs_1 ()
-- RETURNS TABLE
-- AS
-- RETURN 
-- (
--     SELECT EmpName FROM Employees
--     WHERE EmpID = 1
-- );

-- SELECT * FROM dbo.GetEmployeeNameWithIDNumberIs_1();

------------------------------------------------------------------------

-- CREATE FUNCTION GetAllEmployees ()
-- RETURNS TABLE
-- AS
-- RETURN 
-- (
--     SELECT * FROM Employees
-- );

-- SELECT * FROM dbo.GetAllEmployees();

------------------------------------------------------------------------

-- CREATE FUNCTION GetEmployeeName (@EmpID INT)
-- RETURNS VARCHAR(100)
-- AS
-- BEGIN
--     DECLARE @EmpName VARCHAR(100);
-- 
--     SELECT @EmpName = EmpName 
--     FROM Employees 
--     WHERE EmpID = @EmpID;
-- 
--     RETURN @EmpName;
-- END;

-- SELECT dbo.GetEmployeeName(2) AS EmployeeName;

------------------------------------------------------------------------

-- CREATE FUNCTION GetEmployeeDetails (@EmpID INT)
-- RETURNS TABLE
-- AS
-- RETURN 
-- (
--     SELECT * FROM Employees 
--     WHERE EmpID = @EmpID
-- );

-- SELECT * FROM dbo.GetEmployeeDetails(1);

------------------------------------------------------------------------

-- SELECT ABS(-100);

-- SELECT GETDATE();

-- SELECT LEN('This is some text');

-- SELECT UPPER('kifah');

------------------------------------------------------------------------

-- CREATE VIEW View_EmployeeDetails
-- AS
-- SELECT *
-- FROM Employees

-- SELECT * FROM View_EmployeeDetails;

------------------------------------------------------------------------

