# 2356. Number of Unique Subjects Taught by Each Teacher

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 2356 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Teacher`

| Column Name | Type |
|-------------|------|
| teacher_id  | int  |
| subject_id  | int  |
| dept_id     | int  |


(subject_id, dept_id) is the primary key (combinations of columns with unique values) of this table.</br>
Each row in this table indicates that the teacher with teacher_id teaches the subject subject_id in the department dept_id.

---

### Write a solution to calculate the number of unique subjects each teacher teaches in the university.

### Return the result table in any order.

### The result format is shown in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Teacher table:

| teacher_id | subject_id | dept_id |
| ---------- | ---------- | ------- |
| 1          | 2          | 3       |
| 1          | 2          | 4       |
| 1          | 3          | 3       |
| 2          | 1          | 1       |
| 2          | 2          | 1       |
| 2          | 3          | 1       |
| 2          | 4          | 1       |

  ### 📤 `Output`  ➤

| teacher_id | cnt |
| ---------- | --- |
| 1          | 2   |
| 2          | 4   |

  ### 🔦 `Explanation`  ➤ Teacher 1:

      - They teach subject 2 in departments 3 and 4.
      - They teach subject 3 in department 3.

  ### Teacher 2:

      - They teach subject 1 in department 1.
      - They teach subject 2 in department 1.
      - They teach subject 3 in department 1.
      - They teach subject 4 in department 1.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |