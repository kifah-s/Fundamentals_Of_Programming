

--Left Join and Left Outer Join are the same.

--Left Join: gets all data from table customers and only matched data from table orders
SELECT Customers.CustomerID, Customers.Name, Orders.Amount
FROM Customers 
Left JOIN Orders 
ON Customers.CustomerID = Orders.CustomerID;


SELECT Customers.CustomerID, Customers.Name, Orders.Amount
FROM Customers 
Left Outer JOIN Orders 
ON Customers.CustomerID = Orders.CustomerID;