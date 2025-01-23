--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1070

SELECT 
      product_id,  -- Selects the product_id from the sales table
      year AS first_year,  -- Selects the year and renames it as 'first_year' (the first year of sale for each product)
      quantity,  -- Selects the quantity sold in that year
      price  -- Selects the price of the product in that year
FROM sales  -- From the sales table
WHERE ((product_id, year) IN  -- Filters for rows where the combination of product_id and year matches the first year for each product
(
SELECT 
      product_id,  -- Selects the product_id from the sales table
      MIN(year)  -- Selects the earliest (minimum) year for each product, representing the first year
FROM sales  -- From the sales table
GROUP BY product_id  -- Groups the results by product_id to get the first year for each product
)) 
