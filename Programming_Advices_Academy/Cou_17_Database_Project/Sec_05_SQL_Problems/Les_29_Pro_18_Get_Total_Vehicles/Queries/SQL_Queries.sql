

-- Get total vehicles per DriveTypeName Per Make and order them per make asc then per total Desc.

--------------------------------------------------------

select distinct Makes.Make, DriveTypes.DriveTypeName, count(*) as Total
from DriveTypes
inner join VehicleDetails on DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
group by makes.Make, DriveTypes.DriveTypeName
order by Make asc, Total desc
