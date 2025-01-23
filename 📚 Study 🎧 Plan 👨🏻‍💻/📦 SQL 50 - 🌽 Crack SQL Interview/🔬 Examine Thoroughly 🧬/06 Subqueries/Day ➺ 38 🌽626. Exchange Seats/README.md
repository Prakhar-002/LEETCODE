
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2037%20%F0%9F%8C%BD1978.%20Employees%20Whose%20Manager%20Left%20the%20Company)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2039%20%F0%9F%8C%BD1341.%20Movie%20Rating)

</br>
</br>

# 626. Exchange Seats

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/exchange-seats/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 626 Leetcode Medium ☢️ </strong></a>
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

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT  
CASE 
      WHEN id = (SELECT MAX(id) FROM Seat) AND id % 2 = 1 THEN id
      WHEN id % 2 = 1 THEN id + 1 else id - 1 END AS id,
student 
FROM Seat
ORDER BY id 

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2038%20%F0%9F%8C%BD626.%20Exchange%20Seats/%F0%9F%95%8D%20SQL%20-%20626.%20Exchange%20Seats.sql) |