


-- create table Persons
-- (
-- 	 ID int not null,
-- 	 FirstName varchar(255) not null,
-- 	 LastName varchar(255) not null,
-- 	 Age int,
-- 	 City varchar(255) default 'Amman' 
-- )


-- create table Orders
-- (
-- 	 ID int not null,
-- 	 OrderNumber int not null,
-- 	 OrderDate date default getdate()
-- )



create table Persons
 (
 	 ID int not null,
 	 FirstName varchar(255) not null,
 	 LastName varchar(255) not null,
 	 Age int,
 	 City varchar(255)
 )

 alter table Persons
 add constraint df_city
 default 'amman' for city;


 alter table Persons
 drop constraint df_city;