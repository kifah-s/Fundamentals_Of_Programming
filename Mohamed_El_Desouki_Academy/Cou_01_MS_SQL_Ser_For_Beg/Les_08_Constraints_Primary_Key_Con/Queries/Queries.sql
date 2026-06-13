USE SalesDB;
GO

CREATE TABLE sales_schema.Customers
(
	customer_id INT PRIMARY KEY,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(15) NOT NULL,
	email VARCHAR(50) NOT NULL,
	phone VARCHAR(15),
	state VARCHAR(15),
	city VARCHAR(15) NOT NULL,
	street VARCHAR(30) NOT NULL,
	zip_code VARCHAR(5)
);

----------------------------------------------------------------

USE SalesDB;
GO

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

	constraint customers_pk PRIMARY KEY (customer_id)
);


CREATE TABLE production.Categories
(
	categorie_id INT,
	categorie_name VARCHAR(50) NOT NULL,

	constraint categories_pk PRIMARY KEY (categorie_id)
);


CREATE TABLE production.Brands
(
	brand_id INT,
	brand_name VARCHAR(50) NOT NULL,

	constraint brands_pk PRIMARY KEY (brand_id)
);

----------------------------------------------------------------

