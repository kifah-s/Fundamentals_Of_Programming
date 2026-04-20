

-- Get percentage of vehicles that has no doors specified

--------------------------------------------------------

select
(

cast((select count(*) as TotalWithNoSpecifiedDoors
from VehicleDetails
where NumDoors is null) as float)

/

cast((select count(*) from VehicleDetails as TotalVehicles) as float)

) as PercOfNoSpecifiedDoors