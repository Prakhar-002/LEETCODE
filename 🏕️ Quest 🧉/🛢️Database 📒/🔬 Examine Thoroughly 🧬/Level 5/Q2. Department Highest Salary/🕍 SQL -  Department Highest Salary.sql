-- Select department name, employee name, and salary
SELECT d.name AS Department, 
      e.name AS Employee, 
      e.salary AS Salary
FROM Employee e
-- Join with Department table to get department names
JOIN Department d ON e.departmentId = d.id
-- Filter to include only employees who have the maximum salary in their department
WHERE e.salary = (
      SELECT MAX(salary)
      FROM Employee
      WHERE departmentId = e.departmentId
);
