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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |