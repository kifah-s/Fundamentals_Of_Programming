In SQL databases, a **`SUBQUERY`** (also known as an Inner Query or Nested Query) refers to **a `SELECT` statement embedded inside another SQL query**.

Think of it like solving a two-step math problem: you first solve the inner equation to find an unknown value, and then you take that result and use it to solve the larger, outer equation.

---

## How Does a Subquery Work?

This process always consists of two main parts:

1. **The Inner Query:** This executes first and extracts a specific result.
2. **The Outer Query (Main Query):** This receives the result of the inner query and relies on it to complete its own operation.

---

## Practical Examples

Let's assume we have a table named `Employees` containing employee names and their salaries:

| Name | Salary |
| --- | --- |
| Ahmed | 8000 |
| Sara | 6000 |
| Khaled | 4000 |
| Mona | 3500 |

### Example 1: A Subquery Returning a Single Value (Scalar)

**Goal:** We want to find the names of employees who earn **more than the average salary** of the company.

Since we don't know what the average is beforehand, we let the subquery calculate it for us:

```sql
SELECT Name, Salary
FROM Employees
WHERE Salary > (SELECT AVG(Salary) FROM Employees);

```

* **What happens behind the scenes?**
1. First, the inner query `(SELECT AVG(Salary) FROM Employees)` runs and finds that the average is `5375`.
2. Second, the outer query automatically translates to: `WHERE Salary > 5375`.
3. The final output will display "Ahmed" and "Sara".



---

### Example 2: A Subquery Returning a List of Values

Let's assume we have a second table named `Departments`. We want to fetch all employees who work in departments located in the city of 'Riyadh'.

Because the inner query might return multiple department IDs, we use the **`IN`** operator instead of the equals `=` sign:

```sql
SELECT Name 
FROM Employees
WHERE Department_ID IN (SELECT ID FROM Departments WHERE City = 'Riyadh');

```

---

## Where Can You Put a Subquery?

Subqueries are highly flexible and can be placed in several clauses within a statement:

* **Inside the `WHERE` clause:** (The most common usage, as seen in the examples above, used to filter data).
* **Inside the `SELECT` clause:** Used to compute a value or compare each individual row against a sub-calculation.
* **Inside the `FROM` clause:** Here, the subquery acts as a "temporary table" (often called a derived table or inline view) that the outer query selects from.

---

## Golden Rules When Writing a Subquery

1. A subquery must always be enclosed within **parentheses `( )**`.
2. In most cases, the inner query should return **only one column** so the outer query can properly evaluate or compare it.
3. You cannot typically use an `ORDER BY` clause inside a subquery unless you are also using a row-limiting clause like `TOP` or `LIMIT` (depending on your SQL dialect).

---
