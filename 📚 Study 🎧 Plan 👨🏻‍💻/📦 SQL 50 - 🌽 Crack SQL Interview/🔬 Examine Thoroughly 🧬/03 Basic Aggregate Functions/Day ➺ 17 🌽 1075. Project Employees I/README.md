
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2016%20%F0%9F%8C%BD%201251.%20Average%20Selling%20Price)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2018%20%F0%9F%8C%BD%201633.%20Percentage%20of%20Users%20Attended%20a%20Contest)

</br>
</br>

# 1075. Project Employees I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/project-employees-i/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1075 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Project`


| Column Name | Type    |
|-------------|---------|
| project_id  | int     |
| employee_id | int     |

(project_id, employee_id) is the primary key of this table.
employee_id is a foreign key to Employee table.</br>
Each row of this table indicates that the employee with employee_id is working on the project with project_id.

---

### Table: `Employee`

| Column Name      | Type    |
|------------------|---------|
| employee_id      | int     |
| name             | varchar |
| experience_years | int     |

employee_id is the primary key of this table. It's guaranteed that experience_years is not NULL.</br>
Each row of this table contains information about one employee.

---

### Write an SQL query that reports the `average` experience years of all the employees for each project, `rounded to 2 digits`.

### Return the result table in `any order`.

### The query result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `Project` table:

| project_id | employee_id |
| ---------- | ----------- |
| 1          | 1           |
| 1          | 2           |
| 1          | 3           |
| 2          | 1           |
| 2          | 4           |

### `Employee` table:

| employee_id | name   | experience_years |
| ----------- | ------ | ---------------- |
| 1           | Khaled | 3                |
| 2           | Ali    | 2                |
| 3           | John   | 1                |
| 4           | Doe    | 2                |

  ### 📤 `Output`  ➤

| project_id | average_years |
| ---------- | ------------- |
| 1          | 2             |
| 2          | 2.5           |

  ### 🔦 `Explanation`  ➤ The average experience years for the first project is (3 + 2 + 1) / 3 = 2.00 and for the second project is (3 + 2) / 2 = 2.50

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT p.project_id,
      ROUND(AVG(e.experience_years ), 2) AS average_years
FROM Project p
      LEFT JOIN Employee e
      ON p.employee_id = e.employee_id
GROUP BY p. project_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2017%20%F0%9F%8C%BD%201075.%20Project%20Employees%20I/%F0%9F%95%8D%20SQL%20-%201075.%20Project%20Employees%20I.sql) |