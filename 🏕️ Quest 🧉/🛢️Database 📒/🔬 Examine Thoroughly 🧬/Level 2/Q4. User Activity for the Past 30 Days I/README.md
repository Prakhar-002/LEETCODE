# Q4. User Activity for the Past 30 Days I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/user-activity-for-the-past-30-days-i/?envType=problem-list-v2&envId=db-db2-filtering-aggregation"><strong>➥ ♻️ Q4 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Activity

| Column Name   | Type    |
|---------------+---------|
| user_id       | int     |
| session_id    | int     |
| activity_date | date    |
| activity_type | enum    |

This table may have duplicate rows.
The activity_type column is an ENUM (category) of type ('open_session', 'end_session', 'scroll_down', 'send_message').
The table shows the user activities for a social media website. 
Note that each session belongs to exactly one user.

</br>

### Write a solution to find the daily active user count for a period of 30 days ending 2019-07-27 inclusively. A user was active on a day if they made at least one activity on that day.

### Return the result table in any order.

### Note: Any activity from ('open_session', 'end_session', 'scroll_down', 'send_message') will be considered valid activity for a user to be considered active on a day.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Activity table:

| user_id | session_id | activity_date | activity_type |
|---------|------------|---------------|---------------|
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

</br>

  ### 📤 `Output`  ➤

| day        | active_users |
|------------|--------------|
| 2019-07-20 | 2            |
| 2019-07-21 | 2            |

</br>

  ### 🔦 `Explanation`  ➤ Note that we do not care about days with zero active users.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

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

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q4.%20User%20Activity%20for%20the%20Past%2030%20Days%20I/%F0%9F%95%8D%20SQL%20-%20User%20Activity%20for%20the%20Past%2030%20Days%20I.sql) |