



select * from Employees
where ExitDate is null;


create view ActiveEmplooyes as
select * from Employees
where ExitDate is null;


select * from ActiveEmplooyes;


select * from ActiveEmplooyes where ID = 285;


create view ResignedEmplooyes as
select * from Employees
where ExitDate is not null;

select * from ResignedEmplooyes;

select ID, firstName, LastName, Gendor from Employees;


create view ShortDetailedEmplooyes as
select ID, firstName, LastName, Gendor from Employees;