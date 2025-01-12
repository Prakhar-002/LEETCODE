# 1164. Product Price at a Given Date

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/product-price-at-a-given-date/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1164 Leetcode Medium ☢️</strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Products`

| Column Name   | Type    |
|---------------|---------|
| product_id    | int     |
| new_price     | int     |
| change_date   | date    |

(product_id, change_date) is the primary key (combination of columns with unique values) of this table.</br>
Each row of this table indicates that the price of some product was changed to a new price at some date.

---

### Write a solution to find the prices of all products on `2019-08-16`. Assume the price of all products before any change is `10`.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Products table:

| product_id | new_price | change_date |
| ---------- | --------- | ----------- |
| 1          | 20        | 2019-08-14  |
| 2          | 50        | 2019-08-14  |
| 1          | 30        | 2019-08-15  |
| 1          | 35        | 2019-08-16  |
| 2          | 65        | 2019-08-17  |
| 3          | 20        | 2019-08-18  |

  ### 📤 `Output`  ➤

| product_id | price |
| ---------- | ----- |
| 1          | 35    |
| 2          | 50    |
| 3          | 10    |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |