USE master;

CREATE DATABASE salesDB;

DROP DATABASE salesDB;

---------------------------------------------------------------------------------

CREATE DATABASE DatabaseName
ON 
( NAME = DatabaseName_dat,
    FILENAME = 'C:\SQLData\DatabaseName.mdf',
    SIZE = 10MB,
    MAXSIZE = 100MB,
    FILEGROWTH = 5MB )
LOG ON
( NAME = DatabaseName_log,
    FILENAME = 'C:\SQLData\DatabaseName.ldf',
    SIZE = 5MB,
    MAXSIZE = 50MB,
    FILEGROWTH = 5MB );

    ---------------------------------------------------------------------------------