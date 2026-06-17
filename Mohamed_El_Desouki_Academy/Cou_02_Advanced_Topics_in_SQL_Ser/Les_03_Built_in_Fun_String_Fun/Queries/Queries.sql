USE BikeStores;
GO

SELECT
	first_name,
	last_name
FROM
	sales.customers;




SELECT
	UPPER (first_name),
	last_name
FROM
	sales.customers;




SELECT
	UPPER (first_name),
	LOWER (last_name)
FROM
	sales.customers;




SELECT UPPER('Hello, Database');



SELECT 
    customer_id,
    first_name,
    last_name,
    CONCAT(first_name, ' ', last_name) full_name
FROM 
    sales.customers
ORDER BY 
    full_name;



SELECT 
    customer_id,
    first_name,
    last_name,
    first_name +' ' + last_name AS full_name
FROM 
    sales.customers
ORDER BY 
    full_name;







SELECT 
    CHARINDEX('SQL', 'SQL Server CHARINDEX') position;


SELECT 
    CHARINDEX('SQL', 'SQL Server CHARINDEX', 6) position;




SELECT 
    REPLACE (
        'It is a good tea at the famous tea store.', 
        'tea', 
        'coffee'
    ) result;





SELECT 
    SUBSTRING('SQL Server SUBSTRING', 5, 6) result;





SELECT 
    email, 
    SUBSTRING(
        email, 
        CHARINDEX('@', email) + 1, 
        LEN(email) - CHARINDEX('@', email)
    ) domain
FROM 
    sales.customers
ORDER BY 
    email;
