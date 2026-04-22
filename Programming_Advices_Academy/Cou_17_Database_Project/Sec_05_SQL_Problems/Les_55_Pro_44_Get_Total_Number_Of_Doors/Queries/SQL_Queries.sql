

-- Get Total Number Of Doors Manufactured by 'Ford'

--------------------------------------------------------

SELECT DISTINCT Makes.Make, SUM(VehicleDetails.NumDoors) AS TotalNumberOfDoors
FROM VehicleDetails
INNER JOIN Makes
ON VehicleDetails.MakeID = Makes.MakeID
GROUP BY Make
HAVING Make = 'Ford'