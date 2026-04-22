

-- Get all vehicles that has one of the Max 3 Engine CC

--------------------------------------------------------

SELECT Vehicle_Display_Name FROM VehicleDetails
WHERE Engine_CC IN
(
	SELECT DISTINCT TOP(3) VehicleDetails.Engine_CC
	FROM VehicleDetails
	ORDER BY VehicleDetails.Engine_CC DESC
)