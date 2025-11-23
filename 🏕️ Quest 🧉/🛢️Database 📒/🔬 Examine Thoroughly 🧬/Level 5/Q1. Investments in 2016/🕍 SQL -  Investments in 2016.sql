-- Select the total insured value for 2016, rounded to 2 decimal places
SELECT ROUND(SUM(tiv_2016), 2) AS tiv_2016 
FROM Insurance
-- Filter rows where tiv_2015 is among those with duplicate occurrences (appears more than once)
WHERE tiv_2015 IN (
      SELECT tiv_2015 
      FROM Insurance
      GROUP BY tiv_2015
      HAVING COUNT(*) > 1
)
-- Additionally, latitude and longitude must appear exactly once in the table (unique location)
AND (lat , lon) IN (
      SELECT lat, lon 
      FROM Insurance
      GROUP BY lat, lon 
      HAVING COUNT(*) = 1
);
