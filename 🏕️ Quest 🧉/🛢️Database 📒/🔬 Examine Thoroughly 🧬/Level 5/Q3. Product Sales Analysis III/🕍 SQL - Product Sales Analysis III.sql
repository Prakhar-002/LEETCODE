-- Select product_id, year (aliased as first_year), quantity, and price
SELECT
      product_id,
      year AS first_year,
      quantity,
      price
FROM sales
-- Filter rows where (product_id, year) matches the earliest year each product was sold
WHERE (product_id, year) IN (
      -- Subquery finds the earliest year per product
      SELECT product_id, MIN(year)
      FROM sales
      GROUP BY product_id
);
