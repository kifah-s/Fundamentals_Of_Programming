-- CREATE DATABASE BarberDB;
-- GO

-- USE BarberDB;
-- GO

---------------------------------------------------------------

-- CREATE SCHEMA CustomersSchema;
-- GO

-- CREATE TABLE CustomersSchema.Users 
-- (
-- 		user_ID INT PRIMARY KEY,
-- 		userName VARCHAR(50) NOT NULL,
-- 		phoneNumber VARCHAR(50) NOT NULL,
-- 		email VARCHAR(100) UNIQUE,
-- 		address VARCHAR(100)
-- )
-- GO

---------------------------------------------------------------

-- CREATE SCHEMA SalersSchema;
-- GO

-- CREATE TABLE SalersSchema.WholeSalers
-- (
-- 		wholeSaler_ID INT PRIMARY KEY,
-- 		wholeSalerName VARCHAR(50) NOT NULL,
-- 		phoneNumber VARCHAR(50) NOT NULL,
-- 		email VARCHAR(100) UNIQUE,
-- 		address VARCHAR(100)
-- )

---------------------------------------------------------------

-- ALTER TABLE SalersSchema.WholeSalers
-- ADD address_2 VARCHAR(100);

-- ALTER TABLE SalersSchema.WholeSalers
-- ALTER COLUMN address_2 VARCHAR(400);

-- ALTER TABLE SalersSchema.WholeSalers
-- DROP COLUMN address_2;

---------------------------------------------------------------

-- DROP TABLE SalersSchema.WholeSalers;

---------------------------------------------------------------
