-- Select the 'name' column from the Customer table
SELECT name 
FROM Customer
-- Filter to include customers whose referee_id is not 2
-- or customers who do not have any referee assigned (NULL value)
WHERE referee_id != 2
OR referee_id IS NULL;