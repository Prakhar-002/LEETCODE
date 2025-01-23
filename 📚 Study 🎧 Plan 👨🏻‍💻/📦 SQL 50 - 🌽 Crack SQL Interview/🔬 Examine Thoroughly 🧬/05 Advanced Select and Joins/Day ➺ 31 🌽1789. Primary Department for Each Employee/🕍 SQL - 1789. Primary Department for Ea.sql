--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1789

SELECT employee_id, department_id  -- Selects the employee_id and department_id from the Employee table
FROM Employee  -- From the Employee table
WHERE primary_flag = 'Y'  -- Filters for rows where the primary_flag is 'Y'
GROUP BY employee_id  -- Groups the results by employee_id

UNION  -- Combines the two result sets while removing duplicates

SELECT employee_id, department_id  -- Selects the employee_id and department_id from the Employee table
FROM Employee  -- From the Employee table
GROUP BY employee_id  -- Groups the results by employee_id
HAVING COUNT(employee_id) = 1  -- Filters to include only those employee_id values that appear exactly once in the table
