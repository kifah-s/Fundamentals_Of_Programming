USE SalesDB;
GO

CREATE TABLE sales_schema.Customers
(
	customer_id INT NOT NULL,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(15) NOT NULL,
	email VARCHAR(50) NOT NULL,
	phone VARCHAR(15),
	state VARCHAR(15),
	city VARCHAR(15) NOT NULL,
	street VARCHAR(30) NOT NULL,
	zip_code VARCHAR(5)
);