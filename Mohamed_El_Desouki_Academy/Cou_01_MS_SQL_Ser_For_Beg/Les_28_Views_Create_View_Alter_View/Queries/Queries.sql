USE BikeStoreDB;
GO

SELECT
    production.products.product_name, 
    production.products.list_price,
    production.brands.brand_name
FROM
    production.products
INNER JOIN production.brands
        ON production.products.brand_id = production.brands.brand_id;


--------------------------------------------------------------------


CREATE VIEW sales.product_info
AS
SELECT
    production.products.product_name, 
    production.products.list_price,
    production.brands.brand_name
FROM
    production.products
INNER JOIN production.brands
        ON production.products.brand_id = production.brands.brand_id;


SELECT * FROM sales.product_info;


--------------------------------------------------------------------


SELECT product_name, list_price FROM sales.product_info;
