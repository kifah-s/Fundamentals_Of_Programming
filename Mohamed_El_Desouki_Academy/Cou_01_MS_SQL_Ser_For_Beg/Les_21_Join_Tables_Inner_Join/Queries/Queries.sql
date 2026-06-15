USE BikeStoreDB;
GO

SELECT * FROM sales.customers;

SELECT * FROM sales.orders;

SELECT *
FROM sales.customers, sales.orders
WHERE sales.customers.customer_id = sales.orders.customer_id;

SELECT *
FROM sales.customers
INNER JOIN sales.orders
ON sales.customers.customer_id = sales.orders.customer_id;


-----------------------------------------------------------------------


SELECT first_name, last_name, email, order_id, order_date, store_id
FROM sales.customers, sales.orders
WHERE sales.customers.customer_id = sales.orders.customer_id;

SELECT first_name, last_name, email, order_id, order_date, store_id
FROM sales.customers
INNER JOIN sales.orders
ON sales.customers.customer_id = sales.orders.customer_id;


-----------------------------------------------------------------------


SELECT first_name, last_name, email, order_id, order_date, store_id
FROM sales.customers, sales.orders
WHERE sales.customers.customer_id = sales.orders.customer_id;

SELECT first_name, last_name, email, order_id, order_date, store_id
FROM sales.customers JOIN sales.orders
ON sales.customers.customer_id = sales.orders.customer_id;

-----------------------------------------------------------------------

SELECT * FROM sales.orders;
SELECT * FROM sales.staffs;

SELECT *
FROM sales.orders, sales.staffs
WHERE sales.orders.staff_id = sales.staffs.staff_id;

SELECT *
FROM sales.orders INNER JOIN sales.staffs
ON sales.orders.staff_id = sales.staffs.staff_id;

-----------------------------------------------------------------------