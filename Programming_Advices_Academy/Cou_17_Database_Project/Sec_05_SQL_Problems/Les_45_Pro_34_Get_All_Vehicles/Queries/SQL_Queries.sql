

-- Get all vehicles that have the minimum Engine_CC.

--------------------------------------------------------


select VehicleDetails.Vehicle_Display_Name
from VehicleDetails
where VehicleDetails.Engine_CC =
(
	select min(VehicleDetails.Engine_CC) as Min
	from VehicleDetails
)
