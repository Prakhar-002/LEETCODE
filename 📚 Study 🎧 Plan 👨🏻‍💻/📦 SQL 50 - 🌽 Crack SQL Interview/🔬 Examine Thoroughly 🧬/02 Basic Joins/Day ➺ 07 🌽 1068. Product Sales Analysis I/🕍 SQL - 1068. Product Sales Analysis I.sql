--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1068

SELECT product_name, year, price
FROM sales s
JOIN product p
on p.product_id = s.product_id 
