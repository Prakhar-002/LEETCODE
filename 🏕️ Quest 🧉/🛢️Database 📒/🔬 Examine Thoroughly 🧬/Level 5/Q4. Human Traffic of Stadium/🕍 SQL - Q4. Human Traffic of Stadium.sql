-- Define a common table expression (CTE) named q1
WITH q1 AS (
      SELECT *,
            -- Count of rows in the range from current row to 2 following rows (window function)
            COUNT(*) OVER (ORDER BY id RANGE BETWEEN CURRENT ROW AND 2 FOLLOWING) AS following_cnt,
            -- Count of rows in the range from 2 preceding rows to current row
            COUNT(*) OVER (ORDER BY id RANGE BETWEEN 2 PRECEDING AND CURRENT ROW) AS preceding_cnt,
            -- Count of rows in the range from 1 preceding row to 1 following row
            COUNT(*) OVER (ORDER BY id RANGE BETWEEN 1 PRECEDING AND 1 FOLLOWING) AS current_cnt
      FROM stadium
      -- Filter to include only rows where people count is greater than 99
      WHERE people > 99
)
-- Select id, visit_date, and people from the CTE
SELECT id, visit_date, people
FROM q1
-- Include rows where any of the three window counts equals 3
WHERE following_cnt = 3 OR preceding_cnt = 3 OR current_cnt = 3
-- Order the result by visit_date
ORDER BY visit_date;
