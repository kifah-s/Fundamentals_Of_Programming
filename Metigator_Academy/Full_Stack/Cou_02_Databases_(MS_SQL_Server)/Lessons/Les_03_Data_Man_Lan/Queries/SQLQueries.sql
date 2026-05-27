USE TestDB;
GO
   
-- INSERT INTO Companies (ComName, ComPhone) VALUES ('New Futsher','00963');
-- INSERT INTO Companies (ComPhone, ComName) VALUES ('12345','New Futsher 2');

-- INSERT INTO CustomersSchema.Users (user_ID, userName, phoneNumber, email, address)
-- VALUES (2, 'saloum', '12345', 'saloum@saloum.com', 'shahba');

-- INSERT INTO CustomersSchema.Users (user_ID, userName, phoneNumber, email, address)
-- VALUES (3, 'ashraf', '12345', 'ashraf@ashraf.com', 'shahba'),
-- 	      (4, 'omar', '12345', 'omar@omar.com', 'shahba'),
-- 	      (5, 'maher', '12345', 'maher@maher.com', 'shahba');

-- GO

------------------------------------------------------------------------------------------

-- SELECT * FROM Companies;
-- SELECT Companies.ComName FROM Companies;
-- SELECT Companies.ComName, Companies.ComPhone FROM Companies;
-- SELECT ComName FROM Companies;
-- SELECT ComName, ComPhone FROM Companies;
-- GO

------------------------------------------------------------------------------------------

-- SELECT * FROM Companies;

-- SELECT * FROM Companies
-- WHERE Companies.ComID = 3;

-- SELECT * FROM Companies
-- WHERE Companies.ComPhone = '444';

-- SELECT * FROM Companies;

-- SELECT Companies.ComName, Companies.ComCapital FROM Companies
-- WHERE ComID = 4;

-- SELECT * FROM Companies
-- WHERE ComCapital > 2000;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID = 2;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2;

-- SELECT * FROM CustomersSchema.Users
-- WHERE NOT user_ID > 2 ;

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2 AND userName = 'ashraf';

-- SELECT * FROM CustomersSchema.Users
-- WHERE user_ID > 2 AND userName = 'maher';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName = 'kifah' OR userName = 'maher';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE 'k%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%k';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%k%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%h%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '%s';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '_i%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '_if%';

-- SELECT * FROM CustomersSchema.Users
-- WHERE userName LIKE '__a%';

------------------------------------------------------------------------------------------

-- SELECT TOP 3 *
-- FROM CustomersSchema.Users;

-- SELECT TOP 3 userName, email
-- FROM CustomersSchema.Users;

-- SELECT TOP 3 PERCENT userName, email
-- FROM CustomersSchema.Users;

------------------------------------------------------------------------------------------

