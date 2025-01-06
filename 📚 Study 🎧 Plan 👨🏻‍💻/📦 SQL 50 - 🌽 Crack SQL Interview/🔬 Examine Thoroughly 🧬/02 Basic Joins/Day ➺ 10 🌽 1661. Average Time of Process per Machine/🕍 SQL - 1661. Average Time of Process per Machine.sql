--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1661

SELECT a1.machine_id, Round(AVG(a2.timestamp  - a1.timestamp), 3) as processing_time 
FROM Activity a1
JOIN Activity a2
on a1.machine_id = a2.machine_id 
AND a1.process_id = a2.process_id
AND a1.timestamp < a2.timestamp 
GROUP BY a1.machine_id