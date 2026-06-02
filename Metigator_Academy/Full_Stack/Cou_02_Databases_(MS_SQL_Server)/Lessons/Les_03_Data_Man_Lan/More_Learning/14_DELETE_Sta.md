In SQL databases, the **`DELETE`** statement is used to remove one or multiple existing rows (records) from a table.

In other words: if an employee leaves the company, a user deletes their account, or a product is discontinued and you want to completely remove it from the database, you use `DELETE`.

---

## General Syntax

The basic syntax for writing the command is as follows:

```sql
DELETE FROM table_name
WHERE condition;

```

### Explanation of Key Parts:

* **`DELETE FROM table_name`**: Specifies the table from which you want to delete data.
* **`WHERE`**: **This is the most critical and dangerous part!** It specifies which record or records should be deleted based on a specific condition.

---

## ⚠️ A Critical Warning (The Disaster of Forgetting WHERE)

> **Watch out:** If you write a `DELETE FROM table_name;` statement and forget to include the `WHERE` clause, the database will **delete all data and rows** inside the table entirely, leaving it completely empty!
> The structure of the table (the columns and data types) will remain intact, but you will lose all the content in the blink of an eye.

---

## Practical Examples

Let's assume we have a table named `Employees` with the following data:

| ID | Name | Salary | Department |
| --- | --- | --- | --- |
| 1 | Ahmed | 5500 | IT |
| 2 | Sara | 6000 | HR |
| 3 | Khaled | 4800 | HR |

### 1. Deleting a single specific row (The Safest Approach)

If the employee "Ahmed" (who has ID = 1) resigns and we want to remove him from the system:

```sql
DELETE FROM Employees
WHERE ID = 1;

```

*(After executing this query, Ahmed's row will completely disappear from the table).*

### 2. Deleting a group of rows based on a condition

If the company decides to shut down the "HR" department entirely and lay off its employees:

```sql
DELETE FROM Employees
WHERE Department = 'HR';

```

*(This query will delete both "Sara" and "Khaled" simultaneously because both meet the specified condition).*

### 3. Deleting all rows (Emptying the Table)

If you want to wipe out all employees while keeping the table structure intact for future use:

```sql
DELETE FROM Employees;

```

---

## What is the difference between `DELETE`, `TRUNCATE`, and `DROP`?

Since we are talking about removal, a lot of confusion usually happens between these three commands:

1. **`DELETE`**: Deletes **specific rows** (using a `WHERE` clause). This operation can be undone (Rollback) and is relatively slower because it processes rows one by one.
2. **`TRUNCATE`**: Deletes **all rows** in a table at once with extremely high speed. You cannot use a `WHERE` clause with it, and it leaves the table structure intact.
3. **`DROP`**: Deletes **the entire table**, including its structure, data, and indexes, completely from the database. After running this command, the table will no longer exist.

---
