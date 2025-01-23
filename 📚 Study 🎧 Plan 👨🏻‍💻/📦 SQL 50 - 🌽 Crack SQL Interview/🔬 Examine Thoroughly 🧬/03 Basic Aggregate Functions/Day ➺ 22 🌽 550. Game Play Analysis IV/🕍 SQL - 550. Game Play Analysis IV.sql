--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 550

SELECT 
      ROUND(SUM(player_login) / COUNT(DISTINCT player_id), 2) AS fraction  -- Calculates the fraction of logins by dividing the sum of player_logins by the distinct player_id count, rounded to 2 decimal places
FROM
      (SELECT 
            player_id,  -- Selects the player_id from the activity table
            DATEDIFF(event_date, MIN(event_date) OVER(PARTITION BY player_id)) = 1 AS player_login  -- Checks if the difference between the event_date and the first event_date for each player is 1, indicating a login on consecutive days
      FROM activity) AS new_table  -- From the activity table, partitioned by player_id to calculate the difference for each player
