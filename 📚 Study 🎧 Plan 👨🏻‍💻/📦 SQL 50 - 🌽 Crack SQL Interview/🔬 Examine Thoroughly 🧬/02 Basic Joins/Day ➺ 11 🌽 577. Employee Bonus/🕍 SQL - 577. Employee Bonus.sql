--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 577

SELECT e.name, b.bonus  -- Selects the name from Employee and the bonus from Bonus
FROM Employee e  -- From the Employee table (alias 'e')
LEFT JOIN Bonus b  -- Left join with the Bonus table (alias 'b')
      ON e.empId = b.empId  -- Join condition: matches empId from both tables
WHERE b.bonus < 1000  -- Filters for rows where the bonus is less than 1000
      OR b.bonus IS NULL  -- Includes rows where no bonus is assigned (bonus is NULL)
