--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 595

SELECT name, population, area  -- Selects the name, population, and area columns
FROM World  -- From the World table
WHERE area >= 3000000  -- Filters for countries with an area of 3 million or more
      OR population >= 25000000  -- Includes countries with a population of 25 million or more
