

-- Get Make and Total Number Of Doors Manufactured Per Make

--------------------------------------------------------

SELECT DISTINCT Makes.Make, SUM(VehicleDetails.NumDoors) AS TotalNumberOfDoors
FROM VehicleDetails
INNER JOIN Makes
ON VehicleDetails.MakeID = Makes.MakeID
GROUP BY Make
ORDER BY TotalNumberOfDoors DESC