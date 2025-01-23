
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2049%20%F0%9F%8C%BD%201327.%20List%20the%20Products%20Ordered%20in%20a%20Period)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2050%20%F0%9F%8C%BD%201517.%20Find%20Users%20With%20Valid%20E-Mails)

</br>
</br>

# 1517. Find Users With Valid E-Mails

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-users-with-valid-e-mails/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1517 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Users`

| Column Name   | Type    |
|---------------|---------|
| user_id       | int     |
| name          | varchar |
| mail          | varchar |

user_id is the primary key (column with unique values) for this table.</br>
This table contains information of the users signed up in a website. Some e-mails are invalid.

---

### Write a solution to find the users who have valid emails.

### A valid e-mail has a prefix name and a domain where:

- The prefix name is a string that may contain letters (upper or lower case), digits, underscore `'_'`, period `'.'`, and/or dash `'-'`. The prefix name must start with a letter.

- The domain is `'@leetcode.com'`.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Users table:

| user_id | name      | mail                    |
| ------- | --------- | ----------------------- |
| 1       | Winston   | winston@leetcode.com    |
| 2       | Jonathan  | jonathanisgreat         |
| 3       | Annabelle | bella-@leetcode.com     |
| 4       | Sally     | sally.come@leetcode.com |
| 5       | Marwan    | quarz#2020@leetcode.com |
| 6       | David     | david69@gmail.com       |
| 7       | Shapiro   | .shapo@leetcode.com     |

  ### 📤 `Output`  ➤

| user_id | name      | mail                    |
| ------- | --------- | ----------------------- |
| 1       | Winston   | winston@leetcode.com    |
| 3       | Annabelle | bella-@leetcode.com     |
| 4       | Sally     | sally.come@leetcode.com |

  ### 🔦 `Explanation`  ➤ </br> The mail of user 2 does not have a domain.</br> The mail of user 5 has the # sign which is not allowed.</br> The mail of user 6 does not have the leetcode domain.</br> The mail of user 7 starts with a period.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT * FROM Users
WHERE mail REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode[.]com$'

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2050%20%F0%9F%8C%BD%201517.%20Find%20Users%20With%20Valid%20E-Mails/%F0%9F%95%8D%20SQL%20-%201517.%20Find%20Users%20Wit.sql) |