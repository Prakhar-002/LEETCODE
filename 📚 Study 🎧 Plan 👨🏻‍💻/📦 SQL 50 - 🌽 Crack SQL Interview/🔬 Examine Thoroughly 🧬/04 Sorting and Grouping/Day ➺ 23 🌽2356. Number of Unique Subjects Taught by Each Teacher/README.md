
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2022%20%F0%9F%8C%BD%20550.%20Game%20Play%20Analysis%20IV)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2024%20%F0%9F%8C%BD1141.%20User%20Activity%20for%20the%20Past%2030%20Days%20I)

</br>
</br>

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

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT 
      teacher_id ,
      COUNT(DISTINCT subject_id) AS cnt
FROM teacher 
GROUP BY teacher_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2023%20%F0%9F%8C%BD2356.%20Number%20of%20Unique%20Subjects%20Taught%20by%20Each%20Teacher/%F0%9F%95%8D%20SQL%20-%202356.%20Number%20of%20Unique%20S.sql) |