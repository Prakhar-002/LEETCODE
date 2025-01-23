
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2030%20%F0%9F%8C%BD1731.%20The%20Number%20of%20Employees%20Which%20Report%20to%20Each%20Employee)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2032%20%F0%9F%8C%BD610.%20Triangle%20Judgement)

</br>
</br>

# 1789. Primary Department for Each Employee

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/primary-department-for-each-employee/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1789 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employee`

| Column Name   |  Type   |
|---------------|---------|
| employee_id   | int     |
| department_id | int     |
| primary_flag  | varchar |

(employee_id, department_id) is the primary key (combination of columns with unique values) for this table.
employee_id is the id of the employee.</br>
department_id is the id of the department to which the employee belongs.</br>
primary_flag is an ENUM (category) of type ('Y', 'N'). If the flag is 'Y', the department is the primary department for the employee. If the flag is 'N', the department is not the primary.

---

### Employees can belong to multiple departments. When the employee joins other departments, they need to decide which department is their primary department. Note that when an employee belongs to only one department, their primary column is `'N'`.

### Write a solution to report all the employees with their primary department. For employees who belong to one department, report their only department.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employee table:

| employee_id | department_id | primary_flag |
| ----------- | ------------- | ------------ |
| 1           | 1             | N            |
| 2           | 1             | Y            |
| 2           | 2             | N            |
| 3           | 3             | N            |
| 4           | 2             | N            |
| 4           | 3             | Y            |
| 4           | 4             | N            |

  ### 📤 `Output`  ➤

| employee_id | department_id |
| ----------- | ------------- |
| 1           | 1             |
| 2           | 1             |
| 3           | 3             |
| 4           | 3             |

  ### 🔦 `Explanation`  ➤ 

    - The Primary department for employee 1 is 1.
    - The Primary department for employee 2 is 1.
    - The Primary department for employee 3 is 3.
    - The Primary department for employee 4 is 3.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT  employee_id, department_id
FROM Employee 
WHERE primary_flag = 'Y'
GROUP BY employee_id

UNION 

SELECT  employee_id, department_id
FROM Employee 
GROUP BY employee_id
HAVING COUNT(employee_id) = 1

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2031%20%F0%9F%8C%BD1789.%20Primary%20Department%20for%20Each%20Employee/%F0%9F%95%8D%20SQL%20-%201789.%20Primary%20Department%20for%20Ea.sql) |