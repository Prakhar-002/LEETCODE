--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1757

SELECT product_id  -- Selects the product_id column
FROM Products  -- From the Products table
WHERE low_fats = 'Y'  -- Filters for products that are low fat
      AND recyclable = 'Y'  -- Filters for products that are recyclable
