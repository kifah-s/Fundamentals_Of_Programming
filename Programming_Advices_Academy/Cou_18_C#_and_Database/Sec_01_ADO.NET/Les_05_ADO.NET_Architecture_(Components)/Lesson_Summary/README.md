## Lesson Summary.

---

#### Components of ADO.NET
Components are designed for data manipulation and faster data access. Connection, Command, DataReader, DataAdapter, DataSet, and DataView are the components of ADO.NET that are used to perform database operations. ADO.NET has two main components that are used for accessing and manipulating data. They are as follows:

1. Data Provider  
and  
2. DataSet.

#### .NET Framework Data Providers Objects
Following are the core object of Data Providers.

- Connection: It is used to establish a connection to a specific data source.
- Command: It is used to execute queries to perform database operations.
- DataReader: It is used to read data from data source. The DbDataReader is a base class for all DataReader objects.
- DataAdapter: It populates a DataSet and resolves updates with the data source. The base class for all DataAdapter objects is the DbDataAdapter class.

#### .NET Framework Data Provider for SQL Server
Data provider for SQL Server is a lightweight component. It provides better performance because it directly access SQL Server without any middle connectivity layer. In early versions, it interacts with ODBC layer before connecting to the SQL Server that created performance issues.

The .NET Framework Data Provider for SQL Server classes is located in the System.Data.SqlClient namespace. We can include this namespace in our C# application by using the following syntax.

using System.Data.SqlClient;    

This namespace contains the following important classes.

- SqlConnection: It is used to create SQL Server connection. This class cannot be inherited.
- SqlCommand: It is used to execute database queries. This class cannot be inherited.
- SqlDataAdapter: It represents a set of data commands and a database connection that are used to fill the DataSet. This class cannot be inherited.
- SqlDataReader: It is used to read rows from a SQL Server database. This class cannot be inherited.
- SqlException: This class is used to throw SQL exceptions. It throws an exception when an error is occurred. This class cannot be inherited.