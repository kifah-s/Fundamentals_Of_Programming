

select X = 'yes'
where exists 
( 
select * from Orders
where customerID = 3 and Amount < 600
)


select * from Customers T1
where exists 
( 
select * from Orders
where customerID = T1.CustomerID and Amount < 600
)


--More optimized and faster
select * from Customers T1
where exists 
( 
select top 1 * from Orders
where customerID = T1.CustomerID and Amount < 600
)


--More optimized and faster
select * from Customers T1
where exists 
( 
select top 1 R = 'Y'  from Orders
where customerID = T1.CustomerID and Amount < 600
)