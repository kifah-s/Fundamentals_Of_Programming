

-- Get total vehicles per DriveTypeName Per Make then filter only results with total > 10,000.

--------------------------------------------------------

select distinct Makes.Make, DriveTypes.DriveTypeName, count(*) as Total
from DriveTypes
inner join VehicleDetails on DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
group by makes.Make, DriveTypes.DriveTypeName
having count(*) > 10000
order by Make asc, Total desc
