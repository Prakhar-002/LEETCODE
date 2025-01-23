
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2046%20%F0%9F%8C%BD%20196.%20Delete%20Duplicate%20Emails)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2048%20%F0%9F%8C%BD%201484.%20Group%20Sold%20Products%20By%20The%20Date)

</br>
</br>

# 176. Second Highest Salary

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/second-highest-salary/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 176 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employee`

| Column Name | Type |
|-------------|------|
| id          | int  |
| salary      | int  |

id is the primary key (column with unique values) for this table.</br>
Each row of this table contains information about the salary of an employee.

---

### Write a solution to find the second highest distinct salary from the `Employee` table. If there is no second highest salary, return null (`return None in Pandas`).

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employee table:

| id | salary |
| -- | ------ |
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |

  ### 📤 `Output`  ➤

| SecondHighestSalary |
| ------------------- |
| 200                 |

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employee table:

| id | salary |
| -- | ------ |
| 1  | 100    |

  ### 📤 `Output`  ➤

| SecondHighestSalary |
| ------------------- |
| null                |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT MAX(salary) AS SecondHighestSalary 
FROM Employee
WHERE salary NOT IN (SELECT MAX(salary) FROM Employee)

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2047%20%F0%9F%8C%BD%20176.%20Second%20Highest%20Salary/%F0%9F%95%8D%20SQL%20-%20176.%20Second%20Highest%20Salary.sql) |