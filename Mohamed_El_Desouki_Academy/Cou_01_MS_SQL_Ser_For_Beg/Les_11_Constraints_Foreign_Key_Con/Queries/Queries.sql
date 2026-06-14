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

CREATE TABLE sales_schema.Staffs
(
	staff_id INT,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(20) NOT NULL,
	salary NUMERIC(7, 2),
	hire_date DATE,

	store_id INT,
	
	CONSTRAINT Staffs_pk PRIMARY KEY (staff_id),

	CONSTRAINT stores_staffs_fk FOREIGN KEY (store_id)
	REFERENCES sales_schema.Stores (store_id)
);


------------------------------------------------------------------------------


CREATE TABLE sales_schema.Staffs
(
	staff_id INT PRIMARY KEY,

	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(20) NOT NULL,
	salary NUMERIC(7, 2),
	hire_date DATE,

	store_id INT REFERENCES sales_schema.Stores (store_id)
);
