
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2009%20%F0%9F%8C%BD%20197.%20Rising%20Temperature)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2011%20%F0%9F%8C%BD%20577.%20Employee%20Bonus)

</br>
</br>

# 1661. Average Time of Process per Machine

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/average-time-of-process-per-machine/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1661 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Activity`


| Column Name    | Type    |
|----------------|---------|
| machine_id     | int     |
| process_id     | int     |
| activity_type  | enum    |
| timestamp      | float   |

The table shows the user activities for a factory website.
(machine_id, process_id, activity_type) is the primary key (combination of columns with unique values) of this table.
machine_id is the ID of a machine.
process_id is the ID of a process running on the machine with ID machine_id.
activity_type is an ENUM (category) of type ('start', 'end').
timestamp is a float representing the current time in seconds.
'start' means the machine starts the process at the given timestamp and 'end' means the machine ends the process at the given timestamp.
The 'start' timestamp will always be before the 'end' timestamp for every (machine_id, process_id) pair.
It is guaranteed that each (machine_id, process_id) pair has a 'start' and 'end' timestamp.

---

### There is a factory website that has several machines each running the same number of processes. Write a solution to find the average time each machine takes to complete a process.

### The time to complete a process is the `'end' timestamp minus` the `'start' timestamp`. The average time is calculated by the total time to complete every process on the machine divided by the number of processes that were run.

### The resulting table should have the `machine_id` along with the average time as `processing_time`, which should be rounded to 3 decimal places.

### Return the result table in `any order`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Activity Table:

| machine_id | process_id | activity_type | timestamp |
| ---------- | ---------- | ------------- | --------- |
| 0          | 0          | start         | 0.712     |
| 0          | 0          | end           | 1.52      |
| 0          | 1          | start         | 3.14      |
| 0          | 1          | end           | 4.12      |
| 1          | 0          | start         | 0.55      |
| 1          | 0          | end           | 1.55      |
| 1          | 1          | start         | 0.43      |
| 1          | 1          | end           | 1.42      |
| 2          | 0          | start         | 4.1       |
| 2          | 0          | end           | 4.512     |
| 2          | 1          | start         | 2.5       |
| 2          | 1          | end           | 5         |

  ### 📤 `Output`  ➤

| machine_id | processing_time |
| ---------- | --------------- |
| 0          | 0.894           |
| 1          | 0.995           |
| 2          | 1.456           |

  ### 🔦 `Explanation`  ➤ There are 3 machines running 2 processes each.</br> Machine 0's average time is ((1.520 - 0.712) + (4.120 - 3.140)) / 2 = 0.894</br> Machine 1's average time is ((1.550 - 0.550) + (1.420 - 0.430)) / 2 = 0.995</br> Machine 2's average time is ((4.512 - 4.100) + (5.000 - 2.500)) / 2 = 1.456

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT a1.machine_id, Round(AVG(a2.timestamp  - a1.timestamp), 3) as processing_time 
FROM Activity a1
JOIN Activity a2
on a1.machine_id = a2.machine_id 
AND a1.process_id = a2.process_id
AND a1.timestamp < a2.timestamp 
GROUP BY a1.machine_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2010%20%F0%9F%8C%BD%201661.%20Average%20Time%20of%20Process%20per%20Machine/%F0%9F%95%8D%20SQL%20-%201661.%20Average%20Time%20of%20Process%20per%20Machine.sql) |