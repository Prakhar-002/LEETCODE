# Q4. Movie Rating

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/movie-rating/?envType=problem-list-v2&envId=db-db3-grouping-aggregation"><strong>➥ ☢️ Q4 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Movies

| Column Name   | Type    |
|---------------|---------|
| movie_id      | int     |
| title         | varchar |

movie_id is the primary key (column with unique values) for this table.
title is the name of the movie.
Each movie has a unique title.

</br>

### Table: Users

| Column Name   | Type    |
|---------------|---------|
| user_id       | int     |
| name          | varchar |

user_id is the primary key (column with unique values) for this table.
The column 'name' has unique values.

</br>

### Table: MovieRating

| Column Name   | Type    |
|---------------|---------|
| movie_id      | int     |
| user_id       | int     |
| rating        | int     |
| created_at    | date    |

(movie_id, user_id) is the primary key (column with unique values) for this table.
This table contains the rating of a movie by a user in their review.
created_at is the user's review date.

</br>

### Write a solution to:

1. Find the name of the user who has rated the greatest number of movies. In case of a tie, return the lexicographically smaller user name.
2. Find the movie name with the highest average rating in February 2020. In case of a tie, return the lexicographically smaller movie name.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Movies table:

| movie_id    | title       |
|-------------|-------------|
| 1           | Avengers    |
| 2           | Frozen 2    |
| 3           | Joker       |

</br>

### Users table:

| user_id     | name        |
|-------------|-------------|
| 1           | Daniel      |
| 2           | Monica      |
| 3           | Maria       |
| 4           | James       |

</br>

### MovieRating table:

| movie_id    | user_id      | rating       | created_at  |
|-------------|--------------|--------------|-------------|
| 1           | 1            | 3            | 2020-01-12  |
| 1           | 2            | 4            | 2020-02-11  |
| 1           | 3            | 2            | 2020-02-12  |
| 1           | 4            | 1            | 2020-01-01  |
| 2           | 1            | 5            | 2020-02-17  |
| 2           | 2            | 2            | 2020-02-01  |
| 2           | 3            | 2            | 2020-03-01  |
| 3           | 1            | 3            | 2020-02-22  |
| 3           | 2            | 4            | 2020-02-25  |

</br>

  ### 📤 `Output`  ➤

| results      |
|--------------|
| Daniel       |
| Frozen 2     |

</br>

  ### 🔦 `Explanation`  ➤
  ### Daniel and Monica have rated 3 movies ("Avengers", "Frozen 2" and "Joker") but Daniel is smaller lexicographically.
  ### Frozen 2 and Joker have a rating average of 3.5 in February but Frozen 2 is smaller lexicographically.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

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
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q4.%20Movie%20Rating/%F0%9F%95%8D%20SQL%20-%20Q4.%20Movie%20Rating.sql) |