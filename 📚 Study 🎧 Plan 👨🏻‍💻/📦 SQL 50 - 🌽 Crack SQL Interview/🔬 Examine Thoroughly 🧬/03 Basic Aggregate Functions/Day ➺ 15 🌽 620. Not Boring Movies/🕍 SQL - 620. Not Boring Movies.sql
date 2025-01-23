--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 620

SELECT *  -- Selects all columns from the cinema table
FROM cinema  -- From the cinema table
WHERE id % 2 != 0  -- Filters for rows where the id is an odd number (id modulo 2 is not equal to 0)
      AND description != 'boring'  -- Filters out rows where the description is 'boring'
ORDER BY rating DESC  -- Orders the results by rating in descending order
