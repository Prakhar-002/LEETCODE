--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1378

SELECT eUNI.unique_id , emp.name
FROM Employees emp
LEFT JOIN EmployeeUNI eUNI
on emp.id = eUNI.id