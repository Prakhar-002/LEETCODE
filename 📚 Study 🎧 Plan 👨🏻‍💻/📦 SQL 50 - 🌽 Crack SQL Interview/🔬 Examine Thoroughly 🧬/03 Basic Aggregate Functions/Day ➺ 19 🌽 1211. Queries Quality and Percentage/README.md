
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2018%20%F0%9F%8C%BD%201633.%20Percentage%20of%20Users%20Attended%20a%20Contest)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2020%20%F0%9F%8C%BD%201193.%20Monthly%20Transactions%20I)

</br>
</br>

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

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT query_name ,
      ROUND(AVG(rating / position), 2) AS quality ,
      ROUND(AVG(IF(rating < 3, 1, 0) * 100), 2) AS poor_query_percentage
FROM queries
WHERE query_name IS NOT NULL
GROUP BY query_name

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2019%20%F0%9F%8C%BD%201211.%20Queries%20Quality%20and%20Percentage/%F0%9F%95%8D%20SQL%20-%201211.%20Queries%20Quality%20and%20Percentage.sql) |