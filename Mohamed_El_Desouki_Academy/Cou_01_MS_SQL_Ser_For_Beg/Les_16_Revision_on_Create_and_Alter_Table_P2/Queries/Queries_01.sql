USE BikeStoreDB;
GO

CREATE TABLE Sales_Sch.customers
(
	customer_id INT PRIMARY KEY,
	first_name VARCHAR(20) NOT NULL,
	last_name VARCHAR(20) NOT NULL,
	phone VARCHAR(15),
	email VARCHAR(30) NOT NULL,
	city VARCHAR(10) CHECK(city in ('Riyadh', 'Macca', 'Madina')),
	zip_code int
);

ALTER TABLE Sales_Sch.customers
ADD stret VARCHAR(50) NOT NULL;

ALTER TABLE Sales_Sch.customers
ALTER COLUMN stret VARCHAR(30) NOT NULL;

EXEC sp_rename 'Sales_Sch.customers.stret', 'street', 'COLUMN';


-----------------------------------------------------------------------------


CREATE TABLE Sales_Sch.orders
(
	order_id INT IDENTITY(1, 1),
	order_status TINYINT NOT NULL,
	order_date DATE NOT NULL,
	required_date DATE NOT NULL,
	shipped_date DATE,

	customer_id INT,
	store_id INT NOT NULL,
	staff_id INT NOT NULL,

	CONSTRAINT orders_pk PRIMARY KEY (order_id),
	
	CONSTRAINT customer_orders_fk FOREIGN KEY (customer_id)
	REFERENCES Sales_Sch.customers (customer_id)
);


-----------------------------------------------------------------------------


CREATE TABLE Sales_Sch.stores
(
	store_id INT IDENTITY(1, 1) PRIMARY KEY,
	store_name VARCHAR(200) NOT NULL,
	phone VARCHAR(25),
	email VARCHAR(50),
	street VARCHAR(50),
	city VARCHAR(50),
	state VARCHAR(50),
	zip_code VARCHAR(5),
);

ALTER TABLE Sales_Sch.orders
ADD CONSTRAINT store_orders_fk FOREIGN KEY (store_id)
REFERENCES Sales_Sch.stores (store_id);


-----------------------------------------------------------------------------


CREATE TABLE Sales_Sch.staffs
(
	staff_id INT PRIMARY KEY IDENTITY(1, 1),
	first_name VARCHAR(50) NOT NULL,
	last_name VARCHAR(50) NOT NULL,
	email VARCHAR(50) UNIQUE NOT NULL,
	phone VARCHAR(25),
	active TINYINT NOT NULL,

	store_id INT NOT NULL,
	manager_id INT

	CONSTRAINT store_staffs_fk FOREIGN KEY (store_id)
	REFERENCES Sales_Sch.stores (store_id)
);