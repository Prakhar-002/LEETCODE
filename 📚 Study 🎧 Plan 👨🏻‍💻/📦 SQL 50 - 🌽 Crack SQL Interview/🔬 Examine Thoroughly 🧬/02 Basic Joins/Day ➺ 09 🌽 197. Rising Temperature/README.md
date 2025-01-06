# 197. Rising Temperature

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rising-temperature/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 197 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Weather

| Column Name   | Type    |
|---------------|---------|
| id            | int     |
| recordDate    | date    |
| temperature   | int     |

id is the column with unique values for this table.
There are no different rows with the same recordDate.
This table contains information about the temperature on a certain day.

---

### Write a solution to find all dates' `id` with higher temperatures compared to its previous dates (yesterday).

### Return the result table in `any order`.

T### he result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Weather table:

| id | recordDate | temperature |
| -- | ---------- | ----------- |
| 1  | 2015-01-01 | 10          |
| 2  | 2015-01-02 | 25          |
| 3  | 2015-01-03 | 20          |
| 4  | 2015-01-04 | 30          |

  ### 📤 `Output`  ➤

| Id |
| -- |
| 2  |
| 4  |

  ### 🔦 `Explanation`  ➤ In 2015-01-02, the temperature was higher than the previous day (10 -> 25).</br> In 2015-01-04, the temperature was higher than the previous day (20 -> 30).

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2009%20%F0%9F%8C%BD%20197.%20Rising%20Temperature/%F0%9F%95%8D%20SQL%20-%20197.%20Rising%20Temperature.sql) |