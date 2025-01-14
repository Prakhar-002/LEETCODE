--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1484

SELECT sell_date , 
COUNT(DISTINCT product) AS num_sold ,
GROUP_CONCAT(DISTINCT product ORDER BY product separator ',') AS products 
FROM Activities 
GROUP BY sell_date
ORDER BY sell_date