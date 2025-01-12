# 619. Biggest Single Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/biggest-single-number/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 619 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `MyNumbers`

| Column Name | Type |
|-------------|------|
| num         | int  |

This table may contain duplicates (In other words, there is no primary key for this table in SQL).
Each row of this table contains an integer.

---

### A single number is a number that appeared only once in the `MyNumbers` table.

### Find the largest single number. If there is no single number, report `null`.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ MyNumbers table:

| num |
| --- |
| 8   |
| 8   |
| 3   |
| 3   |
| 1   |
| 4   |
| 5   |
| 6   |

  ### 📤 `Output`  ➤

| num |
| --- |
| 6   |

  ### 🔦 `Explanation`  ➤ The single numbers are 1, 4, 5, and 6.</br> Since 6 is the largest single number, we return it.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ MyNumbers table:

| num |
| --- |
| 8   |
| 8   |
| 7   |
| 7   |
| 3   |
| 3   |
| 3   |

  ### 📤 `Output`  ➤

| num  |
| ---- |
| null |

  ### 🔦 `Explanation`  ➤  There are no single numbers in the input table so we return null.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |