In SQL, the **`LIKE`** operator is a smart tool used inside the `WHERE` clause to search for a **specific pattern** within a text column, rather than looking for an exact match.

Imagine you are searching your address book for a person whose full name you can't quite recall, but you remember it starts with "Ah" or ends with "deen". This is exactly where `LIKE` comes in handy.

To function properly, `LIKE` relies on two special characters known as **Wildcards**:

---

## 1. The Magic Wildcards

### A) The Percent Sign (`%`)

Represents **any number of characters** (zero, one, or multiple characters).

* **`'Ahmed%'`** ⬅️ Means: Any text that **starts with** "Ahmed" (e.g., Ahmed, Ahmedy, Ahmed Soliman).
* **`'%Ahmed'`** ⬅️ Means: Any text that **ends with** "Ahmed" (e.g., Mohamed Ahmed, Bilal Ahmed).
* **`'%Ahmed%'`** ⬅️ Means: The word "Ahmed" is present **anywhere** inside the text (at the beginning, middle, or end).

### B) The Underscore (`_`)

Represents **exactly one character** (no more, no less).

* **`'Ahm_'`** ⬅️ Looks for a 4-letter text starting with "Ahm" (e.g., Ahmed, Ahms).
* **`'___'`** ⬅️ Looks for any text that is exactly 3 characters long (e.g., Ali, Sam, Ben).

---

## 📑 Practical Examples

Let's assume we have an `Employees` table:

### Example 1: Finding emails ending with a specific domain

You want to find all employees who use a Gmail address:

```sql
SELECT * FROM Employees
WHERE email LIKE '%@gmail.com';

```

### Example 2: Searching for a part of a name

You remember there is an employee with the word "Sultan" in their name, but you don't recall if it's their first name or family name:

```sql
SELECT * FROM Employees
WHERE employee_name LIKE '%Sultan%';

```

### Example 3: Defining an exact number of characters

You want to find a product code that starts with the letter "A" followed by exactly two characters:

```sql
SELECT * FROM Products
WHERE product_code LIKE 'A__'; -- Letter A followed by two underscores

```

---

## 💡 Important Note: Case Sensitivity

* In systems like **MySQL** and **SQL Server**, the `LIKE` operator is usually **case-insensitive**, meaning searching for `'abc%'` will return both `ABC` and `abc`.
* In systems like **PostgreSQL**, `LIKE` is **case-sensitive**. If you want it to ignore the case there, you should use the **`ILIKE`** operator instead.