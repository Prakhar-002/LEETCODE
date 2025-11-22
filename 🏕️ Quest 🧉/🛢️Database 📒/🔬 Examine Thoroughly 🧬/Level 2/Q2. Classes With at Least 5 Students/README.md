# Q2. Classes With at Least 5 Students

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/classes-with-at-least-5-students/description/?envType=problem-list-v2&envId=db-db2-filtering-aggregation"><strong>➥ ♻️ Q2 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Courses

| Column Name | Type    |
|-------------|---------|
| student     | varchar |
| class       | varchar |

(student, class) is the primary key (combination of columns with unique values) for this table.
Each row of this table indicates the name of a student and the class in which they are enrolled.

</br>

### Write a solution to find all the classes that have at least five students.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Courses table:

| student | class    |
|---------|----------|
| A       | Math     |
| B       | English  |
| C       | Math     |
| D       | Biology  |
| E       | Math     |
| F       | Computer |
| G       | Math     |
| H       | Math     |
| I       | Math     |

</br>

  ### 📤 `Output`  ➤

| class   |
|---------|
| Math    |

</br>

  ### 🔦 `Explanation`  ➤ 
  ### - Math has 6 students, so we include it.
  ### - English has 1 student, so we do not include it.
  ### - Biology has 1 student, so we do not include it.
  ### - Computer has 1 student, so we do not include it.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT class 
FROM Courses
GROUP BY class 
HAVING count(class) > 4
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |