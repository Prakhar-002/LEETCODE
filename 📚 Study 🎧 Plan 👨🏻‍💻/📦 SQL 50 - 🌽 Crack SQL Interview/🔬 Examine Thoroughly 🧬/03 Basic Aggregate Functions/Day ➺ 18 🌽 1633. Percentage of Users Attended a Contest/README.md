# 1633. Percentage of Users Attended a Contest

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/percentage-of-users-attended-a-contest/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1633 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Users`

| Column Name | Type    |
|-------------|---------|
| user_id     | int     |
| user_name   | varchar |

user_id is the primary key (column with unique values) for this table.</br>
Each row of this table contains the name and the id of a user.

---

### Table: `Register`

| Column Name | Type    |
|-------------|---------|
| contest_id  | int     |
| user_id     | int     |

(contest_id, user_id) is the primary key (combination of columns with unique values) for this table.</br>
Each row of this table contains the id of a user and the contest they registered into.

---

### Write a solution to find the percentage of the users registered in each contest rounded to two decimals.

### Return the result table ordered by `percentage` in descending order. In case of a tie, order it by `contest_id` in ascending order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `Users` table:

| user_id | user_name |
| ------- | --------- |
| 6       | Alice     |
| 2       | Bob       |
| 7       | Alex      |

### `Register` table:

| contest_id | user_id |
| ---------- | ------- |
| 215        | 6       |
| 209        | 2       |
| 208        | 2       |
| 210        | 6       |
| 208        | 6       |
| 209        | 7       |
| 209        | 6       |
| 215        | 7       |
| 208        | 7       |
| 210        | 2       |
| 207        | 2       |
| 210        | 7       |

  ### 📤 `Output`  ➤

| contest_id | percentage |
| ---------- | ---------- |
| 208        | 100        |
| 209        | 100        |
| 210        | 100        |
| 215        | 66.67      |
| 207        | 33.33      |

  ### 🔦 `Explanation`  ➤ All the users registered in contests 208, 209, and 210. The percentage is 100% and we sort them in the answer table by contest_id in ascending order.</br> Alice and Alex registered in contest 215 and the percentage is ((2/3) * 100) = 66.67%</br> Bob registered in contest 207 and the percentage is ((1/3) * 100) = 33.33%

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2018%20%F0%9F%8C%BD%201633.%20Percentage%20of%20Users%20Attended%20a%20Contest/%F0%9F%95%8D%20SQL%20-%201633.%20Percentage%20of%20Users%20At.sql) |