

--Creating FOREIGN Key

-- This table doesn't have a foreign key
CREATE TABLE Customers (
  Customer_ID int,
  primary key(Customer_ID),

  First_Name varchar(40),
  Last_Name varchar(40),
  Age int,
  Country varchar(10)
);


-- Adding foreign key to the customer_id field
-- The foreign key references to the id field of the Customers table
CREATE TABLE Orders (
  Order_ID int,
  primary key (Order_ID),

  Customer_ID int references Customers(Customer_ID),

  Item varchar(40),
  Amount int
);

-------------------------------------------------------------------------------

--Foreign Key with Alter Table

-- This table doesn't have a foreign key
CREATE TABLE Customers (
  primary key(Customer_ID),

  First_Name varchar(40),
  Last_Name varchar(40),
  Age int,
  Country varchar(10)
);

CREATE TABLE Orders (
  Order_ID int,
  primary key (Order_ID),

  Customer_ID int,

  Item varchar(40),
  Amount int
);

-- Adding foreign key to the customer_id field using alter
alter table Orders add foreign key(Customer_ID) references Customers(Customer_ID);
