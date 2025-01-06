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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |