An **ALIAS** in SQL databases simply means a **"nickname"** or a **"temporary name."**

It is a tool we use to assign a temporary name to either a **column** or a **table** for the duration of the query execution. This alias does not change anything in the actual database; it only affects how the results are displayed to you.

We use the keyword **`AS`** to create an alias.

---

### Types of Aliases and Their Uses:

#### 1. Column Alias

We use this to make column names in the final output clearer, or to give a readable name to the results of mathematical operations and expressions.

* **Without an Alias:**

```sql
SELECT Name, Amount * 0.15 FROM Orders;

```

*The result will display a messy header like `Amount * 0.15` or `No column name`.*

* **With an Alias:**

```sql
SELECT Name, Amount * 0.15 AS Tax FROM Orders;

```

*Now, the output is displayed under a clean, organized column header called **Tax**.*

---

#### 2. Table Alias

We use this to shorten long table names. It is incredibly useful and convenient when performing a **JOIN**, as it drastically reduces the amount of code you have to write.

Remember the query we wrote earlier? It looked like this:

```sql
SELECT Customers.Name, Orders.Amount
FROM Customers
INNER JOIN Orders ON Customers.CustomerID = Orders.CustomerID;

```

By using a **Table Alias**, we can nickname the `Customers` table as `C` and the `Orders` table as `O`. The code becomes:

```sql
SELECT C.Name, O.Amount
FROM Customers AS C
INNER JOIN Orders AS O ON C.CustomerID = O.CustomerID;

```

*(Notice how much shorter and easier to read the code becomes!)*

---

### Important Tips:

* **Optional Keyword:** The `AS` keyword is optional in most database systems. You can simply write `FROM Customers C` with a space, and the system will understand it's an alias. However, using `AS` makes your code much more readable.
* **Handling Spaces:** If you want your alias to contain spaces (e.g., `Total Amount`), you must enclose it in quotes:
```sql
SELECT Amount AS "Total Amount" FROM Orders;

```