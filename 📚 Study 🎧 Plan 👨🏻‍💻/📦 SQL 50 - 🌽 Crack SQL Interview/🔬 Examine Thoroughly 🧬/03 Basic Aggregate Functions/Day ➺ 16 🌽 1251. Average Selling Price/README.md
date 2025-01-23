
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2015%20%F0%9F%8C%BD%20620.%20Not%20Boring%20Movies)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2017%20%F0%9F%8C%BD%201075.%20Project%20Employees%20I)

</br>
</br>

# 1251. Average Selling Price

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/average-selling-price/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1251 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Prices`

| Column Name   | Type    |
|---------------|---------|
| product_id    | int     |
| start_date    | date    |
| end_date      | date    |
| price         | int     |

(product_id, start_date, end_date) is the primary key (combination of columns with unique values) for this table.</br>
Each row of this table indicates the price of the product_id in the period from start_date to end_date.</br>
For each product_id there will be no two overlapping periods. That means there will be no two intersecting periods for the same product_id.

---

### Table: `UnitsSold`

| Column Name   | Type    |
|---------------|---------|
| product_id    | int     |
| purchase_date | date    |
| units         | int     |

This table may contain duplicate rows.
Each row of this table indicates the date, units, and product_id of each product sold. 

---

### Write a solution to find the average selling price for each product. `average_price` should be rounded to 2 decimal places. If a product does not have any sold units, its average selling price is assumed to be 0.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `Prices` table:

| product_id | start_date | end_date   | price |
| ---------- | ---------- | ---------- | ----- |
| 1          | 2019-02-17 | 2019-02-28 | 5     |
| 1          | 2019-03-01 | 2019-03-22 | 20    |
| 2          | 2019-02-01 | 2019-02-20 | 15    |
| 2          | 2019-02-21 | 2019-03-31 | 30    |

### `UnitsSold` table:

| product_id | purchase_date | units |
| ---------- | ------------- | ----- |
| 1          | 2019-02-25    | 100   |
| 1          | 2019-03-01    | 15    |
| 2          | 2019-02-10    | 200   |
| 2          | 2019-03-22    | 30    |

  ### 📤 `Output`  ➤

| product_id | average_price |
| ---------- | ------------- |
| 1          | 6.96          |
| 2          | 16.96         |

  ### 🔦 `Explanation`  ➤ Average selling price = Total Price of Product / Number of products sold.</br> Average selling price for product 1 = ((100 * 5) + (15 * 20)) / 115 = 6.96</br> Average selling price for product 2 = ((200 * 15) + (30 * 30)) / 230 = 16.96

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT p.product_id ,
      IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units) ,2), 0) AS average_price
FROM Prices p
      LEFT JOIN UnitsSold u
      ON p.product_id = u.product_id
            AND u.purchase_date BETWEEN p.start_date and p.end_date
GROUP BY p.product_id

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2016%20%F0%9F%8C%BD%201251.%20Average%20Selling%20Price/%F0%9F%95%8D%20SQL%20-%201251.%20Average%20Selling%20Price.sql) |