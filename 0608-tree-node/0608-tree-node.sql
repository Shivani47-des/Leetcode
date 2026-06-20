# Write your MySQL query statement below
Select id, 
case  when p_id IS NULL Then 'Root'
when id in(select distinct p_id from Tree where p_id is Not NULL) Then 'Inner'
else 'Leaf'
End as type
from Tree;
