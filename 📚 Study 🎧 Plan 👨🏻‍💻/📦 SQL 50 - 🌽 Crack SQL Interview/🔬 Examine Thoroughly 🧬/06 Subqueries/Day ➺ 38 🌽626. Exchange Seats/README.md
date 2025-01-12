# 626. Exchange Seats

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/exchange-seats/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 626 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Seat`

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| student     | varchar |

id is the primary key (unique value) column for this table.</br>
Each row of this table indicates the name and the ID of a student.</br>
The ID sequence always starts from 1 and increments continuously.

---

### Write a solution to swap the seat id of every two consecutive students. If the number of students is odd, the id of the last student is not swapped.

### Return the result table ordered by `id` in ascending order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| id | student |
| -- | ------- |
| 1  | Abbot   |
| 2  | Doris   |
| 3  | Emerson |
| 4  | Green   |
| 5  | Jeames  |

  ### 📤 `Output`  ➤

| id | student |
| -- | ------- |
| 1  | Doris   |
| 2  | Abbot   |
| 3  | Green   |
| 4  | Emerson |
| 5  | Jeames  |

  ### 🔦 `Explanation`  ➤ Note that if the number of students is odd, there is no need to change the last one's seat.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |