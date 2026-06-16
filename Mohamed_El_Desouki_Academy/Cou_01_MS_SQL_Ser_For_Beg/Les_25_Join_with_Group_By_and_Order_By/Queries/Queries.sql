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
GROUP BY production.products.category_id
ORDER BY production.products.category_id DESC;


--------------------------------------------------------------------------------------


SELECT
	sales.stores.store_name,
	COUNT(*)
FROM
	sales.stores
JOIN
	sales.orders
ON
	sales.stores.store_id = sales.orders.store_id
GROUP BY
	sales.stores.store_name;



SELECT
	sales.stores.store_name,
	COUNT(*)
FROM
	sales.stores,
	sales.orders
WHERE
	sales.stores.store_id = sales.orders.store_id
GROUP BY
	sales.stores.store_name;



--------------------------------------------------------------------------------------


SELECT
	sales.stores.store_name,
	COUNT(*)
FROM
	sales.stores
JOIN
	sales.orders
ON
	sales.stores.store_id = sales.orders.store_id
GROUP BY
	sales.stores.store_name
ORDER BY
	COUNT(*) DESC;


--------------------------------------------------------------------------------------


SELECT
	sales.stores.store_name,
	COUNT(*) AS 'Number of orders'
FROM
	sales.stores
JOIN
	sales.orders
ON
	sales.stores.store_id = sales.orders.store_id
GROUP BY
	sales.stores.store_name
HAVING
	COUNT(*) > 2
ORDER BY
	COUNT(*) DESC;


--------------------------------------------------------------------------------------


SELECT
	production.brands.brand_name,
	COUNT(*)
FROM
	production.brands,
	production.products,
	sales.order_items
WHERE
	production.brands.brand_id = production.products.brand_id
AND
	production.products.product_id = sales.order_items.product_id
GROUP BY
	production.brands.brand_name
HAVING
	COUNT(*) > 1000
ORDER BY
	COUNT(*) DESC;



SELECT
	production.brands.brand_name,
	COUNT(*)
FROM
	production.brands
JOIN
	production.products
ON
	production.brands.brand_id = production.products.brand_id
JOIN
	sales.order_items
ON
	production.products.product_id = sales.order_items.product_id
GROUP BY
	production.brands.brand_name
HAVING
	COUNT(*) > 1000
ORDER BY
	COUNT(*) DESC;


--------------------------------------------------------------------------------------


