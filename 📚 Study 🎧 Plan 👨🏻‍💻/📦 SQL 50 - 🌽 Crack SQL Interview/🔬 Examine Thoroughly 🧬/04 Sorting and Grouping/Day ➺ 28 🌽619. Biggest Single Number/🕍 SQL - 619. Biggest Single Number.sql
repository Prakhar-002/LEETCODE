--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 619

SELECT MAX(num) AS num FROM 
(SELECT num 
FROM MyNumbers 
GROUP BY num
HAVING COUNT(num) = 1) AS distinct_num