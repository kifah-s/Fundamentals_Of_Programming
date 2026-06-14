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
ADD CONSTRAINT Stores_uq UNIQUE (store_name);


ALTER TABLE sales_schema.Stores
DROP CONSTRAINT Stores_uq;


----------------------------------------------------------


CREATE TABLE production_schema.Products
(
	product_id INT NOT NULL,
	product_name VARCHAR(20),
	model INT,

	brand_id INT
);


ALTER TABLE production_schema.Products
ADD CONSTRAINT Products_pk PRIMARY KEY (product_id);


ALTER TABLE production_schema.Products
ADD CONSTRAINT Brands_Products_fk FOREIGN KEY (brand_id)
REFERENCES production_schema.Brands (brand_id);


