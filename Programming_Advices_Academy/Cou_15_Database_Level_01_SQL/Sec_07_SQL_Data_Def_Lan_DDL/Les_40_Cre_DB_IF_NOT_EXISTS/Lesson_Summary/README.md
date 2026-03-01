## Lesson Summary.

---

#### CREATE DATABASE IF NOT EXISTS

- If there is already a database with the same name, SQL will throw an error while creating a database.

- In such situations, we can use the the following code to create a database only if there is no existing database with the same name. For example,

```sql
 IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'koko')
  BEGIN
    CREATE DATABASE koko;
  END
 ```

Here, the code creates a database named koko only if there is no existing database with the same name.