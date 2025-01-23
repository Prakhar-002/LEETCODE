--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 2356

SELECT 
      teacher_id,  -- Selects the teacher_id from the teacher table
      COUNT(DISTINCT subject_id) AS cnt  -- Counts the number of distinct subject_ids for each teacher, giving the count of subjects taught by each teacher
FROM teacher  -- From the teacher table
GROUP BY teacher_id  -- Groups the results by teacher_id to calculate the count of distinct subjects for each teacher
