--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1633 

SELECT contest_id ,
      ROUND(COUNT(DISTINCT user_id) * 100 / (
            SELECT COUNT(user_id)
                  FROM users
      ) , 2) AS  percentage
FROM Register
GROUP BY contest_id 
ORDER BY percentage DESC , contest_id ASC