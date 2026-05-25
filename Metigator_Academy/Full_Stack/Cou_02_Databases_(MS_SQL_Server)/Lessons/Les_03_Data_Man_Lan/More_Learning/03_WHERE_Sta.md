The **`WHERE`** clause is a tool used to filter data in databases. Its syntax does not stand alone; instead, it is always embedded as part of other statements such as `SELECT`, `UPDATE`, or `DELETE`.

Its primary function is to check rows one by one and return only the rows where the condition evaluates to true (`TRUE`).

---

### 1. General Syntax (with the SELECT Statement)

The `WHERE` clause is placed directly after the table name (`FROM`) and before any ordering or grouping operations:

```sql
SELECT column1, column2
FROM table_name
WHERE condition;

```

* **`condition`:** This is the criteria based on which the data is selected (e.g., size is greater than X, or name equals Y).

---

### 2. Types of Conditions and Operators Used with WHERE

The syntax of the condition itself varies depending on what you are searching for. Here are the most common cases:

#### A) Standard Comparisons (Numeric and Text)

Standard comparison operators are used, such as (`=`, `>`, `<`, `>=`, `<=`, `!=` or `<>`):

```sql
-- Fetch employees whose salaries are higher than 5000
WHERE Salary > 5000

-- Fetch employees in the Sales department (Text strings require single quotes)
WHERE Department = 'Sales'

```

#### B) Multiple Conditions (AND, OR, NOT)

Used if you want to combine more than one condition:

```sql
-- Both conditions must be met
WHERE Department = 'Sales' AND Salary > 5000

-- At least one of the conditions must be met
WHERE City = 'Damascus' OR City = 'Aleppo'

```

#### C) Partial Text Search (LIKE)

Used to search for text that starts with, ends with, or contains specific characters using the `%` wildcard character:

```sql
-- Fetch names that start with the letter 'A'
WHERE EmpName LIKE 'A%'

```

#### D) Searching Within a Range or List (BETWEEN, IN)

```sql
-- Fetch ages between 20 and 30 (inclusive)
WHERE Age BETWEEN 20 AND 30

-- Fetch employees who work in specific departments
WHERE Department IN ('HR', 'IT', 'Marketing')

```

---

### 3. Syntax with Update and Delete (Very Important ⚠️)

Using `WHERE` with `UPDATE` and `DELETE` is critical, because omitting it means modifying or deleting **all data in the table** at once.

* **Syntax with Update (`UPDATE`):**

```sql
UPDATE Employees
SET Salary = 6000
WHERE ID = 101; -- Only the salary of the employee with ID 101 will be updated

```

* **Syntax with Delete (`DELETE`):**

```sql
DELETE FROM Employees
WHERE Status = 'Resigned'; -- Only employees with a 'Resigned' status will be deleted

```