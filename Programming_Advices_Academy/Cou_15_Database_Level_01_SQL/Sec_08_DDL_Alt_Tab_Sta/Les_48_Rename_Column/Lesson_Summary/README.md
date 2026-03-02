## Lesson Summary.

---

#### Rename Column in a Table (Most Databases)

We can rename columns in a table using the ALTER TABLE command with the RENAME COLUMN clause. For example,

```sql
ALTER TABLE Employees
RENAME COLUMN Gendor TO Gender;
```

Here, the SQL command changes the column name of Gendor to Gender in the Employees table.

---

#### Rename column in table ( in SQL Server)

You can not use the ALTER TABLE statement in SQL Server to rename a column in a table. However, you can use sp_rename, though Microsoft recommends that you drop and recreate the table so that scripts and stored procedures are not broken.

Syntax

The syntax to rename a column in an existing table in SQL Server (Transact-SQL) is:

```sql
exec sp_rename 'table_name.old_column_name', 'new_column_name', 'COLUMN';
```