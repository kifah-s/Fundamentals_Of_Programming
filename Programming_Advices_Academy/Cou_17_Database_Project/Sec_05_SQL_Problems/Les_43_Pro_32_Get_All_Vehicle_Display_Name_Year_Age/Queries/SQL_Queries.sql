

-- Get all Vehicle_Display_Name, year, Age for vehicles that their age between 15 and 25 years old.

--------------------------------------------------------

--select
--	VehicleDetails.Vehicle_Display_Name,
--	VehicleDetails.Year,
--	YEAR(GetDate()) - VehicleDetails.year as Age
--from VehicleDetails
--where YEAR(GetDate()) - VehicleDetails.year between 15 and 25


select * from
(
	select
		VehicleDetails.Vehicle_Display_Name,
		VehicleDetails.Year,
		YEAR(GetDate()) - VehicleDetails.year as Age
	from VehicleDetails
) R1
where Age between 15 and 25
