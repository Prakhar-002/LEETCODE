
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2028%20%F0%9F%8C%BD619.%20Biggest%20Single%20Number)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2030%20%F0%9F%8C%BD1731.%20The%20Number%20of%20Employees%20Which%20Report%20to%20Each%20Employee)

</br>
</br>

# 1045. Customers Who Bought All Products

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/customers-who-bought-all-products/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1045 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Customer`

| Column Name | Type    |
|-------------|---------|
| customer_id | int     |
| product_key | int     |

This table may contain duplicates rows. </br>
`customer_id` is not `NULL`.</br>
product_key is a foreign key (reference column) to `Product` table.

---

### Table: `Product`

| Column Name | Type    |
|-------------|---------|
| product_key | int     |

product_key is the primary key (column with unique values) for this table.

---

### Write a solution to report the customer ids from the `Customer` table that bought all the products in the `Product` table.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Customer table:

| customer_id | product_key |
| ----------- | ----------- |
| 1           | 5           |
| 2           | 6           |
| 3           | 5           |
| 3           | 6           |
| 1           | 6           |

  ### 📤 `Output`  ➤

| customer_id |
| ----------- |
| 1           |
| 3           |

  ### 🔦 `Explanation`  ➤ The customers who bought all the products (5 and 6) are customers with IDs 1 and 3.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(product_key) FROM Product)

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Sorting%20and%20Grouping/Day%20%E2%9E%BA%2029%20%F0%9F%8C%BD1045.%20Customers%20Who%20Bought%20All%20Products/%F0%9F%95%8D%20SQL%20-%201045.%20Customers%20Who%20Bought%20All%20Products.sql) |