
-- select Make from Car_Details;


-- select distinct Make from Car_Details;


-- select distinct Make from Car_Details
-- order by Make Asc;


-- insert into Makes
-- select distinct Make from Car_Details
-- order by Make Asc;


-- select * from Makes;


-- update Car_Details
-- set MakeID = (select MakeID from Makes where Makes.MakeName = Car_Details.Make);


-- SELECT        Makes.MakeName, Car_Details.*
-- FROM            Car_Details INNER JOIN
--                          Makes ON Car_Details.MakeID = Makes.MakeID