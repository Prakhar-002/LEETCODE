-- Select the activity_date and rename it as 'day' for readability
SELECT 
      activity_date AS day,
      -- Count the distinct number of users active on each day
      COUNT(DISTINCT user_id) AS active_users
FROM Activity
-- Filter to include only activities within the 30-day window ending on 2019-07-27
WHERE activity_date BETWEEN date_sub('2019-07-27', interval 29 day) AND '2019-07-27'
-- Group the results by each day to get daily counts
GROUP BY day;
