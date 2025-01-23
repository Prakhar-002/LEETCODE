--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1280 

SELECT s.student_id, s.student_name, sub.subject_name,  -- Selects student_id, student_name, and subject_name
      COUNT(e.subject_name) AS attended_exams  -- Counts the number of attended exams for each student and subject
FROM Students s  -- From the Students table (alias 's')
CROSS JOIN Subjects sub  -- Cross join with the Subjects table (alias 'sub'), creating all possible combinations
LEFT JOIN Examinations e  -- Left join with the Examinations table (alias 'e')
      ON e.student_id = s.student_id  -- Join condition: matches student_id from Students and Examinations
      AND e.subject_name = sub.subject_name  -- Join condition: matches subject_name from Examinations and Subjects
GROUP BY s.student_id, s.student_name, sub.subject_name  -- Groups the results by student and subject to calculate attended exams
ORDER BY s.student_id, s.student_name  -- Orders the results by student_id and student_name
