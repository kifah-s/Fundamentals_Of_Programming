

-- Get MakeID, Make, SubModelName for all vehicles that have SubModelName 'Elite'.

--------------------------------------------------------


select distinct VehicleDetails.MakeID, Makes.Make, SubModels.SubModelName
from VehicleDetails
inner join SubModels on VehicleDetails.SubModelID = SubModels.SubModelID
inner join Makes on VehicleDetails.MakeID = Makes.MakeID
where SubModelName='Elite'