

-- Get All Makes that have manufactured more than 12000 Vehicles in years 1950 to 2000.

--------------------------------------------------------

select Makes.Make, count(*) as NumberOfVehicles
from VehicleDetails
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
where (VehicleDetails.Year between 1950 and 2000)
group by Makes.Make
having count(*) > 12000
order by NumberOfVehicles desc

--------------------------------------------------------

select * from
(
	select Makes.Make, count (*) as NumberOfVehicles
	from VehicleDetails
	inner join Makes on VehicleDetails.MakeID = Makes.MakeID
	where (VehicleDetails.Year between 1950 and 2000)
	group by Makes.Make
) R1 where R1.NumberOfVehicles > 12000
order by R1.NumberOfVehicles desc
