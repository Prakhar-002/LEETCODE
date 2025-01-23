--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 596

SELECT class  -- Selects the class from the courses table
FROM courses  -- From the courses table
GROUP BY class  -- Groups the results by class
HAVING COUNT(student) >= 5  -- Filters the groups to include only those with 5 or more students