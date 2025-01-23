--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1174

SELECT 
       ROUND(SUM(IF(min_order_date = min_customer_pref_delivery_date, 1, 0) * 100) / COUNT(min_order_date), 2) AS immediate_percentage  -- Calculates the percentage of immediate deliveries (where order date matches customer preferred delivery date), rounded to 2 decimal places
FROM
      (SELECT 
            delivery_id,  -- Selects the delivery_id from the Delivery table
            customer_id,  -- Selects the customer_id from the Delivery table
            min(order_date) AS min_order_date,  -- Gets the earliest order_date for each customer
            min(customer_pref_delivery_date) AS min_customer_pref_delivery_date  -- Gets the earliest customer preferred delivery date for each customer
      FROM Delivery  -- From the Delivery table
      GROUP BY customer_id) as new_table  -- Groups the results by customer_id to calculate the earliest dates for each customer
