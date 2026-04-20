

-- Get all Makes that manufactures DriveTypeName = FWD.

--------------------------------------------------------

-- select * from VehicleDetails


--SELECT DISTINCT Makes.Make, DriveTypes.DriveTypeName
--FROM Makes
--INNER JOIN VehicleDetails ON Makes.MakeID = VehicleDetails.MakeID
--INNER JOIN DriveTypes ON VehicleDetails.DriveTypeID = DriveTypes.DriveTypeID
--WHERE DriveTypes.DriveTypeName = N'FWD';


SELECT distinct Makes.Make, DriveTypes.DriveTypeName
FROM DriveTypes
INNER JOIN VehicleDetails ON DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
Where DriveTypes.DriveTypeName ='FWD'