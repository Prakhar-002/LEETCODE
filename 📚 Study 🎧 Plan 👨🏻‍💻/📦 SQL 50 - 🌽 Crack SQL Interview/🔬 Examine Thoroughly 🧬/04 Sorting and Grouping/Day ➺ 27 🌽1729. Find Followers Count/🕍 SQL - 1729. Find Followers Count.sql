--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1729

SELECT 
      user_id,
      COUNT(follower_id ) AS followers_count
FROM Followers 
GROUP BY user_id 
ORDER BY user_id