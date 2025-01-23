--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1045 

SELECT customer_id  -- Selects the customer_id from the Customer table
FROM Customer  -- From the Customer table
GROUP BY customer_id  -- Groups the results by customer_id
HAVING COUNT(DISTINCT product_key) = (  -- Filters for customers who have bought all distinct products
      SELECT COUNT(product_key)  -- Selects the total number of distinct products from the Product table
      FROM Product  -- From the Product table
)  
