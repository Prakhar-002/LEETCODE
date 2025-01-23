
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2027%20%F0%9F%8C%BD1729.%20Find%20Followers%20Count)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2029%20%F0%9F%8C%BD1045.%20Customers%20Who%20Bought%20All%20Products)

</br>
</br>

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

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT MAX(num) AS num FROM 
(SELECT num 
FROM MyNumbers 
GROUP BY num
HAVING COUNT(num) = 1) AS distinct_num

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2028%20%F0%9F%8C%BD619.%20Biggest%20Single%20Number/%F0%9F%95%8D%20SQL%20-%20619.%20Biggest%20Single%20Number.sql) |