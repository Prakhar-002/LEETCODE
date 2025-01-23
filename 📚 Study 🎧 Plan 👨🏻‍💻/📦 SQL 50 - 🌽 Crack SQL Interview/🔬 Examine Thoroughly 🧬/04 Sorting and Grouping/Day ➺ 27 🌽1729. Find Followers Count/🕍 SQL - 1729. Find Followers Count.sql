--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1729

SELECT 
      user_id,  -- Selects the user_id from the Followers table
      COUNT(follower_id) AS followers_count  -- Counts the number of followers for each user
FROM Followers  -- From the Followers table
GROUP BY user_id  -- Groups the results by user_id to calculate the followers count for each user
ORDER BY user_id  -- Orders the results by user_id in ascending order
