## Lesson Summary.

---

#### Rename a Table (Most Databases)

We can change the name of a table using the ALTER TABLE command with the RENAME clause. For example,

```sql
ALTER TABLE OldTableName
RENAME TO NewTableName;
```

---

#### Rename table (In SQL Server)

You can not use the ALTER TABLE statement in SQL Server to rename a table. However, you can use sp_rename, though Microsoft recommends that you drop and recreate the table so that scripts and stored procedures are not broken.

Syntax

The syntax to rename a table in SQL Server (Transact-SQL) is:

```sql
exec sp_rename 'old_table_name', 'new_table_name';
```