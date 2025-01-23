--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 185

SELECT Department, Employee, Salary  -- Selects the Department, Employee, and Salary from the inner query
FROM
(
      SELECT d.name AS Department,  -- Selects the department name and renames it as 'Department'
            e.name AS Employee,  -- Selects the employee name and renames it as 'Employee'
            e.salary AS Salary,  -- Selects the employee salary and renames it as 'Salary'
            DENSE_RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC) AS ranks  -- Calculates the dense rank within each department, ordered by salary in descending order
      FROM Employee e  -- From the Employee table (alias 'e')
      LEFT JOIN Department d  -- Left join with the Department table (alias 'd')
      ON e.departmentId = d.id  -- Join condition: matches departmentId from Employee with id from Department
) AS temp  -- Treats the result of the subquery as a temporary table (alias 'temp')
WHERE ranks <= 3  -- Filters the result to include only the top 3 employees with the highest salary in each department
