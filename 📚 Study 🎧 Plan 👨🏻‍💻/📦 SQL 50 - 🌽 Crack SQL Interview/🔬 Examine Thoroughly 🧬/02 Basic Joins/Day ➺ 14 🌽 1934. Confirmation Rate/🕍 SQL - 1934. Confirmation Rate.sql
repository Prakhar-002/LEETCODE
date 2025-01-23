--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1934

SELECT s.user_id,  -- Selects the user_id from the Signups table
      ROUND(AVG(IF(c.action = 'confirmed ', 1, 0)), 2) AS confirmation_rate  -- Calculates the confirmation rate as the average of confirmed actions (1 for confirmed, 0 for others), rounded to 2 decimal places
FROM Signups s  -- From the Signups table (alias 's')
LEFT JOIN Confirmations c  -- Left join with the Confirmations table (alias 'c')
      ON s.user_id = c.user_id  -- Join condition: matches user_id from both tables
GROUP BY s.user_id  -- Groups the results by user_id to calculate the confirmation rate for each user
