USE BikeStoreDB;
GO

SELECT * FROM sales.customers;
SELECT * FROM sales.orders;
SELECT * FROM sales.stores;

SELECT
		sales.customers.first_name,
		sales.customers.last_name,
		sales.orders.order_id,
		sales.stores.store_name
FROM
	sales.customers,
	sales.orders,
	sales.stores
WHERE sales.customers.customer_id = sales.orders.customer_id
AND sales.orders.store_id = sales.stores.store_id;


SELECT
		sales.customers.first_name,
		sales.customers.last_name,
		sales.orders.order_id,
		sales.stores.store_name
FROM sales.customers JOIN sales.orders ON sales.customers.customer_id = sales.orders.customer_id
					 JOIN sales.stores ON sales.orders.store_id = sales.stores.store_id;


-----------------------------------------------------------------------


SELECT
	sales.orders.order_id,
	sales.order_items.order_id, 
	production.products.product_name
FROM
	sales.orders JOIN sales.order_items ON sales.orders.order_id = sales.order_items.order_id
				 JOIN production.products ON sales.order_items.order_id = production.products.product_id;


SELECT
	sales.orders.order_id,
	sales.order_items.order_id, 
	production.products.product_name
FROM sales.orders, sales.order_items, production.products
WHERE sales.orders.order_id = sales.order_items.order_id
AND sales.order_items.order_id = production.products.product_id;


-----------------------------------------------------------------------


SELECT
	sales.customers.customer_id, sales.customers.first_name,
	sales.orders.order_id,
	sales.order_items.item_id,
	production.products.product_id, production.products.product_name,
	production.brands.brand_id, production.brands.brand_name
FROM
	sales.customers JOIN sales.orders ON sales.customers.customer_id = sales.orders.customer_id
					JOIN sales.order_items ON sales.orders.order_id = sales.order_items.order_id
					JOIN production.products ON production.products.product_id = sales.order_items.product_id
					JOIN production.brands ON production.products.brand_id = production.brands.brand_id;



SELECT
	sales.customers.customer_id, sales.customers.first_name,
	sales.orders.order_id,
	sales.order_items.item_id,
	production.products.product_id, production.products.product_name,
	production.brands.brand_id, production.brands.brand_name
FROM
	sales.customers,
	sales.orders,
	sales.order_items,
	production.products,
	production.brands
WHERE
	sales.customers.customer_id = sales.orders.customer_id
AND
	sales.orders.order_id = sales.order_items.order_id
AND
	sales.order_items.product_id = production.products.product_id
AND
	production.products.brand_id = production.brands.brand_id;