-- Select student ID, student name, subject name, and count of attended exams
SELECT
      s.student_id,
      s.student_name,
      sub.subject_name,
      COUNT(e.subject_name) AS attended_exams
FROM Students s
-- CROSS JOIN to create all possible combinations of students and subjects
CROSS JOIN Subjects sub
      -- LEFT JOIN to attach exam records where student took that subject exam
      LEFT JOIN Examinations e
      ON e.student_id = s.student_id
            AND e.subject_name = sub.subject_name
-- Group by student and subject to count exams per subject per student
GROUP BY s.student_id, s.student_name, sub.subject_name
-- Order by student ID and name for organized output
ORDER BY s.student_id, s.student_name;

