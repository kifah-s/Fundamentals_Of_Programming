

-- Get Number of Models Per Make

--------------------------------------------------------

SELECT Makes.Make, COUNT(*) AS NumbersOfModel
From Makes
INNER JOIN MakeModels
ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
ORDER BY NumbersOfModel DESC

