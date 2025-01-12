# 1729. Find Followers Count

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-followers-count/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1729 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Followers`

| Column Name | Type |
|-------------|------|
| user_id     | int  |
| follower_id | int  |

(user_id, follower_id) is the primary key (combination of columns with unique values) for this table.</br>
This table contains the IDs of a user and a follower in a social media app where the follower follows the user.

---

### Write a solution that will, for each user, return the number of followers.

### Return the result table ordered by `user_id` in ascending order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Followers table:

| user_id | follower_id |
| ------- | ----------- |
| 0       | 1           |
| 1       | 0           |
| 2       | 0           |
| 2       | 1           |

  ### 📤 `Output`  ➤

| user_id | followers_count |
| ------- | --------------- |
| 0       | 1               |
| 1       | 1               |
| 2       | 2               |

  ### 🔦 `Explanation`  ➤ </br> The followers of 0 are {1}</br> The followers of 1 are {0}</br> The followers of 2 are {0,1}

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2027%20%F0%9F%8C%BD1729.%20Find%20Followers%20Count/%F0%9F%95%8D%20SQL%20-%201729.%20Find%20Followers%20Count.sql) |