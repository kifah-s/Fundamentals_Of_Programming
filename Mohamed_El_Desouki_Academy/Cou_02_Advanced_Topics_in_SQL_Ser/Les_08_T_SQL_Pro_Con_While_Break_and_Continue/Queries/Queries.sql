USE BikeStores;
GO

DECLARE @counter INT = 1;

WHILE @counter <= 5
BEGIN
    PRINT @counter;
    SET @counter = @counter + 1;
END


--------------------------------------------------------------


DECLARE @counter_2 INT = 0;

WHILE @counter_2 <= 5
BEGIN
    SET @counter_2 = @counter_2 + 1;
    IF @counter_2 = 4
        BREAK;
    PRINT @counter_2;
END


--------------------------------------------------------------


DECLARE @counter_3 INT = 0;

WHILE @counter_3 < 5
BEGIN
    SET @counter_3 = @counter_3 + 1;
    IF @counter_3 = 3
        CONTINUE;	
    PRINT @counter_3;
END
