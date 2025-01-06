--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 577

SELECT  e.name, b.bonus 
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
or b.bonus IS NULL