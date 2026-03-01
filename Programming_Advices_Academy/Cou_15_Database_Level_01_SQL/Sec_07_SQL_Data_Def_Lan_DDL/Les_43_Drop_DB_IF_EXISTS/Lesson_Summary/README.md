## Lesson Summary.

---

#### Drop DATABASE IF EXISTS

If there is no database with the same name, SQL will throw an error while dropping a database.

In such situations, we can use the the following code to drop a database only if there is existing database with the same name. For example,

```sql
 IF EXISTS(SELECT * FROM sys.databases WHERE name = 'koko')
  BEGIN
    Drop DATABASE koko;
  END
```

Here, the code drops a database named koko only if there is an existing database with the same name.