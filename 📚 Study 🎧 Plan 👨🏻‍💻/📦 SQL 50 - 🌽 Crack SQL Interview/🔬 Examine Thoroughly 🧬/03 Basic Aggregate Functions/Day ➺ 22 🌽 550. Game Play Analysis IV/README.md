# 550. Game Play Analysis IV

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/game-play-analysis-iv/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Activity`

+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| player_id    | int     |
| device_id    | int     |
| event_date   | date    |
| games_played | int     |
+--------------+---------+
(player_id, event_date) is the primary key (combination of columns with unique values) of this table.</br>
This table shows the activity of players of some games.</br>
Each row is a record of a player who logged in and played a number of games (possibly 0) before logging out on someday using some device.

---

### Write a solution to report the fraction of players that logged in again on the day after the day they first logged in, rounded to 2 decimal places. In other words, you need to count the number of players that logged in for at least two consecutive days starting from their first login date, then divide that number by the total number of players.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Activity table:

| player_id | device_id | event_date | games_played |
| --------- | --------- | ---------- | ------------ |
| 1         | 2         | 2016-03-01 | 5            |
| 1         | 2         | 2016-03-02 | 6            |
| 2         | 3         | 2017-06-25 | 1            |
| 3         | 1         | 2016-03-02 | 0            |
| 3         | 4         | 2018-07-03 | 5            |

  ### 📤 `Output`  ➤

| fraction |
| -------- |
| 0.33     |

  ### 🔦 `Explanation`  ➤ Only the player with id 1 logged back in after the first day he had logged in so the answer is 1/3 = 0.33

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |