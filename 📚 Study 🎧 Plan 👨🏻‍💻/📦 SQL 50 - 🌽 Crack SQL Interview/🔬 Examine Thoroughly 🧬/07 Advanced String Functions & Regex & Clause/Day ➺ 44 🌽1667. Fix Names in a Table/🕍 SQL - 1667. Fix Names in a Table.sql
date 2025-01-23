--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1667

SELECT user_id,  -- Selects the user_id from the Users table
      CONCAT(  -- Concatenates the following components to format the name
            UPPER(LEFT(name, 1)),  -- Takes the first letter of the name and converts it to uppercase
            LOWER(RIGHT(name, LENGTH(name) - 1))  -- Takes the rest of the name (after the first letter) and converts it to lowercase
      ) AS name  -- Renames the result of the concatenation as 'name'
FROM Users  -- From the Users table
ORDER BY user_id  -- Orders the results by user_id in ascending order
