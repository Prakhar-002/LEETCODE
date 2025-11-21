--! https://github.com/Prakhar-002/LEETCODE

SELECT employee_id  -- Selects the employee_id from the Employees table
FROM Employees  -- From the Employees table
WHERE salary < 30000  -- Filters for employees whose salary is less than 30,000
AND manager_id NOT IN (  -- Ensures the manager_id is not one of the employee_ids from the Employees table
      SELECT employee_id  -- Selects the employee_id from the Employees table (this subquery returns employee IDs of managers)
      FROM Employees  -- From the Employees table
)  
ORDER BY employee_id  -- Orders the result by employee_id in ascending order