--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1633 

SELECT contest_id,  -- Selects the contest_id from the Register table
      ROUND(COUNT(DISTINCT user_id) * 100 / (  -- Calculates the percentage of distinct users per contest
            SELECT COUNT(user_id)  -- Subquery: Counts the total number of users in the users table
            FROM users
      ), 2) AS percentage  -- Rounds the result to 2 decimal places
FROM Register  -- From the Register table
GROUP BY contest_id  -- Groups the results by contest_id to calculate the percentage for each contest
ORDER BY percentage DESC, contest_id ASC  -- Orders the results by percentage in descending order and contest_id in ascending order
