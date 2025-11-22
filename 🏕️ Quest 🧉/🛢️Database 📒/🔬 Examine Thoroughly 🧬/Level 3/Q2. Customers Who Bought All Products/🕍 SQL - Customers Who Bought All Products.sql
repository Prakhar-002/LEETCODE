-- Select customer IDs from the Customer table
SELECT customer_id
FROM Customer
-- Group results by each unique customer_id
GROUP BY customer_id
-- Filter groups to keep only those customers who have purchased all distinct products
HAVING COUNT(DISTINCT product_key) = (
      -- Subquery to count the total number of distinct products available in the Product table
      SELECT COUNT(product_key) FROM Product
);
