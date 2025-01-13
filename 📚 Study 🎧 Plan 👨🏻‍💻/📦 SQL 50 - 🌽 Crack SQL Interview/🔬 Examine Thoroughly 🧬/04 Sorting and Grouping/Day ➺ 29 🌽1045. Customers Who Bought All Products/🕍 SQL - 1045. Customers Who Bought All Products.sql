--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1045

SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(product_key) FROM Product)