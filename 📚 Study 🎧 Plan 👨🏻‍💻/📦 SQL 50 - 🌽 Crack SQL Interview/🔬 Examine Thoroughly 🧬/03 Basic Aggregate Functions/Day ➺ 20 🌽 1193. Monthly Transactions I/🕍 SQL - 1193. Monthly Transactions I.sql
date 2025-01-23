--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1193 

SELECT 
      -- LEFT(trans_date , 7) AS month ,  -- Alternative approach to extract the month (commented out)
      DATE_FORMAT(trans_date, '%Y-%m') AS month,  -- Extracts the month in 'YYYY-MM' format from trans_date
      country,  -- Selects the country column
      COUNT(id) AS trans_count,  -- Counts the number of transactions (id)
      SUM(IF(state = 'approved', 1, 0)) AS approved_count,  -- Sums the approved transactions
      SUM(amount) AS trans_total_amount,  -- Sums the total transaction amount
      SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount  -- Sums the approved transaction amounts
FROM Transactions  -- From the Transactions table
GROUP BY month, country  -- Groups the results by month and country to calculate the required metrics for each combination