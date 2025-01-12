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
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2034%20%F0%9F%8C%BD1164.%20Product%20Price%20at%20a%20Given%20Date/%F0%9F%95%8D%20SQL%20-%201164.%20Product%20Price%20at%20a%20Given%20Date.sql) |