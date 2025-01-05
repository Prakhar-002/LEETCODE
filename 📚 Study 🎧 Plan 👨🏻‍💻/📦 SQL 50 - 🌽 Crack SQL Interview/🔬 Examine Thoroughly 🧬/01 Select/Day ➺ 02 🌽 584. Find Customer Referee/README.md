# 584. Find Customer Referee

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-customer-referee/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 584 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Customer`


| Column Name | Type    |
|-------------|---------|
| id          | int     |
| name        | varchar |
| referee_id  | int     |

In SQL, id is the primary key column for this table.
Each row of this table indicates the id of a customer, their name, and the id of the customer who referred them.

---

### Find the names of the customer that are not referred by the customer with `id = 2`.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Customer table:

| id | name | referee_id |
| -- | ---- | ---------- |
| 1  | Will | null       |
| 2  | Jane | null       |
| 3  | Alex | 2          |
| 4  | Bill | null       |
| 5  | Zack | 1          |
| 6  | Mark | 2          |

  ### 📤 `Output`  ➤

| name |
| ---- |
| Will |
| Jane |
| Bill |
| Zack |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |