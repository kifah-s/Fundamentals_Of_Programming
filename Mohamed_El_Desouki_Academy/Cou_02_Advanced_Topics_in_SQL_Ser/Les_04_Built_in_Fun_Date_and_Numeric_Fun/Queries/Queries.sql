USE BikeStores;
GO

SELECT 
    CURRENT_TIMESTAMP AS current_date_time;





SELECT GETDATE();




SELECT GETDATE(), DATEADD(DAY, 5 , GETDATE());






SELECT order_date, DATEADD(DAY, 5 , order_date) FROM sales.orders;