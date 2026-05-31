The concept of **`DISTINCT`** (written in code as `SELECT DISTINCT`) in databases is a tool used to **eliminate duplicate data from your query results**.

In simple terms: when you request data from a column that contains repetitive values, `DISTINCT` filters those results to give you **only the unique values**, hiding any duplicates.

---

## How Does It Work?

The `DISTINCT` keyword is placed directly after `SELECT`. The system looks at the specified column, and even if a value repeats 100 times, it will display it to you **only once**.

---

## Practical Example

Let's assume we have a customer table containing their names and cities:

| Name | City |
| --- | --- |
| Mohammad | Riyadh |
| Sara | Jeddah |
| Khaled | Riyadh |
| Fatima | Dammam |
| Ahmad | Jeddah |

### 1. Regular Query (Without DISTINCT)

If we want to know which cities our customers come from using a standard query:

```sql
SELECT City FROM Customers;

```

**The result will be:** (Riyadh, Jeddah, Riyadh, Dammam, Jeddah). The cities appear repeatedly based on the number of customers.

### 2. Query Using `DISTINCT`

If you want a clean list of cities **without any duplicates** to see exactly which unique cities you have a presence in:

```sql
SELECT DISTINCT City FROM Customers;

```

**Expected Result:**

| City |
| --- |
| Riyadh |
| Jeddah |
| Dammam |

*(Notice that the system removed the duplicates and displayed each city exactly once).*

---

## Advanced Feature: DISTINCT with Multiple Columns

If you place `DISTINCT` before more than one column, the system does not look for duplicates based on a single column. Instead, it evaluates the **entire combination (the whole row)**.

**Example:**

```sql
SELECT DISTINCT City, Name FROM Customers;

```

In this case, "Riyadh" won't be removed just because it appeared twice, because the accompanying names are different ("Mohammad Riyadh" is unique compared to "Khaled Riyadh"). The row will only be removed if both the name and the city match another row identically.

---

## Common Use Case: DISTINCT with the `COUNT` Function

One of the most popular ways to use `DISTINCT` is to find the **number** of unique items.

If your manager asks: "How many different cities do we have customers in?"

```sql
SELECT COUNT(DISTINCT City) AS Unique_Cities_Count 
FROM Customers;

```

**Result:** `3` (because it counted only the unique cities, completely ignoring the duplicates).

---

> 💡 **Smart Note:** The `DISTINCT` keyword affects **all** columns that come after it in the `SELECT` clause. You cannot apply it to just one column and leave the rest unaffected in the same row.