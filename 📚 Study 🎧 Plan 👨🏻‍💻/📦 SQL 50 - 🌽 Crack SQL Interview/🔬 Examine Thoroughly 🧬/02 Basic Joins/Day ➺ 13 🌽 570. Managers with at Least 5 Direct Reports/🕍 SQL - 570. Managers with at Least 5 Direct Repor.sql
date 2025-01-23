--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 570 

SELECT e1.name  -- Selects the name of the employee (e1) who manages 5 or more employees
FROM employee e1  -- From the employee table (alias 'e1') representing managers
JOIN employee e2  -- Inner join with another instance of the employee table (alias 'e2') representing employees
      ON e1.id = e2.managerId  -- Join condition: matches e1's id with e2's managerId
GROUP BY e2.managerId  -- Groups the results by managerId to count how many employees each manager has
HAVING COUNT(e2.managerId) >= 5  -- Filters for managers who have 5 or more employees
