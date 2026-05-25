The concept of **`INSERT INTO`** in databases is simply the command responsible for **adding new data (records)** into an existing table.

If you imagine a table as an empty Excel spreadsheet with defined columns (such as: Name, Age, Address), the `INSERT INTO` statement acts as the pen you use to write an entirely new row into that spreadsheet.

---

### How Does It Work? (The Syntax)

There are two primary ways to write this command, depending on how you want to insert the data:

#### Method 1: Specifying Both Columns and Values (The Best and Safest Practice)

In this method, you explicitly specify the names of the columns you want to fill, and then provide the corresponding values in the exact same order.

```sql
INSERT INTO table_name (column1, column2, column3)
VALUES (value1, value2, value3);

```

* **Practical Example:** If we have a students table named `Students`:

```sql
INSERT INTO Students (StudentName, Age, Major)
VALUES ('Ahmad Mohammad', 22, 'Computer Science');

```

*Here, the system inserts "Ahmad Mohammad" into the `StudentName` column, the number 22 into the `Age` column, and so on.*

#### Method 2: Inserting Values Directly (Without Specifying Column Names)

You can shorten the query by omitting the column names, but under one strict condition: **you must provide values for all columns in the exact sequential order they were created in the database table.**

```sql
INSERT INTO table_name
VALUES (value1, value2, value3);

```

* **Practical Example:**

```sql
INSERT INTO Students
VALUES (101, 'Sara Ahmad', 20, 'Data Science');

```

---

### ⚠️ Golden Rules to Keep in Mind When Using `INSERT INTO`:

1. **Data Types:**
* If the value is **text/string** (like names and emails) or a **date**, it must always be enclosed in single quotes `' '` (e.g., `'Ahmed'`).
* If the value is **numeric** (like age or salary), it is written directly without quotes (e.g., `25`).


2. **Matching and Ordering:**
The number of values in the `VALUES` clause must perfectly match the number of columns specified in the `INSERT INTO` clause, otherwise, the database will throw an error.
3. **Automatic Columns (Identity / Auto-Increment):**
If the table has an ID column that automatically increments itself (1, 2, 3...), **do not** include it or provide a value for it in your `INSERT` statement. The database system will automatically generate and handle that value for you.