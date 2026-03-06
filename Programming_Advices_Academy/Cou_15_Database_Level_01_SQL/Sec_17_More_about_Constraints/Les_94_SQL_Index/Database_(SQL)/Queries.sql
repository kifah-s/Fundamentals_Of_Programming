



CREATE TABLE Persons
(
   ID int NOT NULL UNIQUE,
   LastName varchar(255) NOT NULL,
   FirstName varchar(255),
   Age int
);


create index idx_lastName on pesons (LastName);
drop index persons.idx_lastName;


create index idx_perName on pesons (LastName, FirstName);
drop index persons.idx_perName;

