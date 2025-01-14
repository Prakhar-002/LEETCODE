--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1667

SELECT user_id ,
CONCAT(UPPER(LEFT(name, 1)), LOWER(RIGHT(name, LENGTH(name) - 1))) AS name 
FROM Users 
ORDER BY user_id