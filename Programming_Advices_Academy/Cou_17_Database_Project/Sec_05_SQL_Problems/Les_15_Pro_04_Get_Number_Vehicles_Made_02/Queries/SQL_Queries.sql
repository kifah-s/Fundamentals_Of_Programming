

-- Get number vehicles made between 1950 and 2000 per make and order them by Number Of Vehicles Descending.

--------------------------------------------------------

select Makes.Make, count (*) as NumberOfVehicles
from VehicleDetails
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
where (VehicleDetails.Year between 1950 and 2000)
group by Makes.Make
order by NumberOfVehicles desc;
