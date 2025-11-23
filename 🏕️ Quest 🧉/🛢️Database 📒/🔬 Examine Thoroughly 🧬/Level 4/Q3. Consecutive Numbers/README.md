# Q3. Consecutive Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/consecutive-numbers/description/?envType=problem-list-v2&envId=db-db4-window-functions-ranking"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Logs

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| num         | varchar |

In SQL, id is the primary key for this table.
id is an autoincrement column starting from 1.

</br>

### Find all numbers that appear at least three times consecutively.

### Return the result table in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Logs table:

| id | num |
|----|-----|
| 1  | 1   |
| 2  | 1   |
| 3  | 1   |
| 4  | 2   |
| 5  | 1   |
| 6  | 2   |
| 7  | 2   |

</br>

  ### 📤 `Output`  ➤

| ConsecutiveNums |
|-----------------|
| 1               |

</br>

  ### 🔦 `Explanation`  ➤ 1 is the only number that appears consecutively for at least three times.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

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
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |