--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1141

SELECT 
      activity_date AS day,
      COUNT(DISTINCT user_id ) AS active_users
FROM Activity 
WHERE activity_date BETWEEN date_sub('2019-07-27', interval 29 day) AND '2019-07-27'
GROUP BY day