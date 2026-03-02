## Lesson Summary.

---

#### SELECT INTO Statement

In SQL, we can copy data from one database table to a new table using the SELECT INTO command. For example,

```
SELECT *
INTO EmpoyeesCopy
FROM Employees;
```

Here, the SQL command copies all data from the Employees table to the new EmployeesCopy table.

Note: The SELECT INTO statement creates a new table. If the database already has a table with the same name, SELECT INTO gives an error.

If we want to copy data to an existing table (rather than creating a new table), we should use the INSERT INTO SELECT statement.