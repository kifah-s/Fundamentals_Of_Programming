USE BikeStoreDB;
GO

SELECT * FROM sales.customers;

UPDATE sales.customers
SET phone = '123456789'
WHERE customer_id = 1;

SELECT * FROM sales.customers;



UPDATE sales.customers
SET street = 'shahba - shahba'
WHERE customer_id = 1;

SELECT * FROM sales.customers;



UPDATE sales.customers
SET street = 'shahba - shahba',
	city = 'swida',
	zip_code = 123
WHERE customer_id = 2;

SELECT * FROM sales.customers;



UPDATE sales.customers
SET street = 'shahba - shahba',
	city = 'swida',
	zip_code = 123
WHERE customer_id = 3 and first_name = 'omar';

SELECT * FROM sales.customers;

