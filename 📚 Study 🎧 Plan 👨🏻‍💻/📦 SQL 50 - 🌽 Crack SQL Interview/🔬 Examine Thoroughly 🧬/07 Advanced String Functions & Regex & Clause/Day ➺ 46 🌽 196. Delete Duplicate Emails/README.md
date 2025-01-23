
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2045%20%F0%9F%8C%BD1527.%20Patients%20With%20a%20Condition)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2047%20%F0%9F%8C%BD%20176.%20Second%20Highest%20Salary)

</br>
</br>

# 196. Delete Duplicate Emails

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-duplicate-emails/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 196 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Person`

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| email       | varchar |

id is the primary key (column with unique values) for this table.</br>
Each row of this table contains an email. </br>The emails will not contain uppercase letters.

---

### Write a solution to delete all duplicate emails, keeping only one unique email with the smallest id.

### For SQL users, please note that you are supposed to write a DELETE statement and not a SELECT one.

### For Pandas users, please note that you are supposed to modify Person in place.

### After running your script, the answer shown is the Person table. The driver will first compile and run your piece of code and then show the Person table. The final order of the Person table does not matter.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Person table:

| id | email            |
| -- | ---------------- |
| 1  | john@example.com |
| 2  | bob@example.com  |
| 3  | john@example.com |

  ### 📤 `Output`  ➤

| id | email            |
| -- | ---------------- |
| 1  | john@example.com |
| 2  | bob@example.com  |

  ### 🔦 `Explanation`  ➤ john@example.com is repeated two times. We keep the row with the smallest Id = 1.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

DELETE p1
FROM Person p1
INNER JOIN Person p2
ON p1.email = p2.email 
AND p1.id > p2.id

```

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2046%20%F0%9F%8C%BD%20196.%20Delete%20Duplicate%20Emails/%F0%9F%95%8D%20SQL%20-%20196.%20Delete%20Duplicate%20Email.sql) |