-- Select the name of employee from the alias e2 (the employee who is a manager to e1)
SELECT e2.name as Employee
-- From the employee table aliased as e1 (representing managers)
FROM employee e1
-- Perform an INNER JOIN with the employee table aliased as e2 (representing employees)
INNER JOIN employee e2 ON e1.id = e2.managerID
-- Filter the results to only include rows where the manager's salary (e1.salary)
-- is less than the salary of the employee they manage (e2.salary)
WHERE e1.salary < e2.salary;