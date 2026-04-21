

-- Get all Vehicle_Display_Name, year and add extra column to calculate the age of the car then sort the results by age desc.

--------------------------------------------------------

--select distinct VehicleDetails.Year from VehicleDetails



--select VehicleDetails.Vehicle_Display_Name, VehicleDetails.Year,
--case  VehicleDetails.Year
--	when Year then 2026 - Year
--	else 'Unknow'
--	end as Age_Of_Car
--from VehicleDetails
--Order by Age_Of_Car Desc



--select VehicleDetails.Vehicle_Display_Name, VehicleDetails.Year,
--case  VehicleDetails.Year
--	when Year then 2026 - Year
--	end as Age_Of_Car
--from VehicleDetails
--Order by Age_Of_Car Desc



--select
--	VehicleDetails.Vehicle_Display_Name,
--	VehicleDetails.Year,
--	Age = YEAR(GetDate()) - VehicleDetails.year
--from VehicleDetails
--Order by Age Desc




--select
--	VehicleDetails.Vehicle_Display_Name,
--	VehicleDetails.Year,
--	YEAR(GetDate()) - VehicleDetails.year as Age
--from VehicleDetails
--Order by Age Desc



select
	VehicleDetails.Vehicle_Display_Name,
	VehicleDetails.Year,
	2026 - VehicleDetails.year as Age
from VehicleDetails
Order by Age Desc