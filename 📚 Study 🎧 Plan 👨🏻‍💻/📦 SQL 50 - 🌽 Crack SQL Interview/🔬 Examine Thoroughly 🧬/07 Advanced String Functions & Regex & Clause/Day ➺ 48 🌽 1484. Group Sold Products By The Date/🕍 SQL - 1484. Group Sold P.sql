--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1484

SELECT sell_date,  -- Selects the sell_date from the Activities table
      COUNT(DISTINCT product) AS num_sold,  -- Counts the distinct products sold, renamed as 'num_sold'
      GROUP_CONCAT(DISTINCT product ORDER BY product separator ',') AS products  -- Concatenates distinct products sold on each date, ordered by product, separated by commas
FROM Activities  -- From the Activities table
GROUP BY sell_date  -- Groups the results by sell_date
ORDER BY sell_date  -- Orders the results by sell_date in ascending order
