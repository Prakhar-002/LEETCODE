
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2010%20%F0%9F%8C%BD%201661.%20Average%20Time%20of%20Process%20per%20Machine)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2012%20%F0%9F%8C%BD%201280.%20Students%20and%20Examinations)

</br>
</br>

# 577. Employee Bonus

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/employee-bonus/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 577 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employee`

| Column Name | Type    |
|-------------|---------|
| empId       | int     |
| name        | varchar |
| supervisor  | int     |
| salary      | int     |

empId is the column with unique values for this table.
Each row of this table indicates the name and the ID of an employee in addition to their salary and the id of their manager.

---

### Table: `Bonus`

| Column Name | Type |
|-------------|------|
| empId       | int  |
| bonus       | int  |

empId is the column of unique values for this table.
empId is a foreign key (reference column) to empId from the Employee table.
Each row of this table contains the id of an employee and their respective bonus.

---

### Write a solution to report the name and bonus amount of each employee with a bonus less than `1000`.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employee table:

| empId | name   | supervisor | salary |
| ----- | ------ | ---------- | ------ |
| 3     | Brad   | null       | 4000   |
| 1     | John   | 3          | 1000   |
| 2     | Dan    | 3          | 2000   |
| 4     | Thomas | 3          | 4000   |

### Bonus table:

| empId | bonus |
| ----- | ----- |
| 2     | 500   |
| 4     | 2000  |

  ### 📤 `Output`  ➤

| name | bonus |
| ---- | ----- |
| Brad | null  |
| John | null  |
| Dan  | 500   | 

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT  e.name, b.bonus 
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
or b.bonus IS NULL

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2011%20%F0%9F%8C%BD%20577.%20Employee%20Bonus/%F0%9F%95%8D%20SQL%20-%20577.%20Employee%20Bonus.sql) |