--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1978

SELECT employee_id 
FROM Employees 
WHERE salary < 30000 
AND manager_id  NOT IN ( SELECT employee_id FROM  Employees )
ORDER BY employee_id