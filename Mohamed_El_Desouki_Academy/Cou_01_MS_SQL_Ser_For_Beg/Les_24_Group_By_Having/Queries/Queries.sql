USE BikeStoreDB;
GO


-- For each category, list category_id, max price, lowset price, avergae price;
SELECT
	production.products.category_id,
	COUNT(production.products.list_price) AS 'Counter',
	MAX(production.products.list_price) AS 'Max price',
	MIN(production.products.list_price) AS 'Min price',
	AVG(production.products.list_price) AS 'Avg price'
FROM production.products
GROUP BY production.products.category_id;


--------------------------------------------------------------------------------------


SELECT
	production.brands.brand_name,
	COUNT(*) AS 'Counter',
	MAX(production.products.list_price) AS 'Max',
	MIN(production.products.list_price) AS 'Min'
FROM
	production.brands JOIN production.products ON production.brands.brand_id = production.products.brand_id
GROUP BY
	production.brands.brand_name;



SELECT
	production.brands.brand_name,
	COUNT(*) AS 'Counter',
	MAX(production.products.list_price) AS 'Max',
	MIN(production.products.list_price) AS 'Min'
FROM
	production.brands,
	production.products
WHERE 
	production.brands.brand_id = production.products.brand_id
GROUP BY
	production.brands.brand_name;


--------------------------------------------------------------------------------------

SELECT
	sales.orders.customer_id,
	COUNT(*) AS 'Counter',
	MAX(sales.orders.order_date) AS 'Last Date',
	MIN(sales.orders.order_date) AS 'First Date'
FROM
	sales.orders
GROUP BY
	sales.orders.customer_id;



SELECT
	sales.customers.first_name +' '+ sales.customers.last_name AS 'Full Name',
	COUNT(*) AS 'Counter',
	MAX(sales.orders.order_date) AS 'Last Date',
	MIN(sales.orders.order_date) AS 'First Date'
FROM
	sales.customers
JOIN
	sales.orders
ON
	sales.customers.customer_id = sales.orders.customer_id
GROUP BY
	sales.customers.first_name, sales.customers.last_name;


--------------------------------------------------------------------------------------

SELECT
	sales.orders.customer_id,
	COUNT(*) AS 'Counter',
	MAX(sales.orders.order_date) AS 'Last Date',
	MIN(sales.orders.order_date) AS 'First Date'
FROM
	sales.orders
GROUP BY
	sales.orders.customer_id
HAVING 
	sales.orders.customer_id > 1;



SELECT
	sales.orders.customer_id,
	COUNT(*) AS 'Counter',
	MAX(sales.orders.order_date) AS 'Last Date',
	MIN(sales.orders.order_date) AS 'First Date'
FROM
	sales.orders
GROUP BY
	sales.orders.customer_id
HAVING 
	sales.orders.customer_id > 1;



SELECT
	sales.customers.first_name +' '+ sales.customers.last_name AS 'Full Name',
	COUNT(*) AS 'Counter',
	MAX(sales.orders.order_date) AS 'Last Date',
	MIN(sales.orders.order_date) AS 'First Date'
FROM
	sales.customers
JOIN
	sales.orders
ON
	sales.customers.customer_id = sales.orders.customer_id
GROUP BY
	sales.customers.first_name, sales.customers.last_name
HAVING sales.customers.first_name = 'kifah';