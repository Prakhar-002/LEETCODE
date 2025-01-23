
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2032%20%F0%9F%8C%BD610.%20Triangle%20Judgement)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2034%20%F0%9F%8C%BD1164.%20Product%20Price%20at%20a%20Given%20Date)

</br>
</br>

# 180. Consecutive Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/consecutive-numbers/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 180 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Logs`

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| num         | varchar |

In SQL, id is the primary key for this table.</br>
id is an autoincrement column starting from 1.

---

### Find all numbers that appear at least three times consecutively.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Logs table:

| id | num |
| -- | --- |
| 1  | 1   |
| 2  | 1   |
| 3  | 1   |
| 4  | 2   |
| 5  | 1   |
| 6  | 2   |
| 7  | 2   |

  ### 📤 `Output`  ➤

| ConsecutiveNums |
| --------------- |
| 1               |

  ### 🔦 `Explanation`  ➤ 1 is the only number that appears consecutively for at least three times.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT l1.num AS ConsecutiveNums
FROM Logs l1, Logs l2, Logs l3
WHERE l1.id - l2.id = 1
      AND l2.id - l3.id = 1
      AND l1.num = l2.num
      AND l2.num = l3.num
      AND l1.num = l3.num
GROUP BY l1.num

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2033%20%F0%9F%8C%BD180.%20Consecutive%20Numbers/%F0%9F%95%8D%20SQL%20-%20180.%20Consecutive%20Numbers.sql) |