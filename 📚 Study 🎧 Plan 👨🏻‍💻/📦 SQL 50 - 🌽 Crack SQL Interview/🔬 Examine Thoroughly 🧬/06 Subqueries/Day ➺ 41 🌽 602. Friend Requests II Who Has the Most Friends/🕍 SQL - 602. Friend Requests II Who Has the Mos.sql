--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 602 

SELECT id, COUNT(id) AS num  -- Selects the id and the count of occurrences of each id, renamed as 'num'
FROM
(
      SELECT requester_id AS id  -- Selects the requester_id from RequestAccepted table and renames it as 'id'
      FROM RequestAccepted  -- From the RequestAccepted table

      UNION ALL  -- Combines the results of both queries, including duplicates

      SELECT accepter_id AS id  -- Selects the accepter_id from RequestAccepted table and renames it as 'id'
      FROM RequestAccepted  -- From the RequestAccepted table
) temp  -- The results from the union are treated as a temporary table (alias 'temp')
GROUP BY id  -- Groups the results by id
ORDER BY num DESC  -- Orders the results by num (the count of ids) in descending order
LIMIT 1  -- Limits the result to only the id with the highest count
