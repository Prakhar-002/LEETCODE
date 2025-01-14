--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1789

SELECT  employee_id, department_id
FROM Employee 
WHERE primary_flag = 'Y'
GROUP BY employee_id

UNION 

SELECT  employee_id, department_id
FROM Employee 
GROUP BY employee_id
HAVING COUNT(employee_id) = 1