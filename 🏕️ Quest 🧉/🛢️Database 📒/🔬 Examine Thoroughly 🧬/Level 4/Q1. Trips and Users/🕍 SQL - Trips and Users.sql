-- Select the request date and label it as Day
SELECT Request_at as Day,
      -- Calculate the cancellation rate by counting requests not completed divided by total requests, rounded to 2 decimal places
      ROUND(COUNT(IF(Status != 'completed', TRUE, NULL)) / COUNT(*), 2) AS 'Cancellation Rate'
FROM Trips
-- Filter trips requested between October 1 and October 3, 2013
WHERE (Request_at BETWEEN '2013-10-01' AND '2013-10-03')
      -- Exclude clients who are banned users
      AND Client_id NOT IN (SELECT Users_Id FROM Users WHERE Banned = 'Yes')
-- Group results by each request date to calculate daily cancellation rates
GROUP BY Request_at;
