--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1731

SELECT e1.employee_id,  -- Selects the employee_id from the first instance of the Employees table (e1)
      e1.name,  -- Selects the name of the employee from the first instance of the Employees table (e1)
      COUNT(e2.reports_to) AS reports_count,  -- Counts the number of employees who report to this employee (e2)
      ROUND(AVG(e2.age)) AS average_age  -- Calculates the average age of employees who report to this employee (e2), rounded to the nearest integer
FROM Employees e1  -- From the Employees table (alias 'e1') representing managers
INNER JOIN Employees e2  -- Inner join with another instance of the Employees table (alias 'e2') representing subordinates
      ON e1.employee_id = e2.reports_to  -- Join condition: matches e1's employee_id with e2's reports_to field
GROUP BY e1.employee_id  -- Groups the results by e1's employee_id to calculate reports_count and average_age for each manager
ORDER BY e1.employee_id  -- Orders the results by employee_id in ascending order
