-- Select the transaction month in 'YYYY-MM' format and alias as 'month'
SELECT 
      date_format(trans_date, '%Y-%m') AS month,
      -- Select the country for grouping
      country,
      -- Count the total number of transactions per month and country
      COUNT(id) AS trans_count,
      -- Sum up transactions where the state is 'approved' by counting 1 for approved, else 0
      SUM(IF(state = 'approved', 1, 0)) AS approved_count,
      -- Sum of the transaction amounts per month and country
      SUM(amount) AS trans_total_amount,
      -- Sum of amounts where the transaction state is 'approved'
      SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount
FROM Transactions
-- Group results by month and country for aggregate calculation
GROUP BY month, country;