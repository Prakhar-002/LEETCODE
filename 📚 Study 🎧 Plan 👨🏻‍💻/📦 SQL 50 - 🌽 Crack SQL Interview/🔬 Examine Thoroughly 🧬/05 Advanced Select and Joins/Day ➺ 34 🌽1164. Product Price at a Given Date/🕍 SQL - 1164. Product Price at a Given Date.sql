--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1164 

SELECT product_id, new_price AS price  -- Selects the product_id and new_price (renamed as price) from Products table
FROM Products  -- From the Products table
WHERE (product_id, change_date) IN  -- Filters for the rows where the combination of product_id and change_date matches the result of the subquery
(
      SELECT product_id, MAX(change_date)  -- Selects the product_id and the latest change_date (MAX) for each product
      FROM Products  -- From the Products table
      WHERE change_date <= '2019-08-16'  -- Filters for rows where change_date is on or before '2019-08-16'
      GROUP BY product_id  -- Groups the results by product_id to get the latest change_date for each product
)

UNION  -- Combines the two result sets while removing duplicates

SELECT product_id, 10 AS price  -- Selects the product_id and assigns a fixed price of 10 for products that don't have a change before '2019-08-16'
FROM Products  -- From the Products table
WHERE (product_id) NOT IN  -- Filters for products where the product_id is not present in the result of the subquery
(
      SELECT product_id  -- Selects the product_id from Products table
      FROM Products  -- From the Products table
      WHERE change_date <= '2019-08-16'  -- Filters for rows where change_date is on or before '2019-08-16'
      GROUP BY product_id  -- Groups the results by product_id
)
