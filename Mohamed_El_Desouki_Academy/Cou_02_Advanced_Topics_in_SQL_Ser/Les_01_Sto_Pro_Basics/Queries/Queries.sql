USE BikeStores;
GO


SELECT 
	product_name, 
	list_price
FROM 
	production.products
ORDER BY 
	product_name;

----------------------------------------------------------------

-- CREATE PROCEDURE uspProductList
-- AS
-- BEGIN
--     SELECT 
--         product_name, 
--         list_price
--     FROM 
--         production.products
--     ORDER BY 
--         product_name;
-- END;


-- EXECUTE uspProductList;


----------------------------------------------------------------


CREATE PROC uspProductList
AS
BEGIN
    SELECT 
        product_name, 
        list_price
    FROM 
        production.products
    ORDER BY 
        product_name;
END;


EXEC uspProductList;


----------------------------------------------------------------

DROP PROC uspProductList;