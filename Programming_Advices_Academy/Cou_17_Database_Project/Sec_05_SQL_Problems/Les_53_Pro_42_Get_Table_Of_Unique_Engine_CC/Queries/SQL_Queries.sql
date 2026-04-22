

-- Get a table of unique Engine_CC and calculate tax per Engine CC

--------------------------------------------------------

SELECT Engine_CC,
CASE
	WHEN Engine_CC BETWEEN 0 and 1000 THEN 100
	WHEN Engine_CC BETWEEN 1001 and 2000 THEN 200
	WHEN Engine_CC BETWEEN 2001 and 4000 THEN 300
	WHEN Engine_CC BETWEEN 4001 and 6000 THEN 400
	WHEN Engine_CC BETWEEN 6001 and 8000 THEN 500
	WHEN Engine_CC > 8000 THEN 600
	ELSE 0
END AS Tax
FROM (
	SELECT DISTINCT VehicleDetails.Engine_CC FROM VehicleDetails
) R1
ORDER BY Engine_CC
