-- Select product name from Products table and sum of units ordered 
SELECT p.product_name, SUM(o.unit) AS unit
FROM Products p
      -- Perform a LEFT JOIN to get all products and their orders (if any)
      LEFT JOIN Orders o
      ON p.product_id = o.product_id
-- Filter to orders placed in February 2020 (format YYYYMM = 202002)
WHERE EXTRACT(year_month FROM o.order_date) = 202002
-- Group results by product ID (orders grouped by product)
GROUP BY o.product_id
-- Only keep products with total ordered units of 100 or more in that month
HAVING SUM(o.unit) >= 100;
