# 1211. Queries Quality and Percentage

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/queries-quality-and-percentage/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1211 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Queries`


| Column Name | Type    |
|-------------|---------|
| query_name  | varchar |
| result      | varchar |
| position    | int     |
| rating      | int     |

This table may have duplicate rows.
This table contains information collected from some queries on a database.</br>
The `position` column has a value from **1** to **500**.</br>
The `rating` column has a value from **1** to **5**. Query with `rating` less than 3 is a poor query.

---

### We define query `quality` as:

- The average of the ratio between query rating and its position.

### We also define `poor query percentage` as:

- The percentage of all queries with rating less than 3.

### Write a solution to find each `query_name`, the `quality` and `poor_query_percentage`.

### Both `quality` and `poor_query_percentage` should be rounded to 2 decimal places.

### Return the result table in `any order`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `Queries` table:

| query_name | result           | position | rating |
| ---------- | ---------------- | -------- | ------ |
| Dog        | Golden Retriever | 1        | 5      |
| Dog        | German Shepherd  | 2        | 5      |
| Dog        | Mule             | 200      | 1      |
| Cat        | Shirazi          | 5        | 2      |
| Cat        | Siamese          | 3        | 3      |
| Cat        | Sphynx           | 7        | 4      |

  ### 📤 `Output`  ➤

| query_name | quality | poor_query_percentage |
| ---------- | ------- | --------------------- |
| Dog        | 2.5     | 33.33                 |
| Cat        | 0.66    | 33.33                 |

  ### 🔦 `Explanation`  ➤ Dog queries quality is ((5 / 1) + (5 / 2) + (1 / 200)) / 3 = 2.50</br> Dog queries poor_ query_percentage is (1 / 3) * 100 = 33.33</br>  </br> Cat queries quality equals ((2 / 5) + (3 / 3) + (4 / 7)) / 3 = 0.6</br> Cat queries poor_ query_percentage is (1 / 3) * 100 = 33.33

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |