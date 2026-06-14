USE SalesDB;
GO

-- Rename Table.
EXEC sp_rename 'sales_schema.Staffs', 'Workers';


-- Rename COLUMN.
EXEC sp_rename 'production_schema.Categories.categorie_name' , 'cname', 'COLUMN';