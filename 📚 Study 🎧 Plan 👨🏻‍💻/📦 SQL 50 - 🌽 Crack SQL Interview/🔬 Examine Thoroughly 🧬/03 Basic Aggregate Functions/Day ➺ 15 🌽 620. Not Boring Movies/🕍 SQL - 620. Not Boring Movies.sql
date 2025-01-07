--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 620

SELECT * FROM cinema 
WHERE id % 2 != 0
AND description != 'boring'
ORDER BY rating DESC