# Write your MySQL query statement below
select s.employee_id from Salaries s where not exists (select *from Employees e where e.employee_id = s.employee_id ) union
select e.employee_id from Employees e where not exists (select *from Salaries s where e.employee_id = s.employee_id )  order by employee_id;