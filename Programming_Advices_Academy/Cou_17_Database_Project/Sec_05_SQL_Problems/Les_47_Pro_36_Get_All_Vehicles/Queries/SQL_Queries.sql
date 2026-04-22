

-- Get all vehicles that have Engin_CC below average

--------------------------------------------------------

select VehicleDetails.Vehicle_Display_Name from VehicleDetails
where VehicleDetails.Engine_CC <
(
	select avg(VehicleDetails.Engine_CC) as avg
	from VehicleDetails
)