# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Products

| Column Name      | Type    |
|------------------|---------|
| product_id       | int     |
| product_name     | varchar |
| product_category | varchar |

product_id is the primary key (column with unique values) for this table.
This table contains data about the company's products.

</br>

### Table: Orders

| Column Name   | Type    |
|---------------+---------|
| product_id    | int     |
| order_date    | date    |
| unit          | int     |

This table may have duplicate rows.
product_id is a foreign key (reference column) to the Products table.
unit is the number of products ordered in order_date.

</br>

### Write a solution to get the names of products that have at least 100 units ordered in February 2020 and their amount.

### Return the result table in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Products table:

| product_id  | product_name          | product_category |
|-------------|-----------------------|------------------|
| 1           | Leetcode Solutions    | Book             |
| 2           | Jewels of Stringology | Book             |
| 3           | HP                    | Laptop           |
| 4           | Lenovo                | Laptop           |
| 5           | Leetcode Kit          | T-shirt          |

</br>

### Orders table:

| product_id   | order_date   | unit     |
|--------------|--------------|----------|
| 1            | 2020-02-05   | 60       |
| 1            | 2020-02-10   | 70       |
| 2            | 2020-01-18   | 30       |
| 2            | 2020-02-11   | 80       |
| 3            | 2020-02-17   | 2        |
| 3            | 2020-02-24   | 3        |
| 4            | 2020-03-01   | 20       |
| 4            | 2020-03-04   | 30       |
| 4            | 2020-03-04   | 60       |
| 5            | 2020-02-25   | 50       |
| 5            | 2020-02-27   | 50       |
| 5            | 2020-03-01   | 50       |

</br>

  ### 📤 `Output`  ➤

| product_name       | unit    |
|--------------------|---------|
| Leetcode Solutions | 130     |
| Leetcode Kit       | 100     |

</br>

  ### 🔦 `Explanation`  ➤ 
  ### Products with product_id = 1 is ordered in February a total of (60 + 70) = 130.
  ### Products with product_id = 2 is ordered in February a total of 80.
  ### Products with product_id = 3 is ordered in February a total of (2 + 3) = 5.
  ### Products with product_id = 4 was not ordered in February 2020.
  ### Products with product_id = 5 is ordered in February a total of (50 + 50) = 100.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT  p.product_name, SUM(o.unit) AS unit
FROM Products p
LEFT JOIN Orders o
ON p.product_id = o.product_id
WHERE EXTRACT(year_month FROM o.order_date) = 202002
GROUP BY o.product_id
HAVING SUM(o.unit) >= 100
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |