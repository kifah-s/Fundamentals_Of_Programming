## Lesson Summary.

---

#### Modify Column in a Table

We can also change the column's data type using the ALTER TABLE command with MODIFY or ALTER COLUMN clause. For example,

SQL Server
```
ALTER TABLE Employees
ALTER COLUMN Name VARCHAR(100);
```

MySQL
```
ALTER TABLE Employees
MODIFY COLUMN Name VARCHAR(100);
```

Oracle
```
ALTER TABLE Employees
MODIFY Name VARCHAR(100);
```

PostgreSQL
```
ALTER TABLE Employees
ALTER COLUMN Name VARCHAR(100);
```

Here, the SQL command changes the data type of the Name column to VARCHAR in the Employees table.