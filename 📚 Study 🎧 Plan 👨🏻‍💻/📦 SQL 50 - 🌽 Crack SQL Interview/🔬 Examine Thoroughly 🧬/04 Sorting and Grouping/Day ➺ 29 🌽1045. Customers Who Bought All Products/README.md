# 1045. Customers Who Bought All Products

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/customers-who-bought-all-products/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1045 Leetcode Easy ♻️ </strong></a>
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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |