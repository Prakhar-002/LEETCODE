--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 176

SELECT MAX(salary) AS SecondHighestSalary  -- Selects the maximum salary, renamed as 'SecondHighestSalary'
FROM Employee  -- From the Employee table
WHERE salary NOT IN (  -- Filters records where salary is not the maximum salary
      SELECT MAX(salary)  -- Selects the maximum salary from the Employee table (subquery to find the highest salary)
      FROM Employee  -- From the Employee table
)
