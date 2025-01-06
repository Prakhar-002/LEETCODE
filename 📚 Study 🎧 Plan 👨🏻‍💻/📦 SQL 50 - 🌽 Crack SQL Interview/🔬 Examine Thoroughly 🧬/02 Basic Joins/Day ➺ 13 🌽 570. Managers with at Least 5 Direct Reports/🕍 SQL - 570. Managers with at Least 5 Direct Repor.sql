--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 570

SELECT e1.name
FROM employee e1
JOIN employee e2
ON e1.id = e2.managerId
GROUP BY e2.managerId
HAVING COUNT(e2.managerId) >= 5