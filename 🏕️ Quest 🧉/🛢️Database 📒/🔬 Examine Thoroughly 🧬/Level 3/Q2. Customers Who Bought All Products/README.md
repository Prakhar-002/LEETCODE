# Q2. Customers Who Bought All Products

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/customers-who-bought-all-products/?envType=problem-list-v2&envId=db-db3-grouping-aggregation"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Customer

| Column Name | Type    |
|-------------|---------|
| customer_id | int     |
| product_key | int     |

This table may contain duplicates rows. 
customer_id is not NULL.
product_key is a foreign key (reference column) to Product table.

</br>

### Table: Product

| Column Name | Type    |
|-------------|---------|
| product_key | int     |

product_key is the primary key (column with unique values) for this table.

</br>

### Write a solution to report the customer ids from the Customer table that bought all the products in the Product table.

### Return the result table in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Customer table:

| customer_id | product_key |
|-------------|-------------|
| 1           | 5           |
| 2           | 6           |
| 3           | 5           |
| 3           | 6           |
| 1           | 6           |

</br>

### Product table:

| product_key |
|-------------|
| 5           |
| 6           |

</br>

  ### 📤 `Output`  ➤

| customer_id |
|-------------|
| 1           |
| 3           |

</br>

  ### 🔦 `Explanation`  ➤
  ### The customers who bought all the products (5 and 6) are customers with IDs 1 and 3.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

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
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q2.%20Customers%20Who%20Bought%20All%20Products/%F0%9F%95%8D%20SQL%20-%20Customers%20Who%20Bought%20All%20Products.sql) |