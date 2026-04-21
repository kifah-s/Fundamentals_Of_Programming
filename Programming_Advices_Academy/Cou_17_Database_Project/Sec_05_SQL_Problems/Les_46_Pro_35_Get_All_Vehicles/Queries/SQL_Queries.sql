

-- Get all vehicles that have the Maximum Engine_CC

--------------------------------------------------------

select VehicleDetails.Vehicle_Display_Name
from VehicleDetails
where VehicleDetails.Engine_CC =
(
	select max(VehicleDetails.Engine_CC)
	from VehicleDetails
)
