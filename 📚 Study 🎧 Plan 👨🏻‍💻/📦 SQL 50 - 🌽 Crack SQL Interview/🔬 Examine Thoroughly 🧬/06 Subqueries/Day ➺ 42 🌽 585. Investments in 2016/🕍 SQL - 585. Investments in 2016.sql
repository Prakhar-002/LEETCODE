--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 585

SELECT ROUND(SUM(tiv_2016), 2) AS tiv_2016  -- Selects the rounded sum of tiv_2016, renamed as 'tiv_2016'
FROM Insurance  -- From the Insurance table
WHERE tiv_2015 IN (  -- Filters records where tiv_2015 exists in the following subquery
      SELECT tiv_2015  -- Selects the tiv_2015 values
      FROM Insurance  -- From the Insurance table
      GROUP BY tiv_2015  -- Groups the results by tiv_2015
      HAVING COUNT(*) > 1  -- Filters for tiv_2015 values that appear more than once
)
AND (lat, lon) IN (  -- Filters records where the pair of lat and lon exists in the following subquery
      SELECT lat, lon  -- Selects the lat and lon values
      FROM Insurance  -- From the Insurance table
      GROUP BY lat, lon  -- Groups the results by lat and lon
      HAVING COUNT(*) = 1  -- Filters for lat, lon pairs that appear only once
)
