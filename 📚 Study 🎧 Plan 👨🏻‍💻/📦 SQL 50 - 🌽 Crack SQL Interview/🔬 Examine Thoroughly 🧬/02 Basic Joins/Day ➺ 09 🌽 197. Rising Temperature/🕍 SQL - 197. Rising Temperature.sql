--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 197

SELECT w1.id 
FROM Weather w1, Weather w2
WHERE DATEDIFF(w1.recordDate , w2.recordDate) = 1
AND w1.temperature > w2.temperature 