# Q1. Trips and Users

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/trips-and-users/?envType=problem-list-v2&envId=db-db4-window-functions-ranking"><strong>➥ 🫀 Q1 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Trips

| Column Name | Type     |
|-------------|----------|
| id          | int      |
| client_id   | int      |
| driver_id   | int      |
| city_id     | int      |
| status      | enum     |
| request_at  | varchar  |

id is the primary key (column with unique values) for this table.
The table holds all taxi trips. Each trip has a unique id, while client_id and driver_id are foreign keys to the users_id at the Users table.
Status is an ENUM (category) type of ('completed', 'cancelled_by_driver', 'cancelled_by_client').

</br>

### Table: Users

| Column Name | Type     |
|-------------|----------|
| users_id    | int      |
| banned      | enum     |
| role        | enum     |

users_id is the primary key (column with unique values) for this table.
The table holds all users. Each user has a unique users_id, and role is an ENUM type of ('client', 'driver', 'partner').
banned is an ENUM (category) type of ('Yes', 'No').

</br>

### The cancellation rate is computed by dividing the number of canceled (by client or driver) requests with unbanned users by the total number of requests with unbanned users on that day.

### Write a solution to find the cancellation rate of requests with unbanned users (both client and driver must not be banned) each day between "2013-10-01" and "2013-10-03" with at least one trip. Round Cancellation Rate to two decimal points.

### Return the result table in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Trips table:

| id | client_id | driver_id | city_id | status              | request_at |
|----|-----------|-----------|---------|---------------------|------------|
| 1  | 1         | 10        | 1       | completed           | 2013-10-01 |
| 2  | 2         | 11        | 1       | cancelled_by_driver | 2013-10-01 |
| 3  | 3         | 12        | 6       | completed           | 2013-10-01 |
| 4  | 4         | 13        | 6       | cancelled_by_client | 2013-10-01 |
| 5  | 1         | 10        | 1       | completed           | 2013-10-02 |
| 6  | 2         | 11        | 6       | completed           | 2013-10-02 |
| 7  | 3         | 12        | 6       | completed           | 2013-10-02 |
| 8  | 2         | 12        | 12      | completed           | 2013-10-03 |
| 9  | 3         | 10        | 12      | completed           | 2013-10-03 |
| 10 | 4         | 13        | 12      | cancelled_by_driver | 2013-10-03 |

</br>

### Users table:

| users_id | banned | role   |
|----------|--------|--------|
| 1        | No     | client |
| 2        | Yes    | client |
| 3        | No     | client |
| 4        | No     | client |
| 10       | No     | driver |
| 11       | No     | driver |
| 12       | No     | driver |
| 13       | No     | driver |

</br>

  ### 📤 `Output`  ➤

| Day        | Cancellation Rate |
|------------|-------------------|
| 2013-10-01 | 0.33              |
| 2013-10-02 | 0.00              |
| 2013-10-03 | 0.50              |

</br>

  ### 🔦 `Explanation`  ➤
  ### On 2013-10-01:
  ### - There were 4 requests in total, 2 of which were canceled.
  ### - However, the request with Id=2 was made by a banned client (User_Id=2), so it is ignored in the calculation.
  ### - Hence there are 3 unbanned requests in total, 1 of which was canceled.
  ### - The Cancellation Rate is (1 / 3) = 0.33
  ### On 2013-10-02:
  ### - There were 3 requests in total, 0 of which were canceled.
  ### - The request with Id=6 was made by a banned client, so it is ignored.
  ### - Hence there are 2 unbanned requests in total, 0 of which were canceled.
  ### - The Cancellation Rate is (0 / 2) = 0.00
  ### On 2013-10-03:
  ### - There were 3 requests in total, 1 of which was canceled.
  ### - The request with Id=8 was made by a banned client, so it is ignored.
  ### - Hence there are 2 unbanned request in total, 1 of which were canceled.
  ### - The Cancellation Rate is (1 / 2) = 0.50

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT Request_at as Day,
    ROUND(COUNT(IF(Status != 'completed', TRUE, NULL)) / COUNT(*), 2) 
    AS 'Cancellation Rate'
FROM Trips
WHERE (Request_at BETWEEN '2013-10-01' AND '2013-10-03')
    AND Client_id NOT IN (SELECT Users_Id FROM Users WHERE Banned = 'Yes')
GROUP BY Request_at;
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Q1.%20Trips%20and%20Users/%F0%9F%95%8D%20SQL%20-%20Trips%20and%20Users.sql) |