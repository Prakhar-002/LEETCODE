--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 176

SELECT MAX(salary) AS SecondHighestSalary 
FROM Employee
WHERE salary NOT IN (SELECT MAX(salary) FROM Employee)