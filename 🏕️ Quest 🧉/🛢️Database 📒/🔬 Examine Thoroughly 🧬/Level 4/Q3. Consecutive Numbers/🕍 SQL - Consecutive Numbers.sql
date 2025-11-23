-- Select the number from Logs (aliased as l1) that appears consecutively three times in increasing id order
SELECT l1.num AS ConsecutiveNums
FROM Logs l1, Logs l2, Logs l3
-- Conditions to ensure l1, l2, l3 are consecutive rows by id
WHERE l1.id - l2.id = 1
      AND l2.id - l3.id = 1
      -- Conditions to ensure all three consecutive rows have the same num value
      AND l1.num = l2.num
      AND l2.num = l3.num
      AND l1.num = l3.num
-- Group by the number to return distinct num values with such triple consecutive occurrences
GROUP BY l1.num;