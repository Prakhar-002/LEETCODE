--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1321

SELECT visited_on,  -- Selects the visited_on date from the Customer table

      (  -- Starts the first subquery to calculate the total amount for the past 7 days
            SELECT SUM(amount)  -- Selects the sum of the amount
            FROM Customer  -- From the Customer table
            WHERE visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)  -- Filters for dates 6 days before the current visited_on
            AND c.visited_on  -- Filters up to the current visited_on
      ) AS amount,  -- Renames the result of the subquery as 'amount'
      
      ROUND((  -- Starts the second subquery to calculate the average amount
            SELECT SUM(amount) / 7  -- Selects the sum of the amount divided by 7 to get the average
            FROM Customer  -- From the Customer table
            WHERE visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)  -- Filters for dates 6 days before the current visited_on
            AND c.visited_on  -- Filters up to the current visited_on
      ), 2) AS average_amount,  -- Renames the result as 'average_amount' and rounds to 2 decimal places

FROM Customer c  -- From the Customer table (alias 'c')
WHERE visited_on >= (  -- Filters the results for visited_on after a certain date
      SELECT DATE_ADD(MIN(visited_on), INTERVAL 6 DAY)  -- Selects the earliest visited_on and adds 6 days to it
      FROM Customer  -- From the Customer table
)
GROUP BY visited_on  -- Groups the results by the visited_on date
ORDER BY visited_on  -- Orders the results by visited_on in ascending order
