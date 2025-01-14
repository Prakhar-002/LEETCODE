--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1327

SELECT  p.product_name, SUM(o.unit) AS unit
FROM Products p
LEFT JOIN Orders o
ON p.product_id = o.product_id
WHERE EXTRACT(year_month FROM o.order_date) = 202002
GROUP BY o.product_id
HAVING SUM(o.unit) >= 100