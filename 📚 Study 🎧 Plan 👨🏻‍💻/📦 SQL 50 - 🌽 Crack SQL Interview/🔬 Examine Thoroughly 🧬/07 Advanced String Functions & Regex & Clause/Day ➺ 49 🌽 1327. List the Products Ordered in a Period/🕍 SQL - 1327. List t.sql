--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1327

SELECT p.product_name,  -- Selects the product_name from the Products table
      SUM(o.unit) AS unit  -- Sums the units from the Orders table, renamed as 'unit'
FROM Products p  -- From the Products table (alias 'p')
LEFT JOIN Orders o  -- Left join with the Orders table (alias 'o')
ON p.product_id = o.product_id  -- Join condition: matches product_id from Products with product_id from Orders
WHERE EXTRACT(year_month FROM o.order_date) = 202002  -- Filters records where the order_date is in February 2020
GROUP BY o.product_id  -- Groups the results by product_id from the Orders table
HAVING SUM(o.unit) >= 100  -- Filters the grouped results to only include products with a total unit sold >= 100
