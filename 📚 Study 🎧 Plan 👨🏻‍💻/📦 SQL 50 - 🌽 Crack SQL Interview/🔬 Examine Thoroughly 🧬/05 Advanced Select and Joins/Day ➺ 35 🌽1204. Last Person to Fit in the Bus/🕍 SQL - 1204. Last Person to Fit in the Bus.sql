--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1204

SELECT q1.person_name  -- Selects the person_name from the first instance of the Queue table (q1)
FROM Queue q1  -- From the Queue table (alias 'q1')
INNER JOIN Queue q2  -- Inner join with another instance of the Queue table (alias 'q2')
ON q1.turn >= q2.turn  -- Join condition: matches q1.turn with q2.turn where q1.turn is greater than or equal to q2.turn
GROUP BY q1.turn  -- Groups the results by q1.turn
HAVING SUM(q2.weight) <= 1000  -- Filters the groups where the sum of q2.weight is less than or equal to 1000
ORDER BY q1.turn DESC  -- Orders the results by q1.turn in descending order
LIMIT 1  -- Limits the result to only the first row (the one with the highest turn)
