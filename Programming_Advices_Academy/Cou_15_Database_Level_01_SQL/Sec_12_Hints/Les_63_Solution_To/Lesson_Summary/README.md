## Lesson Summary.

---

#### Solution To: "Saving changes is not permitted" error:

If you encounter the "Saving changes is not permitted" error in SQL Server when attempting to modify a table that requires re-creation, you can change a setting in SQL Server Management Studio (SSMS) to allow saving changes that require table re-creation. Here's how you can do it:

1. Open SQL Server Management Studio.

2. Go to the "Tools" menu and select "Options."

3. In the Options window, navigate to "Designers" > "Table and Database Designers."

4. Uncheck the option "Prevent saving changes that require table re-creation."

5. Click "OK" to save the changes.

After making this configuration change, you should be able to modify and save changes to your tables without encountering the "Saving changes is not permitted" error. However, keep in mind that making significant changes to a table's structure can have implications on existing data and may require careful consideration and backup procedures to avoid data loss or inconsistencies. Exercise caution when making structural changes to production databases.