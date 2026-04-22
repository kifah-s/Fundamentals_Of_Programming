

-- Get total vehicles that have Engin_CC above average

--------------------------------------------------------

select count(*) as AboveAverage from VehicleDetails
where VehicleDetails.Engine_CC >
(
	select avg(VehicleDetails.Engine_CC) as avg
	from VehicleDetails
)



select count(*) as AboveAverage from
(
	select ID, VehicleDetails.Vehicle_Display_Name from VehicleDetails
	where Engine_CC > ( select  avg(Engine_CC) as MinEngineCC  from VehicleDetails )
) R1