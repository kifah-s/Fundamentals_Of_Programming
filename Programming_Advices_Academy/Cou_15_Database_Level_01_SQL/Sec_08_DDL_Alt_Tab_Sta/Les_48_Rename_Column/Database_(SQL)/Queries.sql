

--- ALTER TABLE Employees
--- RENAME COLUMN Gendor TO Gender;

exec sp_rename 'table_name.old_column_name', 'new_column_name', 'COLUMN';
exec sp_rename 'Employees.Gendor', 'Gender', 'COLUMN';