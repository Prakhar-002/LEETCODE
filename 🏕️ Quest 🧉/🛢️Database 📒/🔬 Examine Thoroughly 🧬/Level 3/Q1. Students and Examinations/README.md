# Q1. Students and Examinations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/students-and-examinations/description/?envType=problem-list-v2&envId=db-db3-grouping-aggregation"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Students

| Column Name   | Type    |
|---------------+---------|
| student_id    | int     |
| student_name  | varchar |

student_id is the primary key (column with unique values) for this table.
Each row of this table contains the ID and the name of one student in the school.

</br>

### Table: Subjects

| Column Name  | Type    |
|--------------|---------|
| subject_name | varchar |

subject_name is the primary key (column with unique values) for this table.
Each row of this table contains the name of one subject in the school.

</br>

### Table: Examinations

| Column Name  | Type    |
|--------------|---------|
| student_id   | int     |
| subject_name | varchar |

There is no primary key (column with unique values) for this table. It may contain duplicates.
Each student from the Students table takes every course from the Subjects table.
Each row of this table indicates that a student with ID student_id attended the exam of subject_name.

</br>

### Write a solution to find the number of times each student attended each exam.

### Return the result table ordered by student_id and subject_name.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Students table:

| student_id | student_name |
|------------|--------------|
| 1          | Alice        |
| 2          | Bob          |
| 13         | John         |
| 6          | Alex         |

</br>

### Subjects table:

| subject_name |
|--------------|
| Math         |
| Physics      |
| Programming  |

</br>

### Examinations table:

| student_id | subject_name |
|------------|--------------|
| 1          | Math         |
| 1          | Physics      |
| 1          | Programming  |
| 2          | Programming  |
| 1          | Physics      |
| 1          | Math         |
| 13         | Math         |
| 13         | Programming  |
| 13         | Physics      |
| 2          | Math         |
| 1          | Math         |

</br>

  ### 📤 `Output`  ➤

| student_id | student_name | subject_name | attended_exams |
|------------|--------------|--------------|----------------|
| 1          | Alice        | Math         | 3              |
| 1          | Alice        | Physics      | 2              |
| 1          | Alice        | Programming  | 1              |
| 2          | Bob          | Math         | 1              |
| 2          | Bob          | Physics      | 0              |
| 2          | Bob          | Programming  | 1              |
| 6          | Alex         | Math         | 0              |
| 6          | Alex         | Physics      | 0              |
| 6          | Alex         | Programming  | 0              |
| 13         | John         | Math         | 1              |
| 13         | John         | Physics      | 1              |
| 13         | John         | Programming  | 1              |

</br>

  ### 🔦 `Explanation`  ➤
  ### The result table should contain all students and all subjects.
  ### Alice attended the Math exam 3 times, the Physics exam 2 times, and the Programming exam 1 time.
  ### Bob attended the Math exam 1 time, the Programming exam 1 time, and did not attend the Physics exam.
  ### Alex did not attend any exams.
  ### John attended the Math exam 1 time, the Physics exam 1 time, and the Programming exam 1 time.

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT s.student_id, s.student_name, sub.subject_name, 
COUNT(e.subject_name) AS attended_exams
FROM Students s 
CROSS JOIN Subjects sub 
LEFT JOIN Examinations e 
on e.student_id = s.student_id
and e.subject_name = sub.subject_name
GROUP BY  s.student_id, s.student_name, sub.subject_name
ORDER BY  s.student_id, s.student_name
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |