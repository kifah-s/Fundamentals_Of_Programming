USE BikeStores;
GO

CREATE FUNCTION sales.udfNetSale(
    @quantity INT,
    @list_price DEC(10,2),
    @discount DEC(4,2)
)
RETURNS DEC(10,2)
AS 
BEGIN
    RETURN @quantity * @list_price * (1 - @discount);
END;




SELECT 
    sales.udfNetSale(10,100,0.1) net_sale;





SELECT 
    order_id, 
    SUM(sales.udfNetSale(quantity, list_price, discount)) net_amount
FROM 
    sales.order_items
GROUP BY 
    order_id
ORDER BY
    net_amount DESC;







CREATE FUNCTION add_tow_numbers (@num_1 int, @num_2 int)
RETURNS INT
as
BEGIN
    RETURN @num_1 + @num_2;
END;


SELECT dbo.add_tow_numbers(1 , 2);





