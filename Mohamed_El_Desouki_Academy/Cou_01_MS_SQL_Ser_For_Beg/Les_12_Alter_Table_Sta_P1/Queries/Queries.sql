USE SalesDB;
GO

CREATE TABLE sales_schema.Stores
(
	store_id INT,
	store_name VARCHAR(30) NOT NULL,
	city VARCHAR(20) NOT NULL,
	phone VARCHAR(15),

	CONSTRAINT Stores_pk PRIMARY KEY (store_id)
);


ALTER TABLE sales_schema.Stores
ADD street VARCHAR(20);


ALTER TABLE sales_schema.Stores
ADD zip_code INT,
	fax VARCHAR(10);


ALTER TABLE sales_schema.Stores
ALTER COLUMN zip_code INT NOT NULL;


ALTER TABLE sales_schema.Stores
ALTER COLUMN fax VARCHAR(20);


ALTER TABLE sales_schema.Stores
ALTER COLUMN store_name VARCHAR(50);


ALTER TABLE sales_schema.Stores
ALTER COLUMN city VARCHAR(20);


ALTER TABLE sales_schema.Stores
DROP COLUMN fax;