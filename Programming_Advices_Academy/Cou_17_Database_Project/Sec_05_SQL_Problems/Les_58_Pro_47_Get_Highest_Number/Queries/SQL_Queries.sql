

-- Get the highest number of models manufactured

--------------------------------------------------------

SELECT MAX(NumberOfModels) AS MAXNumberOfModels
FROM
(
	SELECT Makes.Make, COUNT(*) AS NumberOfModels
	FROM Makes
	INNER JOIN MakeModels
	ON Makes.MakeID = MakeModels.MakeID
	GROUP BY Makes.Make
) R1
