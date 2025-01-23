
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2011%20%F0%9F%8C%BD%20577.%20Employee%20Bonus)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2013%20%F0%9F%8C%BD%20570.%20Managers%20with%20at%20Least%205%20Direct%20Reports)

</br>
</br>

# 1280. Students and Examinations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/students-and-examinations/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1280 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Students`

| Column Name   | Type    |
|---------------|---------|
| student_id    | int     |
| student_name  | varchar |

student_id is the primary key (column with unique values) for this table.
Each row of this table contains the ID and the name of one student in the school.

---

### Table: `Subjects`


| Column Name  | Type    |
|--------------|---------|
| subject_name | varchar |

subject_name is the primary key (column with unique values) for this table.
Each row of this table contains the name of one subject in the school.

---

### Table: `Examinations`

| Column Name  | Type    |
|--------------|---------|
| student_id   | int     |
| subject_name | varchar |

There is no primary key (column with unique values) for this table. It may contain duplicates.
Each student from the Students table takes every course from the Subjects table.
Each row of this table indicates that a student with ID student_id attended the exam of subject_name.

---

### Write a solution to find the number of times each student attended each exam.

### Return the result table ordered by `student_id` and `subject_name`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Students table:

| student_id | student_name |
| ---------- | ------------ |
| 1          | Alice        |
| 2          | Bob          |
| 13         | John         |
| 6          | Alex         |

### 

| subject_name |
| ------------ |
| Math         |
| Physics      |
| Programming  |

### 

| student_id | subject_name |
| ---------- | ------------ |
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

  ### 📤 `Output`  ➤

| student_id | student_name | subject_name | attended_exams |
| ---------- | ------------ | ------------ | -------------- |
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

  ### 🔦 `Explanation`  ➤ The result table should contain all students and all subjects.</br> Alice attended the Math exam 3 times, the Physics exam 2 times, and the Programming exam 1 time.</br> Bob attended the Math exam 1 time, the Programming exam 1 time, and did not attend the Physics exam.</br> Alex did not attend any exams.</br> John attended the Math exam 1 time, the Physics exam 1 time, and the Programming exam 1 time.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

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
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2012%20%F0%9F%8C%BD%201280.%20Students%20and%20Examinations/%F0%9F%95%8D%20SQL%20-%201280.%20Students%20and%20Examinations.sql) |