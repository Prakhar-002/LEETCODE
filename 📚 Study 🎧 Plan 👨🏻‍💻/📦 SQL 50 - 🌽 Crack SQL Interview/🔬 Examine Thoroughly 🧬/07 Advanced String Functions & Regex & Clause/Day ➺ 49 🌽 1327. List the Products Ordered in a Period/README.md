# 1327. List the Products Ordered in a Period

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/list-the-products-ordered-in-a-period/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1327 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Products

| Column Name      | Type    |
|------------------|---------|
| product_id       | int     |
| product_name     | varchar |
| product_category | varchar |

product_id is the primary key (column with unique values) for this table.</br>
This table contains data about the company's products.

---

### Table: Orders

| Column Name   | Type    |
|---------------|---------|
| product_id    | int     |
| order_date    | date    |
| unit          | int     |

This table may have duplicate rows.</br>
product_id is a foreign key (reference column) to the Products table.</br>
unit is the number of products ordered in order_date.

---

### Write a solution to get the names of products that have at least 100 units ordered in February 2020 and their amount.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Products table:

| product_id | product_name          | product_category |
| ---------- | --------------------- | ---------------- |
| 1          | Leetcode Solutions    | Book             |
| 2          | Jewels of Stringology | Book             |
| 3          | HP                    | Laptop           |
| 4          | Lenovo                | Laptop           |
| 5          | Leetcode Kit          | T-shirt          |

### Orders table:

| product_id | order_date | unit |
| ---------- | ---------- | ---- |
| 1          | 2020-02-05 | 60   |
| 1          | 2020-02-10 | 70   |
| 2          | 2020-01-18 | 30   |
| 2          | 2020-02-11 | 80   |
| 3          | 2020-02-17 | 2    |
| 3          | 2020-02-24 | 3    |
| 4          | 2020-03-01 | 20   |
| 4          | 2020-03-04 | 30   |
| 4          | 2020-03-04 | 60   |
| 5          | 2020-02-25 | 50   |
| 5          | 2020-02-27 | 50   |
| 5          | 2020-03-01 | 50   |

  ### 📤 `Output`  ➤

| product_name       | unit |
| ------------------ | ---- |
| Leetcode Solutions | 130  |
| Leetcode Kit       | 100  |

  ### 🔦 `Explanation`  ➤ </br> Products with product_id = 1 is ordered in February a total of (60 + 70) = 130.</br> Products with product_id = 2 is ordered in February a total of 80.</br> Products with product_id = 3 is ordered in February a total of (2 + 3) = 5.</br> Products with product_id = 4 was not ordered in February 2020.</br> Products with product_id = 5 is ordered in February a total of (50 + 50) = 100.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2049%20%F0%9F%8C%BD%201327.%20List%20the%20Products%20Ordered%20in%20a%20Period/%F0%9F%95%8D%20SQL%20-%201327.%20List%20t.sql) |