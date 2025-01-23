
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2023%20%F0%9F%8C%BD2356.%20Number%20of%20Unique%20Subjects%20Taught%20by%20Each%20Teacher)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2025%20%F0%9F%8C%BD1070.%20Product%20Sales%20Analysis%20III)

</br>
</br>

# 1141. User Activity for the Past 30 Days I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/user-activity-for-the-past-30-days-i/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1141 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Activity

| Column Name   | Type    |
|---------------|---------|
| user_id       | int     |
| session_id    | int     |
| activity_date | date    |
| activity_type | enum    |

This table may have duplicate rows.</br>
The activity_type column is an ENUM (category) of type ('open_session', 'end_session', 'scroll_down', 'send_message').</br>
The table shows the user activities for a social media website. </br>
Note that each session belongs to exactly one user.

---

### Write a solution to find the daily active user count for a period of `30` days ending `2019-07-27` inclusively. A user was active on someday if they made at least one activity on that day.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| user_id | session_id | activity_date | activity_type |
| ------- | ---------- | ------------- | ------------- |
| 1       | 1          | 2019-07-20    | open_session  |
| 1       | 1          | 2019-07-20    | scroll_down   |
| 1       | 1          | 2019-07-20    | end_session   |
| 2       | 4          | 2019-07-20    | open_session  |
| 2       | 4          | 2019-07-21    | send_message  |
| 2       | 4          | 2019-07-21    | end_session   |
| 3       | 2          | 2019-07-21    | open_session  |
| 3       | 2          | 2019-07-21    | send_message  |
| 3       | 2          | 2019-07-21    | end_session   |
| 4       | 3          | 2019-06-25    | open_session  |
| 4       | 3          | 2019-06-25    | end_session   |

  ### 📤 `Output`  ➤

| day        | active_users |
| ---------- | ------------ |
| 2019-07-20 | 2            |
| 2019-07-21 | 2            |

  ### 🔦 `Explanation`  ➤ Note that we do not care about days with zero active users.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT 
      activity_date AS day,
      COUNT(DISTINCT user_id ) AS active_users
FROM Activity 
WHERE activity_date BETWEEN date_sub('2019-07-27', interval 29 day) AND '2019-07-27'
GROUP BY day

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2024%20%F0%9F%8C%BD1141.%20User%20Activity%20for%20the%20Past%2030%20Days%20I/%F0%9F%95%8D%20SQL%20-%201141.%20User%20Activity%20for%20the%20Past%2030%20.sql) |