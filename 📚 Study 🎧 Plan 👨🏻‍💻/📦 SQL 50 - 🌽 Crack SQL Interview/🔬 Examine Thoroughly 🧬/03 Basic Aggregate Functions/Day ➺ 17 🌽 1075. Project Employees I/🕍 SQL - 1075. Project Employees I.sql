--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1075 

SELECT p.project_id,  -- Selects the project_id from the Project table
      ROUND(AVG(e.experience_years), 2) AS average_years  -- Calculates the average experience years, rounded to 2 decimal places
FROM Project p  -- From the Project table (alias 'p')
LEFT JOIN Employee e  -- Left join with the Employee table (alias 'e')
      ON p.employee_id = e.employee_id  -- Join condition: matches employee_id from both tables
GROUP BY p.project_id  -- Groups the results by project_id to calculate the average years of experience for each project
