
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2014%20%F0%9F%8C%BD%201934.%20Confirmation%20Rate)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2016%20%F0%9F%8C%BD%201251.%20Average%20Selling%20Price)

</br>
</br>

# 620. Not Boring Movies

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/not-boring-movies/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 620 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Cinema`

| Column Name    | Type     |
|----------------|----------|
| id             | int      |
| movie          | varchar  |
| description    | varchar  |
| rating         | float    |

id is the primary key (column with unique values) for this table.</br>
Each row contains information about the name of a movie, its genre, and its rating.</br>
rating is a 2 decimal places float in the range [0, 10]

---

### Write a solution to report the movies with an odd-numbered ID and a description that is not `"boring"`.

### Return the result table ordered by `rating` in `descending order`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Cinema table:

| id | movie      | description | rating |
| -- | ---------- | ----------- | ------ |
| 1  | War        | great 3D    | 8.9    |
| 2  | Science    | fiction     | 8.5    |
| 3  | irish      | boring      | 6.2    |
| 4  | Ice song   | Fantacy     | 8.6    |
| 5  | House card | Interesting | 9.1    |

  ### 📤 `Output`  ➤

| id | movie      | description | rating |
| -- | ---------- | ----------- | ------ |
| 5  | House card | Interesting | 9.1    |
| 1  | War        | great 3D    | 8.9    |

  ### 🔦 `Explanation`  ➤ We have three movies with odd-numbered IDs: 1, 3, and 5. The movie with ID = 3 is boring so we do not include it in the answer.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT * FROM cinema 
WHERE id % 2 != 0
AND description != 'boring'
ORDER BY rating DESC

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2015%20%F0%9F%8C%BD%20620.%20Not%20Boring%20Movies/%F0%9F%95%8D%20SQL%20-%20620.%20Not%20Boring%20Movies.sql) |