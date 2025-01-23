--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 619

SELECT MAX(num) AS num  -- Selects the maximum value from the subquery's result, representing the largest distinct number
FROM 
      (SELECT num  -- Selects the num from the MyNumbers table
            FROM MyNumbers  -- From the MyNumbers table
            GROUP BY num  -- Groups the results by num
            HAVING COUNT(num) = 1) AS distinct_num  -- Filters to include only numbers that appear exactly once (distinct numbers)
