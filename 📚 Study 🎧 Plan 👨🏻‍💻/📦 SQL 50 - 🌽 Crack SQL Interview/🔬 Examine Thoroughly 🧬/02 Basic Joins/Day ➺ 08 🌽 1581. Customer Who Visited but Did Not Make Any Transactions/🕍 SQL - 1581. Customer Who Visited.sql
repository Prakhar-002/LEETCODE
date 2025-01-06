--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1581

SELECT v.customer_id , COUNT(v.visit_id) as count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id