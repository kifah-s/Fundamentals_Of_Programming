CREATE DATABASE Test;

USE Test;

CREATE TABLE someTable
(
	Name varchar(50) not null
);

ALTER TABLE someTable
ALTER COLUMN Name varchar(100);

ALTER TABLE someTable
ADD Phone varchar(50);

ALTER TABLE someTable
DROP COLUMN Phone;

DROP TABLE someTable;