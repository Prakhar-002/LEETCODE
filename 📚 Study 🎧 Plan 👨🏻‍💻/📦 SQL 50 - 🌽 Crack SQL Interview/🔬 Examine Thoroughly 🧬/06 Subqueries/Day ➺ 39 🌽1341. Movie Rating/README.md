
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2038%20%F0%9F%8C%BD626.%20Exchange%20Seats)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2040%20%F0%9F%8C%BD1321.%20Restaurant%20Growth)

</br>
</br>

# 1341. Movie Rating

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/movie-rating/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1341 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Movies`

| Column Name   | Type    |
|---------------|---------|
| movie_id      | int     |
| title         | varchar |

movie_id is the primary key (column with unique values) for this table.</br>
title is the name of the movie.

### Table: `Users`

| Column Name   | Type    |
|---------------|---------|
| user_id       | int     |
| name          | varchar |

user_id is the primary key (column with unique values) for this table.</br>
The column 'name' has unique values.

### Table: `MovieRating`

| Column Name   | Type    |
|---------------|---------|
| movie_id      | int     |
| user_id       | int     |
| rating        | int     |
| created_at    | date    |

(movie_id, user_id) is the primary key (column with unique values) for this table.</br>
This table contains the rating of a movie by a user in their review.</br>
created_at is the user's review date. 

---

### Write a solution to:

- Find the name of the user who has rated the greatest number of movies. In case of a tie, return the lexicographically smaller user name.

- Find the movie name with the highest average rating in `February 2020`. In case of a tie, return the lexicographically smaller movie name.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Movies table:

| movie_id | title    |
| -------- | -------- |
| 1        | Avengers |
| 2        | Frozen 2 |
| 3        | Joker    |

### Users table:

| user_id | name   |
| ------- | ------ |
| 1       | Daniel |
| 2       | Monica |
| 3       | Maria  |
| 4       | James  |

### MovieRating table:

| movie_id | user_id | rating | created_at |
| -------- | ------- | ------ | ---------- |
| 1        | 1       | 3      | 2020-01-12 |
| 1        | 2       | 4      | 2020-02-11 |
| 1        | 3       | 2      | 2020-02-12 |
| 1        | 4       | 1      | 2020-01-01 |
| 2        | 1       | 5      | 2020-02-17 |
| 2        | 2       | 2      | 2020-02-01 |
| 2        | 3       | 2      | 2020-03-01 |
| 3        | 1       | 3      | 2020-02-22 |
| 3        | 2       | 4      | 2020-02-25 |

  ### 📤 `Output`  ➤

| results  |
| -------- |
| Daniel   |
| Frozen 2 |

  ### 🔦 `Explanation`  ➤ Daniel and Monica have rated 3 movies ("Avengers", "Frozen 2" and "Joker") but Daniel is smaller lexicographically.</br> Frozen 2 and Joker have a rating average of 3.5 in February but Frozen 2 is smaller lexicographically.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

(
SELECT u.name AS results
FROM Users u 
LEFT JOIN MovieRating mr 
ON u.user_id = mr.user_id
GROUP BY u.user_id
ORDER BY COUNT(mr.user_id) DESC , u.name 
LIMIT 1
)

UNION ALL

(
SELECT m.title AS results
FROM Movies m 
LEFT JOIN MovieRating mr 
ON m.movie_id = mr.movie_id
WHERE EXTRACT(year_month FROM created_at) = 202002 
GROUP BY m.movie_id
ORDER BY AVG(mr.rating) DESC , m.title 
LIMIT 1
)

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2039%20%F0%9F%8C%BD1341.%20Movie%20Rating/%F0%9F%95%8D%20SQL%20-%201341.%20Movie%20Rating.sql) |