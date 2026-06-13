USE SalesDB;
GO

CREATE TABLE sales_schema.Staffs
(
	staff_id INT,
	first_name VARCHAR(10) NOT NULL,
	last_name VARCHAR(10) NOT NULL,
	salary NUMERIC(7, 2) CHECK (salary BETWEEN 3000 AND 15000),
	hire_date DATE
);

---------------------------------------------------------------------

USE SalesDB;
GO

CREATE TABLE sales_schema.Staffs
(
	staff_id INT,
	first_name VARCHAR(10) NOT NULL,
	last_name VARCHAR(10) NOT NULL,
	salary NUMERIC(7, 2),
	hire_date DATE,

	CONSTRAINT staffs_ck CHECK (salary BETWEEN 3000 AND 15000)
);

---------------------------------------------------------------------

