In SQL databases, **Functions** are pre-written, stored blocks of code within the Database Management System (DBMS). These functions accept input parameters, perform specific operations on them, and then **return a single value** (or a table in some cases) as a result.

Their primary purpose is to simplify calculations, modify strings, handle dates, and reduce the need to repeatedly write complex code.

---

## Types of Functions in SQL

SQL functions are generally divided into two main categories based on how they operate on data:

### 1. Built-in Functions

These are ready-made functions that come built directly into the SQL language. They are divided into several popular categories:

#### A. Aggregate Functions

These functions are applied to a **set of values** in a specific column and return a **single summarizing value**. They are most commonly used alongside the `GROUP BY` clause.

* `SUM()`: Calculates the total of the values.
* `AVG()`: Calculates the average (mean) value.
* `COUNT()`: Counts the number of rows or values.
* `MAX()`: Finds the maximum value.
* `MIN()`: Finds the minimum value.

#### B. Scalar Functions

These functions operate on a **single value in each row** and return a single value for each individual row. They include:

* **String Functions:** Such as `UPPER()` to convert text to uppercase, `LOWER()` for lowercase, and `CONCAT()` to combine strings.
* **Numeric Functions:** Such as `ROUND()` to round numbers, and `ABS()` to find the absolute value.
* **Date & Time Functions:** Such as `NOW()` or `GETDATE()` to fetch the current time, and `DATEDIFF()` to calculate the difference between two dates.
* **Conversion Functions:** Such as `CAST()` or `CONVERT()` to change data from one type to another (e.g., converting text into a number).

---

### 2. User-Defined Functions (UDFs)

If you cannot find a built-in function that meets your needs, SQL allows you to create your own custom function using procedural code (such as T-SQL in SQL Server or PL/SQL in Oracle). These are divided into:

* **Scalar UDFs:** Take inputs and return exactly one single value (e.g., a function that calculates tax based on salary).
* **Table-Valued UDFs:** Return an **entire table** as a result instead of a single value. You can use them in the `FROM` clause just like a regular table.

---

## Quick Example Showing the Difference

Consider this query, which combines both types (Scalar and Aggregate):

```sql
SELECT 
    UPPER(EmployeeName) AS CleanName,  -- Scalar function (modifies each name individually)
    SUM(Salary) AS TotalSalaries       -- Aggregate function (sums up salaries for all employees)
FROM Employees;

```