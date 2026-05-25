The **`ALTER`** statement in SQL means **"to modify"** or **"to change"**.

While the `CREATE` statement is used to build a structure (like creating a new table), the `ALTER` statement is used to **modify that structure after it has already been built**, without needing to delete and recreate it from scratch (which protects the existing data inside the table from being lost).

To put it simply: Imagine you built a house (a table), and after some time, you decided to add a new room, change the size of a window, or tear down a wall. This is exactly what `ALTER` does to databases.

---

## Most Common Uses of the `ALTER` Statement

`ALTER` is most frequently used with tables (`ALTER TABLE`), and it generally involves three main operations:

### 1. Adding a New Column (`ADD`)

If you have an employees table and suddenly decide to add a new column to store their "phone number":

```sql
ALTER TABLE employees
ADD phone_number VARCHAR(20);

```

### 2. Modifying an Existing Column (`ALTER COLUMN` / `MODIFY`)

If you have a column for a username with a maximum size of 50 characters, and you realize some names are longer and want to increase the limit to 100 characters:

```sql
ALTER TABLE employees
ALTER COLUMN username VARCHAR(100); 
-- Note: In some database systems like MySQL, you use MODIFY instead of ALTER COLUMN.

```

### 3. Deleting a Column You No Longer Need (`DROP COLUMN`)

If you decide to completely get rid of the "age" column from your table:

```sql
ALTER TABLE employees
DROP COLUMN age;

```

---

```
                  +-----------------------------------+
                  |            ALTER TABLE            |
                  +-----------------------------------+
                                    |
         +--------------------------+--------------------------+
         |                          |                          |
         v                          v                          v
     [  ADD  ]                 [  MODIFY  ]               [  DROP  ]
Adds a new column to       Changes the data type or    Deletes an existing column
an existing table.         size of an existing column. from the table completely.

```

## Quick Summary of the Big Three Structural Commands:

* **`CREATE`**: Builds a table from scratch.
* **`ALTER`**: Modifies the table structure (adds, changes, or drops columns).
* **`DROP`**: Deletes the entire table and all its data from the database.

> **Remember:** The `ALTER` command modifies the **structure and design** (columns), not the actual data itself (rows). If you want to change a specific employee's name or a product's price, you use the `UPDATE` command, not `ALTER`.