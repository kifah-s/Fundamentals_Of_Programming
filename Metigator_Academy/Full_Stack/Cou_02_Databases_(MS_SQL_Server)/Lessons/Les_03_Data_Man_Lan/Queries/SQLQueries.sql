USE TestDB;
GO
   
-- INSERT INTO Companies (ComName, ComPhone) VALUES ('New Futsher','00963');
-- INSERT INTO Companies (ComPhone, ComName) VALUES ('12345','New Futsher 2');

-- INSERT INTO CustomersSchema.Users (user_ID, userName, phoneNumber, email, address)
-- VALUES (2, 'saloum', '12345', 'saloum@saloum.com', 'shahba');

-- INSERT INTO CustomersSchema.Users (user_ID, userName, phoneNumber, email, address)
-- VALUES (3, 'ashraf', '12345', 'ashraf@ashraf.com', 'shahba'),
-- 	      (4, 'omar', '12345', 'omar@omar.com', 'shahba'),
-- 	      (5, 'maher', '12345', 'maher@maher.com', 'shahba');

-- GO

------------------------------------------------------------------------------------------

-- SELECT * FROM Companies;
-- SELECT Companies.ComName FROM Companies;
-- SELECT Companies.ComName, Companies.ComPhone FROM Companies;
-- SELECT ComName FROM Companies;
-- SELECT ComName, ComPhone FROM Companies;
-- GO

------------------------------------------------------------------------------------------

-- SELECT * FROM Companies;

-- SELECT * FROM Companies
-- WHERE Companies.ComID = 3;

-- SELECT * FROM Companies
-- WHERE Companies.ComPhone = '444';

-- SELECT * FROM Companies;

-- SELECT Companies.ComName, Companies.ComCapital FROM Companies
-- WHERE ComID = 4;

-- SELECT * FROM Companies
-- WHERE ComCapital > 2000;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID = 2;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2;

-- SELECT * FROM CustomersSchema.Users
-- WHERE NOT user_ID > 2 ;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2 AND userName = 'ashraf';

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2 AND userName = 'maher';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName = 'kifah' OR userName = 'maher';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE 'k%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%k';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%k%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%h%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%s';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '_i%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '_if%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '__a%';

------------------------------------------------------------------------------------------

-- SELECT TOP 3 *
-- FROM CustomersSchema.Users;

-- SELECT TOP 3 userName, email
-- FROM CustomersSchema.Users;

-- SELECT TOP 3 PERCENT userName, email
-- FROM CustomersSchema.Users;

------------------------------------------------------------------------------------------

-- USE BarberDB;

-- SELECT * FROM CustomersSchema.Users;

-- SELECT *
-- FROM CustomersSchema.Users
-- ORDER BY phoneNumber;

-- SELECT *
-- FROM CustomersSchema.Users
-- ORDER BY phoneNumber DESC;

-- SELECT *
-- FROM CustomersSchema.Users
-- ORDER BY userName;

-- SELECT *
-- FROM CustomersSchema.Users
-- ORDER BY userName DESC;

-- SELECT *
-- FROM CustomersSchema.Users
-- WHERE user_ID > 2
-- ORDER BY userName DESC;

------------------------------------------------------------------------------------------

-- CREATE DATABASE SalesDB;

-- USE SalesDB;

-- CREATE TABLE sales
-- (
-- 		Product VARCHAR(100),
-- 		Category VARCHAR(100),
-- 		Price INT
-- );

-- INSERT INTO sales (Product, Category, Price)
--		   	  VALUES ('iPhone', 'Electronics', 1000),
--		  	 	     ('Shirt', 'Clothing', 50),
--		  	 	     ('Laptop', 'Electronics', 1500),
--		  	 	     ('Dress', 'Clothing', 120),
--		  	 	     ('Blender', 'Home Appliances', 80);

-- SELECT * FROM sales;

-- SELECT Category, SUM(Price) AS Total_Sales
-- FROM sales
-- GROUP BY Category;

-- SELECT Category, SUM(Price) AS Total_Sales
-- FROM sales
-- GROUP BY Category
-- HAVING SUM(Price) > 500;

-- SELECT * FROM sales;

-- SELECT Product
-- FROM sales
-- GROUP BY Product

-- SELECT Category
-- FROM sales
-- GROUP BY Category

-- SELECT Category, COUNT(*)
-- FROM sales
-- GROUP BY Category

-- SELECT * FROM sales;

-- SELECT Category, COUNT(*) AS Number_of_Products
-- FROM Sales
-- GROUP BY Category;

-- SELECT * FROM sales;

-- SELECT Category, COUNT(*) AS Number_of_Products
-- FROM Sales
-- WHERE Price > 100
-- GROUP BY Category;

-- SELECT Category, SUM(Price) AS Total_Sales
-- FROM Sales
-- GROUP BY Category
-- HAVING SUM(Price) > 100;

-- SELECT Category, SUM(Price)
-- FROM Sales
-- WHERE Price > 50            -- 1. Check individual rows first (exclude very cheap products)
-- GROUP BY Category           -- 2. Group the remaining products into sets
-- HAVING COUNT(Product) >= 2; -- 3. Check the groups (show only categories with 2 or more products)

------------------------------------------------------------------------------------------

-- SELECT * FROM sales;

-- SELECT Category FROM sales;

-- SELECT DISTINCT Category FROM sales;

-- SELECT Count(DISTINCT Category) AS Unique_Category FROM sales;

-- SELECT DISTINCT Category, Price FROM sales;

------------------------------------------------------------------------------------------

-- USE SalesDB;

-- CREATE TABLE Customers
-- (
-- 		CustomerID INT PRIMARY KEY,
-- 		Name VARCHAR(50) NOT NULL
-- )

-- INSERT INTO Customers (CustomerID, Name) VALUES (1, 'Ahmed');
-- INSERT INTO Customers (CustomerID, Name) VALUES (2, 'Sara');
-- INSERT INTO Customers (CustomerID, Name) VALUES (3, 'Khalid');

-- CREATE TABLE Orders (
--     OrderID INT PRIMARY KEY,
--     Amount DECIMAL(10, 2) NOT NULL,
--     -- CustomerID INT REFERENCES Customers(CustomerID)
--     CustomerID INT,
--     FOREIGN KEY (CustomerID) REFERENCES Customers(CustomerID)
-- );

-- INSERT INTO Orders (OrderID, Amount, CustomerID) VALUES (101, 500.00, 1);
-- INSERT INTO Orders (OrderID, Amount, CustomerID) VALUES (102, 300.00, 2);
-- INSERT INTO Orders (OrderID, Amount, CustomerID) VALUES (103, 700.00, 1);

----------------------

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers INNER JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;


-- SELECT Customers.Name, Orders.Amount
-- FROM Customers LEFT JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;


-- SELECT Customers.Name, Orders.Amount
-- FROM Customers RIGHT JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

----------------------

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers, Orders
-- WHERE Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers INNER JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

----------------------

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers, Orders
-- WHERE Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers INNER JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

----------------------

-- SELECT * FROM Customers;
-- SELECT * FROM Orders;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers, Orders;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers, Orders
-- WHERE Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers INNER JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers LEFT JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers RIGHT JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers Full JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

------------------------------------------------------------------------------------------

-- SELECT Orders.Amount * 2
-- FROM Orders;

-- SELECT Orders.Amount * 2 AS Tax
-- FROM Orders;

-- SELECT Orders.Amount * 2 AS 'Amount * 2'
-- FROM Orders;

-- SELECT Customers.Name, Orders.Amount
-- FROM Customers INNER JOIN Orders
-- ON Customers.CustomerID = Orders.CustomerID;

-- SELECT C.Name, O.Amount
-- FROM Customers AS C INNER JOIN Orders AS O
-- ON C.CustomerID = O.CustomerID;

-- SELECT C.Name, O.Amount
-- FROM Customers C INNER JOIN Orders O
-- ON C.CustomerID = O.CustomerID;

-- SELECT C.Name AS 'الاسم', O.Amount AS 'المبيعات'
-- FROM Customers AS C INNER JOIN Orders AS O
-- ON C.CustomerID = O.CustomerID;

------------------------------------------------------------------------------------------

