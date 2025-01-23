--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1527

SELECT *  -- Selects all columns from the Patients table
FROM Patients  -- From the Patients table
WHERE conditions LIKE 'DIAB1%'  -- Filters records where conditions starts with 'DIAB1'
OR conditions LIKE '% DIAB1%'  -- Filters records where conditions contains ' DIAB1' (with a leading space)
