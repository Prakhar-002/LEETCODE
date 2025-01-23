--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1517

SELECT *  -- Selects all columns from the Users table
FROM Users  -- From the Users table
WHERE mail REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode[.]com$'  -- Filters records where the mail column matches the given regular expression pattern
