In SQL, the **`TOP`** clause is used to specify the **number of records (rows)** you want the database to return, instead of fetching thousands of rows that you might not need.

Imagine you own a huge e-commerce store and you only want to see the "Top 5 best-selling products" or the "Last 10 users who registered"; this is exactly where `TOP` becomes useful.

---

## 📑 General Syntax and Usage

The `TOP` word is written directly after `SELECT`, followed by the number that defines how many rows you want:

```sql
SELECT TOP number column1, column2
FROM table_name;

```

---

## 🎬 Practical Examples (Combined with `ORDER BY`)

The `TOP` clause is rarely used alone. To get meaningful results, you should almost always pair it with **`ORDER BY`** to sort the data—either getting the highest values (descending `DESC`) or the lowest values (ascending `ASC`).

### Example 1: Fetching the top 5 highest salaries in the company

We ask the database to sort the employees by salary from highest to lowest, and then grab only the first 5:

```sql
SELECT TOP 5 employee_name, salary
FROM Employees
ORDER BY salary DESC;

```

### Example 2: Fetching the last 3 users who signed up

We sort the users based on their registration date in descending order to get the newest first, and then take the top 3:

```sql
SELECT TOP 3 username, signup_date
FROM Users
ORDER BY signup_date DESC;

```

---

## 💡 Pro Tip: Fetching a Percentage (`PERCENT`)

Instead of specifying a fixed number of rows (like 5 or 10), you can ask SQL to fetch a **percentage** of the total rows using the `PERCENT` keyword.

**Example:** If you have 1,000 products and you want to display the top 10% most expensive ones (which equals 100 products):

```sql
SELECT TOP 10 PERCENT product_name
FROM Products
ORDER BY price DESC;

```

---

## ⚠️ Important Warning (Database Compatibility)

The `TOP` clause is specific to **Microsoft SQL Server (MS Access)**. If you are using other database management systems, they achieve the exact same result but use different keywords written **at the very end of the query**:

1. **MySQL, PostgreSQL, and SQLite:** They use the **`LIMIT`** keyword.
```sql
-- In MySQL (Alternative to TOP 5)
SELECT employee_name FROM Employees ORDER BY salary DESC LIMIT 5;

```



```
2. **Oracle (Modern Versions):** It uses the **`FETCH FIRST`** syntax.
   ```sql
   -- In Oracle
   SELECT employee_name FROM Employees ORDER BY salary DESC
   FETCH FIRST 5 ROWS ONLY;

```