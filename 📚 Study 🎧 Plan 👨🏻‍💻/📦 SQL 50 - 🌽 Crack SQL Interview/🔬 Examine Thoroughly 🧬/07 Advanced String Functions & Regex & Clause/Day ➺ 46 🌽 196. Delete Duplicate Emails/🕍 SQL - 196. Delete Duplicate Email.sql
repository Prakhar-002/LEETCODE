--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 196

DELETE p1
FROM Person p1
INNER JOIN Person p2
ON p1.email = p2.email 
AND p1.id > p2.id
