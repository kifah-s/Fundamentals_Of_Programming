

-- Count Vehicles by make and order them by NumberOfVehicles from high to low.

--------------------------------------------------------

select Makes.Make, count (*) as NumberOfVehicles
from VehicleDetails
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
group by Makes.Make
order by NumberOfVehicles desc;
