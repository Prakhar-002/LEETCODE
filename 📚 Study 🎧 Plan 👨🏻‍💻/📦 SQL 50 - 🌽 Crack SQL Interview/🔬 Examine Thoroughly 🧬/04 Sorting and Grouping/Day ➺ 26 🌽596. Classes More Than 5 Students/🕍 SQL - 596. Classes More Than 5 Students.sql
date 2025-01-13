--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 596

SELECT class
FROM courses
GROUP BY class
HAVING COUNT(student) >= 5