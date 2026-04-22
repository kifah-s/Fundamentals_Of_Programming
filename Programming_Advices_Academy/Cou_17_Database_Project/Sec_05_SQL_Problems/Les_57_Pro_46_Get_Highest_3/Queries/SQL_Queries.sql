

-- Get the highest 3 manufacturers that make the highest number of models

--------------------------------------------------------

SELECT TOP 3 Makes.Make, COUNT(*) AS NumbersOfModel
From Makes
INNER JOIN MakeModels
ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
ORDER BY NumbersOfModel DESC

