
-- CREATE DATABASE koko;

IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'koko')
  BEGIN
    CREATE DATABASE koko;
  END