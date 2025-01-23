--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1141

SELECT 
      activity_date AS day,  -- Selects the activity_date and renames it as 'day'
      COUNT(DISTINCT user_id) AS active_users  -- Counts the distinct user_id values to get the number of active users
FROM Activity  -- From the Activity table
WHERE activity_date BETWEEN date_sub('2019-07-27', interval 29 day) AND '2019-07-27'  -- Filters the records for the 30-day period ending on '2019-07-27'
GROUP BY day  -- Groups the results by activity_date (alias 'day') to get the count of active users for each day
