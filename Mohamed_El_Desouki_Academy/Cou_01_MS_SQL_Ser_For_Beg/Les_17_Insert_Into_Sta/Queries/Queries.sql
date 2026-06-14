USE BikeStoreDB;
GO

INSERT INTO production.categories (category_name)
VALUES ('weels');

SELECT * FROM production.categories;

--------------------------------------------------------------------

INSERT INTO sales.customers (first_name, last_name, email)
VALUES ('kifah', 'saloum', 'kifah@saloum.com');

SELECT * FROM sales.customers;


INSERT INTO sales.customers (first_name, last_name, email)
VALUES ('ashraf', 'koraone', 'ashraf@koraone.com'),
	   ('omar', 'koraone', 'omar@koraone.com');

SELECT * FROM sales.customers;

--------------------------------------------------------------------

INSERT INTO sales.stores (store_name, city, phone)
OUTPUT inserted.store_id, inserted.store_name, inserted.city, inserted.phone
VALUES ('rami_market', 'shahba', '123456789');

INSERT INTO sales.stores (store_name, city, phone)
OUTPUT inserted.store_id, inserted.store_name, inserted.city, inserted.phone
VALUES ('melad_market', 'shahba', '001122334455'),
		('fozat_market', 'shahba', '111222333');

--------------------------------------------------------------------

