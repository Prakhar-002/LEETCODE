-- Select the customer_number from the Orders table
SELECT customer_number
FROM Orders
-- Group the results by each unique customer_number
GROUP BY customer_number
-- Order the groups by the number of orders for each customer (in descending order)
ORDER BY count(customer_number) DESC
-- Limit the output to only the top customer (the one with the most orders)
LIMIT 1;
