-- Select all columns from the cinema table
SELECT *
FROM cinema
-- Filter rows where the id is an odd number (id % 2 != 0)
WHERE id % 2 != 0
-- And the description is not equal to 'boring'
AND description != 'boring'
-- Order the results by the rating column in descending order (highest rating first)
ORDER BY rating DESC;