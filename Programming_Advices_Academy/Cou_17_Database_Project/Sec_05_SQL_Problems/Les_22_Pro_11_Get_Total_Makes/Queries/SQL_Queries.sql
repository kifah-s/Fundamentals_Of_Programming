

-- Get Total Makes that runs with GAS.

--------------------------------------------------------

--select distinct Makes.Make, FuelTypes.FuelTypeName
--from VehicleDetails
--inner join FuelTypes
--on VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
--inner join Makes
--on VehicleDetails.MakeID = Makes.MakeID
--where FuelTypes.FuelTypeName = N'GAS';


select count(*) as TotalMakesRunsOnGas
from (
	select distinct Makes.Make, FuelTypes.FuelTypeName
	from VehicleDetails
	inner join FuelTypes
	on VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
	inner join Makes
	on VehicleDetails.MakeID = Makes.MakeID
	where FuelTypes.FuelTypeName = N'GAS'
) R1


--SELECT COUNT(DISTINCT Makes.MakeID) AS TotalMakesRunsOnGas
--FROM VehicleDetails
--INNER JOIN FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
--INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
--WHERE FuelTypes.FuelTypeName = N'GAS';