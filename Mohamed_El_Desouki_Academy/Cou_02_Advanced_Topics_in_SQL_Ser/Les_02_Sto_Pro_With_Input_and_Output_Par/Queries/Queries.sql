USE BikeStores;
GO


SELECT
    product_name,
    list_price
FROM 
    production.products
ORDER BY
    list_price;



CREATE PROCEDURE uspFindProducts
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    ORDER BY
        list_price;
END;


EXEC uspFindProducts;


------------------------------------------------------------------------

ALTER PROCEDURE uspFindProducts(@min_list_price AS DECIMAL)
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    WHERE
        list_price >= @min_list_price
    ORDER BY
        list_price;
END;


EXEC uspFindProducts 1000;


------------------------------------------------------------------------


ALTER PROCEDURE uspFindProducts (@min_list_price AS DECIMAL, @max_list_price AS DECIMAL)
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    WHERE
        list_price >= @min_list_price
        AND
        list_price <= @max_list_price
    ORDER BY
        list_price;
END;


EXEC uspFindProducts 1000, 2000;


------------------------------------------------------------------------


ALTER PROCEDURE uspFindProducts(
    @min_list_price AS DECIMAL,
    @max_list_price AS DECIMAL,
    @name AS VARCHAR(max)
)
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    WHERE
        list_price >= @min_list_price
        AND
        list_price <= @max_list_price
        AND
        product_name LIKE '%' + @name + '%'
    ORDER BY
        list_price;
END;


EXEC uspFindProducts 900, 1000, 'Trek';


EXEC uspFindProducts 
    @min_list_price = 900, 
    @max_list_price = 1000,
    @name = 'Trek';


    ------------------------------------------------------------------------


ALTER PROCEDURE uspFindProducts (
    @min_list_price AS DECIMAL = 0,
    @max_list_price AS DECIMAL = 999999,
    @name AS VARCHAR(max)
)
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    WHERE
        list_price >= @min_list_price
        AND
        list_price <= @max_list_price
        AND
        product_name LIKE '%' + @name + '%'
    ORDER BY
        list_price;
END;


EXEC uspFindProducts 
    @min_list_price = 900, 
    @max_list_price = 1000,
    @name = 'Trek';


EXEC uspFindProducts 
    @max_list_price = 1000,
    @name = 'Trek';


EXEC uspFindProducts 
    @name = 'Trek';


------------------------------------------------------------------------


ALTER PROCEDURE uspFindProducts(
    @min_list_price AS DECIMAL = 0
    ,@max_list_price AS DECIMAL = NULL
    ,@name AS VARCHAR(max)
)
AS
BEGIN
    SELECT
        product_name,
        list_price
    FROM 
        production.products
    WHERE
        list_price >= @min_list_price
        AND
        (@max_list_price IS NULL OR list_price <= @max_list_price)
        AND
        product_name LIKE '%' + @name + '%'
    ORDER BY
        list_price;
END;


EXEC uspFindProducts 
    @min_list_price = 500,
    @name = 'Haro';


------------------------------------------------------------------------


CREATE PROCEDURE uspFindProductByModel (
    @model_year SMALLINT,
    @product_count INT OUTPUT
) AS
BEGIN
    SELECT 
        product_name,
        list_price
    FROM
        production.products
    WHERE
        model_year = @model_year;

    SELECT @product_count = @@ROWCOUNT;
END;


DECLARE @count INT;

EXEC uspFindProductByModel
    @model_year = 2018,
    @product_count = @count OUTPUT;

SELECT @count AS 'Number of products found';




