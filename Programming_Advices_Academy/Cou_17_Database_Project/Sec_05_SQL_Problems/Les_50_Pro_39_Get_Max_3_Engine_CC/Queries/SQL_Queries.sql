

-- Get the maximum 3 Engine CC

--------------------------------------------------------

SELECT DISTINCT TOP(3)VehicleDetails.Engine_CC FROM VehicleDetails
ORDER BY VehicleDetails.Engine_CC DESC