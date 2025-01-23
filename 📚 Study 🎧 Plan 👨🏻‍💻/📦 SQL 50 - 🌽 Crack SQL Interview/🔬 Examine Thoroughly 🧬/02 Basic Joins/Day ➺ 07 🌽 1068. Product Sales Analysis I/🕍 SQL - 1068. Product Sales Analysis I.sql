--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1068

SELECT product_name, year, price  -- Selects product_name, year, and price columns
FROM sales s  -- From the sales table (alias 's')
JOIN product p  -- Inner join with the product table (alias 'p')
      ON p.product_id = s.product_id  -- Join condition: matches product_id from both tables
