

--ALTER TABLE OldTableName
-- RENAME TO NewTableName;

exec sp_rename 'old_table_name', 'new_table_name';