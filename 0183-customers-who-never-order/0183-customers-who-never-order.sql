# Write your MySQL query statement below
select name as Customers
from customers c
left join Orders o
on c.id=o.customerid
where o.customerid is null ;