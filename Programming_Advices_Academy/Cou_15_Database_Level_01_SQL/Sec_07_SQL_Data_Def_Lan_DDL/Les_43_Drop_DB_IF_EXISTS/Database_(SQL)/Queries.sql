
-- Drop DATABASE koko;

IF EXISTS(SELECT * FROM sys.databases WHERE name = 'koko')
  BEGIN
    Drop DATABASE koko;
  END