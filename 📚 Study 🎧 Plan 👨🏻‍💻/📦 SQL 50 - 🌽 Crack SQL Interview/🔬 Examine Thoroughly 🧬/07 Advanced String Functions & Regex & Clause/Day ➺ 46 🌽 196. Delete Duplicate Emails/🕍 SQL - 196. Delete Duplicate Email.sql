--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 196

DELETE p1  -- Deletes records from the Person table (alias 'p1')
FROM Person p1  -- From the Person table (alias 'p1')
INNER JOIN Person p2  -- Performs an inner join with the same Person table (alias 'p2')
ON p1.email = p2.email  -- Join condition: matches rows where the email is the same in both tables
AND p1.id > p2.id  -- Additional condition: only deletes rows from p1 where id is greater than the id in p2 (to keep the first occurrence)
