
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2043%20%F0%9F%8C%BD%20185.%20Department%20Top%20Three%20Salaries)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2045%20%F0%9F%8C%BD1527.%20Patients%20With%20a%20Condition)

</br>
</br>

# 1667. Fix Names in a Table

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/fix-names-in-a-table/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1667 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Users`

| Column Name    | Type    |
|----------------|---------|
| user_id        | int     |
| name           | varchar |

user_id is the primary key (column with unique values) for this table.</br>
This table contains the ID and the name of the user. </br>The name consists of only lowercase and uppercase characters.

---

### Write a solution to fix the names so that only the first character is uppercase and the rest are lowercase.

### Return the result table ordered by user_id.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| user_id | name  |
| ------- | ----- |
| 1       | aLice |
| 2       | bOB   |

  ### 📤 `Output`  ➤

| user_id | name  |
| ------- | ----- |
| 1       | Alice |
| 2       | Bob   |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT user_id ,
CONCAT(UPPER(LEFT(name, 1)), LOWER(RIGHT(name, LENGTH(name) - 1))) AS name 
FROM Users 
ORDER BY user_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2044%20%F0%9F%8C%BD1667.%20Fix%20Names%20in%20a%20Table/%F0%9F%95%8D%20SQL%20-%201667.%20Fix%20Names%20in%20a%20Table.sql) |