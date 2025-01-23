--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1211

SELECT query_name,  -- Selects the query_name from the queries table
      ROUND(AVG(rating / position), 2) AS quality,  -- Calculates the average quality by dividing rating by position, rounded to 2 decimal places
      ROUND(AVG(IF(rating < 3, 1, 0) * 100), 2) AS poor_query_percentage  -- Calculates the percentage of poor queries (rating < 3), rounded to 2 decimal places
FROM queries  -- From the queries table
WHERE query_name IS NOT NULL  -- Filters out rows where query_name is NULL
GROUP BY query_name  -- Groups the results by query_name to calculate the metrics for each query
