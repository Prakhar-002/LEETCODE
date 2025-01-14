--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1204

SELECT q1.person_name 
FROM Queue q1
INNER JOIN Queue q2
ON q1.turn >= q2.turn 
GROUP BY q1.turn
HAVING SUM(q2.weight) <= 1000
ORDER BY q1.turn DESC LIMIT 1