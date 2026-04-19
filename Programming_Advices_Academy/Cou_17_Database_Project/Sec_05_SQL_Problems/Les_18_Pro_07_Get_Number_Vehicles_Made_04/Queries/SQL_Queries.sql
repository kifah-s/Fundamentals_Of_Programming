

-- Get number of vehicles made between 1950 and 2000 per make and add total vehicles column beside it, then calculate it's percentage.

--------------------------------------------------------

select *, cast(NumberOfVehicles as float) / cast(TotalVehicles as float) as Perc from
(
select Makes.Make,
count (*) as NumberOfVehicles,
(select count(*) from VehicleDetails) as TotalVehicles
from VehicleDetails
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
where (VehicleDetails.Year between 1950 and 2000)
group by Makes.Make
) R1
order by NumberOfVehicles desc
