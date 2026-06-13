USE SalesDB;
GO

CREATE TABLE sales_schema.Customers
(
	customer_id INT,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(15) NOT NULL,
	email VARCHAR(50) NOT NULL,
	phone VARCHAR(15) UNIQUE,
	state VARCHAR(15),
	city VARCHAR(15) NOT NULL,
	street VARCHAR(30) NOT NULL,
	zip_code VARCHAR(5),

	CONSTRAINT customers_pk PRIMARY KEY (customer_id)
);

---------------------------------------------------------------------

CREATE TABLE sales_schema.Customers
(
	customer_id INT,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(15) NOT NULL,
	email VARCHAR(50) NOT NULL,
	phone VARCHAR(15),
	state VARCHAR(15),
	city VARCHAR(15) NOT NULL,
	street VARCHAR(30) NOT NULL,
	zip_code VARCHAR(5),

	CONSTRAINT customers_pk PRIMARY KEY (customer_id),
	CONSTRAINT customers_uq UNIQUE (phone)
);
