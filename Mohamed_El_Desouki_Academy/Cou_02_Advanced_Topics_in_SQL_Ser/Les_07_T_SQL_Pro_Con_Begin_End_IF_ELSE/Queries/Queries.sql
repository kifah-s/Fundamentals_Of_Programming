USE BikeStores;
GO


BEGIN
    SELECT
        product_id,
        product_name
    FROM
        production.products
    WHERE
        list_price > 100000;

    IF @@ROWCOUNT = 0
        PRINT 'No product with price greater than 100000 found';
END





BEGIN
    DECLARE @name VARCHAR(MAX);

    SELECT TOP 1
        @name = product_name
    FROM
        production.products
    ORDER BY
        list_price DESC;
    
    IF @@ROWCOUNT <> 0
    BEGIN
        PRINT 'The most expensive product is ' + @name
    END
    ELSE
    BEGIN
        PRINT 'No product found';
    END;
END


----------------------------------------------------------------------------------


BEGIN
    DECLARE @sales INT;

    SELECT 
        @sales = SUM(list_price * quantity)
    FROM
        sales.order_items i
        INNER JOIN sales.orders o ON o.order_id = i.order_id
    WHERE
        YEAR(order_date) = 2018;

    SELECT @sales;

    IF @sales > 1000000
    BEGIN
        PRINT 'Great! The sales amount in 2018 is greater than 1,000,000';
    END
END



