USE BikeStoreDB;
GO

SELECT * FROM production.products;

SELECT MAX(production.products.list_price) FROM production.products;

SELECT
	MAX(production.products.list_price) AS Max,
	MIN(production.products.list_price) AS Min
FROM
	production.products;

SELECT
	MAX(production.products.list_price) AS Max,
	MIN(production.products.list_price) AS Min,
	AVG(production.products.list_price) AS Avg
FROM
	production.products;


SELECT
	MAX(production.products.list_price) AS Max,
	MIN(production.products.list_price) AS Min,
	AVG(production.products.list_price) AS Avg,
	SUM(production.products.list_price) AS Sum
FROM
	production.products;


SELECT
	MAX(production.products.list_price) AS Max,
	MIN(production.products.list_price) AS Min,
	AVG(production.products.list_price) AS Avg,
	SUM(production.products.list_price) AS Sum,
	COUNT(production.products.list_price) AS Count
FROM
	production.products;


SELECT
	MAX(production.products.list_price) AS Max,
	MIN(production.products.list_price) AS Min,
	AVG(production.products.list_price) AS Avg,
	SUM(production.products.list_price) AS Sum,
	COUNT(production.products.list_price) AS Count
FROM
	production.products
WHERE
	production.products.brand_id = 1;
