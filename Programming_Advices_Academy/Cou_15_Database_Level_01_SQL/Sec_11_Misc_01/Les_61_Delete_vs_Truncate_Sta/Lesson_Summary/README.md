## Lesson Summary.

---

#### Delete Vs Truncate

The main difference between both statements is that DELETE FROM statement supports WHERE clause whereas TRUNCATE does not.

Also the DELETE FROM statement does not reset the auto number (identity field) while the TRUNCATE does reset the identity fields.

That means, we can delete single or multiple rows using the DELETE FROM statement while the TRUNCATE statement deletes all records from the table at once.

We can mimic the TRUNCATE statement with DELETE FROM statement by omitting the WHERE clause. For example,

```
DELETE FROM Customers;
```

is similar to,

```
TRUNCATE TABLE Customers;
```