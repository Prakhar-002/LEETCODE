--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1378

SELECT eUNI.unique_id, emp.name  -- Selects unique_id from EmployeeUNI and name from Employees
FROM Employees emp  -- From the Employees table (alias 'emp')
LEFT JOIN EmployeeUNI eUNI  -- Left join with the EmployeeUNI table (alias 'eUNI')
      ON emp.id = eUNI.id  -- Join condition: matches emp.id with eUNI.id
