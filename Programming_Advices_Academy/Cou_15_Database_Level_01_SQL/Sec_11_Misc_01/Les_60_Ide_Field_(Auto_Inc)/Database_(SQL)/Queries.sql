

CREATE TABLE Persons (
   Personid int IDENTITY(1,1) PRIMARY KEY,
   LastName varchar(255) NOT NULL,
   FirstName varchar(255),
   Age int
);

------------------------------------------------------------------------------

CREATE TABLE Departments (
    ID int identity(1,1)  NOT NULL,
    Name nvarchar(50) NOT NULL,
    PRIMARY KEY (ID)
);


------------------------------------------------------------------------------

insert into Departments 
values ('HR');

print @@identity;