--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1193

SELECT 
-- LEFT(trans_date , 7) AS month , (or)
DATE_FORMAT(trans_date, '%Y-%m') AS month ,
country, 
COUNT(id) AS trans_count ,
SUM(IF(state = 'approved', 1, 0)) AS approved_count,
SUM(amount) AS trans_total_amount ,
SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount
FROM Transactions 
GROUP BY month, country 