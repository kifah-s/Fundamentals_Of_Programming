

-- Get the Lowest Manufacturers manufactured the lowest number of models

--------------------------------------------------------

SELECT Makes.Make, COUNT(*) AS NumberOfModels
FROM Makes
INNER JOIN MakeModels
ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
having COUNT(*) = (
	select MIN(NumberOfModels) as MinNumberOfModels
	from
	(
		SELECT MakeID, COUNT(*) AS NumberOfModels
		FROM MakeModels
		GROUP BY MakeID
		
	) R1
)