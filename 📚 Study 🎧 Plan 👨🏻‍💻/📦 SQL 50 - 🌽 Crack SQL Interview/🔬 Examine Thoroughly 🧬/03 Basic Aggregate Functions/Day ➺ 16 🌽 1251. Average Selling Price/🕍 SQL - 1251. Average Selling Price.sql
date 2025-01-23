--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1251

SELECT p.product_id,  -- Selects the product_id from the Prices table
       IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units), 2), 0) AS average_price  -- Calculates the weighted average price, rounded to 2 decimal places, and replaces NULL with 0
FROM Prices p  -- From the Prices table (alias 'p')
LEFT JOIN UnitsSold u  -- Left join with the UnitsSold table (alias 'u')
      ON p.product_id = u.product_id  -- Join condition: matches product_id from both tables
      AND u.purchase_date BETWEEN p.start_date AND p.end_date  -- Filters for rows where the purchase_date is within the price range
GROUP BY p.product_id  -- Groups the results by product_id to calculate the average price for each product
