USE BikeStoreDB;
GO

SELECT * FROM sales.customers;

SELECT * FROM sales.customers
WHERE city = 'swida';

SELECT first_name, last_name FROM sales.customers
WHERE city = 'swida';

SELECT * FROM sales.stores
WHERE store_name = 'rami_market' and city = 'shahba';

SELECT * FROM sales.stores
WHERE store_name = 'rami_market' or  store_name = 'melad_market' and city = 'shahba';