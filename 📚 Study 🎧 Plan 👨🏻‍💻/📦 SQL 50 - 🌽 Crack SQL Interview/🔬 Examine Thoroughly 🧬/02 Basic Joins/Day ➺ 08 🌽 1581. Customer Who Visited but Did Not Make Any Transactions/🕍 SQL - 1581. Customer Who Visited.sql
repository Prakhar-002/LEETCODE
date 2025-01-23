--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1581

SELECT v.customer_id, COUNT(v.visit_id) as count_no_trans  -- Selects customer_id and counts visits with no transactions
FROM Visits v  -- From the Visits table (alias 'v')
LEFT JOIN Transactions t  -- Left join with the Transactions table (alias 't')
      ON v.visit_id = t.visit_id  -- Join condition: matches visit_id from both tables
WHERE t.transaction_id IS NULL  -- Filters for visits that have no corresponding transaction (transaction_id is NULL)
GROUP BY v.customer_id  -- Groups the results by customer_id to get the count per customer
