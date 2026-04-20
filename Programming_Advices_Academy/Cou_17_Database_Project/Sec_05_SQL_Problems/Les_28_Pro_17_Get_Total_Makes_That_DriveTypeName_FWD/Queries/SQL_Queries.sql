

-- Get total Makes that Mantufactures DriveTypeName = FWD.

--------------------------------------------------------

select count(*) as MakeWithFWD
from (
select distinct Makes.Make, DriveTypes.DriveTypeName
from DriveTypes
inner join VehicleDetails on DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
Where DriveTypes.DriveTypeName = 'FWD'
) R1;