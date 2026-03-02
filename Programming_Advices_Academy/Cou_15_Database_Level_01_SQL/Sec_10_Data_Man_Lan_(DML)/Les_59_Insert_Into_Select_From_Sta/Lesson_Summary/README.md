## Lesson Summary.

---

#### INSERT INTO SELECT Statement

We'll learn to copy records from one table to another with the help of examples.

The INSERT INTO SELECT statement is used to copy records from one table to another existing table. For example,

```
INSERT INTO OldPersons
SELECT *
FROM Persons;
```

Here, the SQL command copies all records from the Persons table to the OldPersons table.

Note: To run this command,

- the database must already have a table named OldPersons
- the column names of the OldPersons table and the Persons table must match

If we want to copy data to a new table (rather than copying in an existing table), we should use the SELECT INTO statement.

Copy all columns from one table to another table:

```
INSERT INTO table2
SELECT * FROM table1
WHERE condition;
```

Copy only some columns from one table into another table:

```
INSERT INTO table2 (column1, column2, column3, ...)
SELECT column1, column2, column3, ...
FROM table1
WHERE condition;
```