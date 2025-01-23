--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 197

SELECT w1.id  -- Selects the id from Weather table (alias 'w1')
FROM Weather w1, Weather w2  -- From two instances of the Weather table (aliases 'w1' and 'w2')
WHERE DATEDIFF(w1.recordDate, w2.recordDate) = 1  -- Filters for records where w1's recordDate is one day later than w2's
      AND w1.temperature > w2.temperature  -- Filters for cases where w1's temperature is greater than w2's temperature
