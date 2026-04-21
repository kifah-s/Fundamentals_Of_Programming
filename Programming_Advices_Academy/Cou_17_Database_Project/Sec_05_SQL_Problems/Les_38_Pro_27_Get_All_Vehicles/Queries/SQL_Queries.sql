

-- Get all vehicles that their Body is 'Coupe' or 'Hatchback' or 'Sedan'

--------------------------------------------------------

--select Bodies.BodyName, VehicleDetails.*
--from VehicleDetails
--inner join Bodies on VehicleDetails.BodyID = Bodies.BodyID
--where (BodyName = 'Coupe') or (BodyName = 'Hatchback') or (BodyName = 'Sedan')


select Bodies.BodyName, VehicleDetails.*
from VehicleDetails
inner join Bodies on VehicleDetails.BodyID = Bodies.BodyID
where BodyName in ('Coupe','Hatchback','Sedan')
