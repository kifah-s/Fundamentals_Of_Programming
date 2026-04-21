

-- Get all vehicles that their body is 'Sport Utility' and Year > 2020

--------------------------------------------------------

select Bodies.BodyName, VehicleDetails.*
from VehicleDetails
inner join Bodies on VehicleDetails.BodyID = Bodies.BodyID
where (BodyName = 'Sport Utility') and (Year > 2020)