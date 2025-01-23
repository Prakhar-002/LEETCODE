
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Select/Day%20%E2%9E%BA%2004%20%F0%9F%8C%BD%201148.%20Article%20Views%20I)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Basic%20Joins/Day%20%E2%9E%BA%2006%20%F0%9F%8C%BD%201378.%20Replace%20Employee%20ID%20With%20The%20Unique%20Identifier)

</br>
</br>

# 1683. Invalid Tweets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/invalid-tweets/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1683 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Tweets`

| Column Name    | Type    |
| ---------------|---------|
| tweet_id       | int     |
| content        | varchar |


tweet_id is the primary key (column with unique values) for this table.
content consists of characters on an American Keyboard, and no other special characters.
This table contains all the tweets in a social media app.

---

### Write a solution to find the IDs of the invalid tweets. The tweet is invalid if the number of characters used in the content of the tweet is strictly greater than 15.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Tweets table:

| tweet_id | content                           |
| -------- | --------------------------------- |
| 1        | Let us Code                       |
| 2        | More than fifteen chars are here! |

  ### 📤 `Output`  ➤

| tweet_id |
| -------- |
| 2        |

  ### 🔦 `Explanation`  ➤ </br> Tweet 1 has length = 11. It is a valid tweet.</br> Tweet 2 has length = 33. It is an invalid tweet.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT tweet_id 
FROM Tweets
WHERE length(content) > 15

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Select/Day%20%E2%9E%BA%2005%20%F0%9F%8C%BD%201683.%20Invalid%20Tweets/%F0%9F%95%8D%20SQL%20-%201683.%20Invalid%20Tweets.sql) |