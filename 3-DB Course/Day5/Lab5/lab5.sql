select * from sales.SalesOrderHeader


---------------------------------------------------------

--1. Display the SalesOrderID, ShipDate of the SalesOrderHearder table 
-- (Sales schema) to designate SalesOrders that occurred within the period ‘7/28/2002’ and ‘7/29/2014’

select SalesOrderID, ShipDate from sales.SalesOrderHeader
WHERE CAST(ShipDate AS DATETIME) between '2006-07-08' and '2008-08-07'

-------------------------------------------------------------

--2.	Display only Products(Production schema) with a StandardCost below $110.00 (show ProductID, Name only)

select ProductID, Name from Production.Product 
where Production.Product.StandardCost < 110.00


-----------------------------------------------------------------------

--3.	Display ProductID, Name if its weight is unknown

select ProductID, Name from Production.Product 
where Weight is null

-----------------------------------------------------------------------

--Display all Products with a Silver, Black, or Red Color

select * from Production.Product 
where Color in ('Black','Silver','Red ')

-----------------------------------------------------------------------

--5.	 Display any Product with a Name starting with the letter B

select * from Production.Product
where Name like 'B%'

-----------------------------------------------------------------------

--6.	Run the following Query

UPDATE Production.ProductDescription
SET Description = 'Chromoly steel_High of defects'
WHERE ProductDescriptionID = 3

select * from Production.ProductDescription
where Description like '%_%'

----------------------------------------------------------

--7.	Calculate sum of TotalDue for each OrderDate in Sales.SalesOrderHeader table for the period between  '7/1/2001' and '7/31/2014'


select sum(TotalDue) sum_Tdue from sales.SalesOrderHeader s
where  CAST(s.OrderDate as datetime) between '2001-7-1'  and '2014-7-31' 

----------------------------------------------------------------

--8.	 Display the Employees HireDate (note no repeated values are allowed)

select distinct HireDate from HumanResources.Employee

----------------------------------------------------------------

--9.	 Calculate the average of the unique ListPrices in the Product table

select avg(distinct ListPrice) from Production.Product

------------------------------------------------------------------

--10.	Display the Product Name and its ListPrice within the values of 100 and 120 the list should has the following format "The [product name] is only! [List price]" (the list will be sorted according to its ListPrice value)

select Name,ListPrice from Production.Product
where ListPrice between 100 and 120
order by ListPrice

-------------------------------------------------------------------------

--11 
--    a) Transfer the rowguid ,Name, SalesPersonID, Demographics from Sales.Store table  in a newly created table named [store_Archive]
--  Note: Check your database to see the new table and how many rows in it?


select rowguid, Name, SalesPersonID, Demographics
into store_Archive 
from Sales.Store

select * from store_archive

--b) Try the previous query but without transferring the data? 

select rowguid, Name, SalesPersonID, Demographics from Sales.Store


--------------------------------------------------------------------------


-- 12.	Using union statement, retrieve the today’s date in different styles

select CURRENT_TIMESTAMP
select getdate()
select cast(getdate() as date)
select cast(getdate() as datetime)
select cast(getdate() as datetimeoffset)



