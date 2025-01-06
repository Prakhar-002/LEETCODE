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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |