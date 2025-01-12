# 185. Department Top Three Salaries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/department-top-three-salaries/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 185 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Employee`

| Column Name  | Type    |
|--------------|---------|
| id           | int     |
| name         | varchar |
| salary       | int     |
| departmentId | int     |

id is the primary key (column with unique values) for this table.</br>
departmentId is a foreign key (reference column) of the ID from the Department table.</br>
Each row of this table indicates the ID, name, and salary of an employee. It also contains the ID of their department.

---

### Table: Department

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| name        | varchar |

id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID of a department and its name.

---

### A company's executives are interested in seeing who earns the most money in each of the company's departments. A high earner in a department is an employee who has a salary in the top three unique salaries for that department.

### Write a solution to find the employees who are high earners in each of the departments.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Employee table:

| id | name  | salary | departmentId |
| -- | ----- | ------ | ------------ |
| 1  | Joe   | 85000  | 1            |
| 2  | Henry | 80000  | 2            |
| 3  | Sam   | 60000  | 2            |
| 4  | Max   | 90000  | 1            |
| 5  | Janet | 69000  | 1            |
| 6  | Randy | 85000  | 1            |
| 7  | Will  | 70000  | 1            |

### Department table:

| id | name  |
| -- | ----- |
| 1  | IT    |
| 2  | Sales |

  ### 📤 `Output`  ➤

| Department | Employee | Salary |
| ---------- | -------- | ------ |
| IT         | Joe      | 85000  |
| Sales      | Henry    | 80000  |
| Sales      | Sam      | 60000  |
| IT         | Max      | 90000  |
| IT         | Randy    | 85000  |
| IT         | Will     | 70000  |

  ### 🔦 `Explanation`  ➤ In the IT department:

    - Max earns the highest unique salary
    - Both Randy and Joe earn the second-highest unique salary
    - Will earns the third-highest unique salary

    In the Sales department:
    - Henry earns the highest salary
    - Sam earns the second-highest salary
    - There is no third-highest salary as there are only two employees

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **There are no employees with the exact same name, salary and department.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |