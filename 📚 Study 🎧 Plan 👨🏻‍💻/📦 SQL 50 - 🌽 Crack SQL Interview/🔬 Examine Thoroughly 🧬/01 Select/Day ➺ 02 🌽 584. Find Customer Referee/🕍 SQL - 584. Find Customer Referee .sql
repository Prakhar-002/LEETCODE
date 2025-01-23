--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 584 

SELECT name  -- Selects the name column
FROM Customer  -- From the Customer table
WHERE referee_id != 2  -- Excludes customers with referee_id equal to 2
      OR referee_id IS NULL  -- Includes customers with no referee_id (NULL)
