In SQL databases, the **`UPDATE`** statement is used to modify or update **existing** data within a table.

In other words: if you want to add a completely new row, you use `INSERT`. But if the row already exists and you just want to change a specific value inside it (like changing a user's phone number or updating a product price), that's where `UPDATE` comes in.

---

## General Syntax

The basic syntax for writing the command is as follows:

```sql
UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;

```

### Explanation of Key Parts:

* **`UPDATE table_name`**: Specifies the table where you want to modify the data.
* **`SET`**: Specifies the columns you want to change and the new values you want to assign to them.
* **`WHERE`**: **This is the most critical part!** It specifies which record (or records) should be updated.

---

## ⚠️ A Very Important Warning (The Importance of WHERE)

> **Watch out:** If you write an `UPDATE` statement and forget to include the `WHERE` clause, the database will update **all rows** in the table without exception!
> For example, if you want to change the salary of just one employee but forget the `WHERE` clause, you will find that every single employee in the company now has the exact same salary in a matter of seconds.

---

## Practical Examples

Let's assume we have a table named `Employees` with the following data:

| ID | Name | Salary | Department |
| --- | --- | --- | --- |
| 1 | Ahmed | 5000 | IT |
| 2 | Sara | 6000 | HR |
| 3 | Khaled | 4500 | IT |

### 1. Updating a single value for a specific employee

We want to change the salary of "Ahmed" (who has ID = 1) to 5500:

```sql
UPDATE Employees
SET Salary = 5500
WHERE ID = 1;

```

### 2. Updating multiple values at the same time

We want to transfer "Khaled" (ID = 3) to the "HR" department and increase his salary to 4800:

```sql
UPDATE Employees
SET Department = 'HR', Salary = 4800
WHERE ID = 3;

```

### 3. Updating a group of records based on a condition

We want to give a 500-dollar raise to all employees working in the "IT" department:

```sql
UPDATE Employees
SET Salary = Salary + 500
WHERE Department = 'IT';

```

---

The fundamental difference between `UPDATE` and `ALTER` lies in **what** you are modifying in the database.

In simple terms: **`UPDATE` modifies the data (content), while `ALTER` modifies the structure (schema).**

Here is a detailed breakdown of the differences between them:

---

## 1. SQL Language Classification

* **`UPDATE`**: Belongs to **DML** (Data Manipulation Language). This sub-language is responsible for managing the actual data inside the tables (inserting, modifying, deleting).
* **`ALTER`**: Belongs to **DDL** (Data Definition Language). This sub-language is responsible for building and designing the blueprint of the database and its tables (creating, altering structure, dropping tables).

---

## 2. Core Function

* **`UPDATE`**: Used to change existing **values** inside the rows. You are not changing the column names or their data types; you are only changing the content.
* **`ALTER`**: Used to change the **structure of the table** itself. This includes adding a new column, deleting an existing column, changing a column's data type (e.g., from text to integer), or renaming the table.

---

## 3. Practical Comparison with Examples

Let's assume we have an employees table, and the company management comes up with two different requests. Here is how we handle each scenario:

### Scenario 1: Using `UPDATE` (Modifying Data)

* **The Request:** An employee named "Ahmed" changed his phone number, and we need to update it in the system.
* **The Reason:** This modification targets the **data of a single row** within the phone column.
* **The Code:**
```sql
UPDATE Employees 
SET Phone = '0500000000' 
WHERE ID = 1;

```

### Scenario 2: Using `ALTER` (Modifying Structure)
* **The Request:** The company decided to implement a "Remote Work" policy and wants to add a brand-new column to the table named `Remote_Work` to track who works from home.
* **The Reason:** This modification changes the **design and blueprint of the table** to accommodate new information for all employees moving forward.
* **The Code:**
 ```sql
  ALTER TABLE Employees 
  ADD Remote_Work BOOLEAN;

```

---

## Summary Comparison Table

| Feature | `UPDATE` | `ALTER` |
| --- | --- | --- |
| **What does it modify?** | Data and content inside the rows. | Structure and blueprint of the table and columns. |
| **Scope of Impact** | Affects one or multiple specific rows based on a condition. | Affects the entire table and all current and future rows. |
| **Associated Keywords** | Always used with `SET` and usually with `WHERE`. | Used with keywords like `ADD`, `DROP`, `MODIFY`, or `RENAME`. |
| **The Danger Zone** | Forgetting the `WHERE` clause (which updates all data accidentally). | Accidentally dropping a column (`DROP`), which permanently deletes all data in that column. |
