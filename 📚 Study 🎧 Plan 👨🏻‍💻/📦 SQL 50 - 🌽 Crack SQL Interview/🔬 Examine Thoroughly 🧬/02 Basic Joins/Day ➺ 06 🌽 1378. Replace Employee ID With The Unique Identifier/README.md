
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Select/Day%20%E2%9E%BA%2005%20%F0%9F%8C%BD%201683.%20Invalid%20Tweets)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2007%20%F0%9F%8C%BD%201068.%20Product%20Sales%20Analysis%20I)

</br>
</br>

# 1378. Replace Employee ID With The Unique Identifier

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1378 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employees`


| Column Name   | Type    |
|---------------|---------|
| id            | int     |
| name          | varchar |

id is the primary key (column with unique values) for this table.
Each row of this table contains the id and the name of an employee in a company.

---

### Table: `EmployeeUNI`


| Column Name   | Type    |
|---------------|---------|
| id            | int     |
| unique_id     | int     |

(id, unique_id) is the primary key (combination of columns with unique values) for this table.
Each row of this table contains the id and the corresponding unique id of an employee in the company.

---

### Write a solution to show the `unique ID` of each user, If a user does not have a unique ID replace just show `null`.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employees table:

| id | name     |
| -- | -------- |
| 1  | Alice    |
| 7  | Bob      |
| 11 | Meir     |
| 90 | Winston  |
| 3  | Jonathan |

### EmployeeUNI table:

| id | unique_id |
| -- | --------- |
| 3  | 1         |
| 11 | 2         |
| 90 | 3         |

  ### 📤 `Output`  ➤

| unique_id | name     |
| --------- | -------- |
| null      | Alice    |
| null      | Bob      |
| 2         | Meir     |
| 3         | Winston  |
| 1         | Jonathan |

  ### 🔦 `Explanation`  ➤ Alice and Bob do not have a unique ID, We will show null instead.</br> The unique ID of Meir is 2</br> The unique ID of Winston is 3</br> The unique ID of Jonathan is 1.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT eUNI.unique_id , emp.name
FROM Employees emp
LEFT JOIN EmployeeUNI eUNI
on emp.id = eUNI.id

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2006%20%F0%9F%8C%BD%201378.%20Replace%20Employee%20ID%20With%20The%20Unique%20Identifier/%F0%9F%95%8D%20SQL%20-%201378.%20Replace%20Employee%20ID%20With%20The.sql) |