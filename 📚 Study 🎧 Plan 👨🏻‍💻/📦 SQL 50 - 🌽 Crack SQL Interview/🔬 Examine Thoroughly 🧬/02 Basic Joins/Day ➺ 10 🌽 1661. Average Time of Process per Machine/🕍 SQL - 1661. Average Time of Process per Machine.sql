--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1661

SELECT a1.machine_id, Round(AVG(a2.timestamp - a1.timestamp), 3) as processing_time  -- Selects machine_id and calculates the average processing time (rounded to 3 decimal places)
FROM Activity a1  -- From the Activity table (alias 'a1')
JOIN Activity a2  -- Inner join with another instance of the Activity table (alias 'a2')
      ON a1.machine_id = a2.machine_id  -- Join condition: matches machine_id from both instances
      AND a1.process_id = a2.process_id  -- Join condition: matches process_id from both instances
      AND a1.timestamp < a2.timestamp  -- Filters for records where a1's timestamp is earlier than a2's
GROUP BY a1.machine_id  -- Groups the results by machine_id to calculate processing time for each machine
