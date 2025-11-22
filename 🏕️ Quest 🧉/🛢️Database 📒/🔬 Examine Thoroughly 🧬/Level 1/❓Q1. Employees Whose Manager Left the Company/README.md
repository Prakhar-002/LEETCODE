# ❓Q1. Employees Whose Manager Left the Company

</br>

<h2 align="center"> 

<a href="https://leetcode.com/quest/database-quest/quiz/employees-whose-manager-left-the-company/?envType=problem-list-v2&envId=db-db1-assignment"><strong>➥ ♻️ ❓Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employees`

| Column Name | Type     |
|-------------|----------|
| employee_id | int      |
| name        | varchar  |
| manager_id  | int      |
| salary      | int      |

In SQL, employee_id is the primary key for this table.</br>
This table contains information about the employees, their salary, and the ID of their manager.</br> Some employees do not have a manager (manager_id is null). 

---

### Find the IDs of the employees whose salary is strictly less than $`30000` and whose manager left the company. When a manager leaves the company, their information is deleted from the `Employees` table, but the reports still have their `manager_id` set to the manager that left.

### Return the result table ordered by `employee_id`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employees table:

| employee_id | name      | manager_id | salary |
| ----------- | --------- | ---------- | ------ |
| 3           | Mila      | 9          | 60301  |
| 12          | Antonella | null       | 31000  |
| 13          | Emery     | null       | 67084  |
| 1           | Kalel     | 11         | 21241  |
| 9           | Mikaela   | null       | 50937  |
| 11          | Joziah    | 6          | 28485  |

  ### 📤 `Output`  ➤

| employee_id |
| ----------- |
| 11          |

  ### 🔦 `Explanation`  ➤ </br> The employees with a salary less than $30000 are 1 (Kalel) and 11 (Joziah).</br> Kalel's manager is employee 11, who is still in the company (Joziah).</br> Joziah's manager is employee 6, who left the company because there is no row for employee 6 as it was deleted.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT employee_id 
FROM Employees 
WHERE salary < 30000 
AND manager_id  NOT IN ( SELECT employee_id FROM  Employees )
ORDER BY employee_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/%E2%9D%93Q1.%20Employees%20Whose%20Manager%20Left%20the%20Company/%F0%9F%95%8D%20SQL%20-%20.sql) |