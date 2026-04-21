

-- Get Minimum Engine CC , Maximum Engine CC , and Average Engine CC of all Vehicles

--------------------------------------------------------


select
	min(VehicleDetails.Engine_CC) as Min,
	max(VehicleDetails.Engine_CC) as Max,
	avg(VehicleDetails.Engine_CC) as Avg
from VehicleDetails

