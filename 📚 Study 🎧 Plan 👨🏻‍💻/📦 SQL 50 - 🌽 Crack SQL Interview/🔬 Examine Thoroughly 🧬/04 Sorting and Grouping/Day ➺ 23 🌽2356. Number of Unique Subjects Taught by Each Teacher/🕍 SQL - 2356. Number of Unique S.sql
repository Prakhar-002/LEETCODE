--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 2356

SELECT 
      teacher_id ,
      COUNT(DISTINCT subject_id) AS cnt
FROM teacher 
GROUP BY teacher_id