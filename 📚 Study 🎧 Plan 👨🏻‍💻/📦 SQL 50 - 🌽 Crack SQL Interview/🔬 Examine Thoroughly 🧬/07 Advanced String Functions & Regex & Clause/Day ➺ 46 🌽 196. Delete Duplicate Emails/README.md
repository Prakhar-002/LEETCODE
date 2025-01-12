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

id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.

---

### Write a solution to delete all duplicate emails, keeping only one unique email with the smallest id.

### For SQL users, please note that you are supposed to write a DELETE statement and not a SELECT one.

### For Pandas users, please note that you are supposed to modify Person in place.

### After running your script, the answer shown is the Person table. The driver will first compile and run your piece of code and then show the Person table. The final order of the Person table does not matter.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Person table:

  ### 📤 `Output`  ➤

  ### 🔦 `Explanation`  ➤ john@example.com is repeated two times. We keep the row with the smallest Id = 1.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |