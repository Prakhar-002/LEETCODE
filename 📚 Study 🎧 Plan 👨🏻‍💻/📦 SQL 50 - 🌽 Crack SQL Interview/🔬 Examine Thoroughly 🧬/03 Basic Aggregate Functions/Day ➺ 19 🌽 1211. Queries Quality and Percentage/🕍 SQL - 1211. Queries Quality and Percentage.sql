--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1211

SELECT query_name ,
      ROUND(AVG(rating / position), 2) AS quality ,
      ROUND(AVG(IF(rating < 3, 1, 0) * 100), 2) AS poor_query_percentage
FROM queries
WHERE query_name IS NOT NULL
GROUP BY query_name