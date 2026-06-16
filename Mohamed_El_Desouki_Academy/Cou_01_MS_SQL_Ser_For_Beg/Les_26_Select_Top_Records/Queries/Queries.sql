USE BikeStoreDB;
GO

SELECT
	production.products.product_id,
	production.products.product_name,
	production.products.list_price
FROM
	production.products
ORDER BY
	production.products.list_price DESC;


------------------------------------------------------------


SELECT TOP 2
	production.products.product_id,
	production.products.product_name,
	production.products.list_price
FROM
	production.products
ORDER BY
	production.products.list_price DESC;


------------------------------------------------------------


SELECT TOP 1 PERCENT
	production.products.product_id,
	production.products.product_name,
	production.products.list_price
FROM
	production.products
ORDER BY
	production.products.list_price DESC;


------------------------------------------------------------


SELECT TOP 1 WITH TIES
	production.products.product_id,
	production.products.product_name,
	production.products.list_price
FROM
	production.products
ORDER BY
	production.products.list_price DESC;


------------------------------------------------------------