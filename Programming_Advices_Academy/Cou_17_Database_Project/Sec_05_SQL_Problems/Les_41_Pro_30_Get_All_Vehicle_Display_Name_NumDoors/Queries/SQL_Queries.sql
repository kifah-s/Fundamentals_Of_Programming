

-- Get all Vehicle_Display_Name, NumDoors and add extra column to describe number of doors by words, and if door is null display 'Not Set'

--------------------------------------------------------

--select distinct VehicleDetails.NumDoors from VehicleDetails


--select VehicleDetails.Vehicle_Display_Name, VehicleDetails.NumDoors,
--case  VehicleDetails.NumDoors
--	when 0 then 'Zero Doors'
--	when 1 then 'One Door'
--	when 2 then 'Two Doors'
--	when 3 then 'Three Doors'
--	when 4 then 'Foure Doors'
--	when 5 then 'Five Doors'
--	when 6 then 'Six Doors'
--	when 8 then 'Eight Doors'
--	when null then 'Not Set'
--	else 'Unknow'
--	end as NumbersOfDoors
--from VehicleDetails


select VehicleDetails.Vehicle_Display_Name, VehicleDetails.NumDoors,
case
	when VehicleDetails.NumDoors =  0 then 'Zero Doors'
	when VehicleDetails.NumDoors =  1 then 'One Door'
	when VehicleDetails.NumDoors =  2 then 'Two Doors'
	when VehicleDetails.NumDoors =  3 then 'Three Doors'
	when VehicleDetails.NumDoors =  4 then 'Foure Doors'
	when VehicleDetails.NumDoors =  5 then 'Five Doors'
	when VehicleDetails.NumDoors =  6 then 'Six Doors'
	when VehicleDetails.NumDoors =  8 then 'Eight Doors'
	when VehicleDetails.NumDoors is null then 'Not Set'
	else 'Unknow'
	end as NumbersOfDoors
from VehicleDetails