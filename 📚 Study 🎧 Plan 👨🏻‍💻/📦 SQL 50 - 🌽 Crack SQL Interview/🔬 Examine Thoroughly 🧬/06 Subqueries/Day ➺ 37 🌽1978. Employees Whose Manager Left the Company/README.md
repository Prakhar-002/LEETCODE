# 1978. Employees Whose Manager Left the Company

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/employees-whose-manager-left-the-company/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1978 Leetcode Easy ♻️ </strong></a>
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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |