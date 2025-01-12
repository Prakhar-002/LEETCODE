# 602. Friend Requests II: Who Has the Most Friends

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/friend-requests-ii-who-has-the-most-friends/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 602 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `RequestAccepted`

| Column Name    | Type    |
|----------------|---------|
| requester_id   | int     |
| accepter_id    | int     |
| accept_date    | date    |

(requester_id, accepter_id) is the primary key (combination of columns with unique values) for this table.</br>
This table contains the ID of the user who sent the request, the ID of the user who received the request, and the date when the request was accepted.

---

### Write a solution to find the people who have the most friends and the most friends number.

### The test cases are generated so that only one person has the most friends.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `RequestAccepted` table:

| requester_id | accepter_id | accept_date |
| ------------ | ----------- | ----------- |
| 1            | 2           | 2016/06/03  |
| 1            | 3           | 2016/06/08  |
| 2            | 3           | 2016/06/08  |
| 3            | 4           | 2016/06/09  |

  ### 📤 `Output`  ➤

| id | num |
| -- | --- |
| 3  | 3   |

  ### 🔦 `Explanation`  ➤ The person with id 3 is a friend of people 1, 2, and 4, so he has three friends in total, which is the most number than any others.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2041%20%F0%9F%8C%BD%20602.%20Friend%20Requests%20II%20Who%20Has%20the%20Most%20Friends/%F0%9F%95%8D%20SQL%20-%20602.%20Friend%20Requests%20II%20Who%20Has%20the%20Mos.sql) |