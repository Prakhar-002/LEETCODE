--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 180

SELECT l1.num AS ConsecutiveNums
FROM Logs l1, Logs l2, Logs l3
WHERE l1.id - l2.id = 1
      AND l2.id - l3.id = 1
      AND l1.num = l2.num
      AND l2.num = l3.num
      AND l1.num = l3.num
GROUP BY l1.num