# Q1. Customer Placing the Largest Number of Orders

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/description/?envType=problem-list-v2&envId=db-db2-filtering-aggregation"><strong>➥ ♻️ q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Orders

| Column Name     | Type     |
|-----------------+----------|
| order_number    | int      |
| customer_number | int      |

order_number is the primary key (column with unique values) for this table.
This table contains information about the order ID and the customer ID.

</br>

### Write a solution to find the customer_number for the customer who has placed the largest number of orders.

### The test cases are generated so that exactly one customer will have placed more orders than any other customer.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Orders table:

| order_number | customer_number |
|--------------|-----------------|
| 1            | 1               |
| 2            | 2               |
| 3            | 3               |
| 4            | 3               |

</br>

  ### 📤 `Output`  ➤

| customer_number |
|-----------------|
| 3               |

</br>

  ### 🔦 `Explanation`  ➤ The customer with number 3 has two orders, which is greater than either customer 1 or 2 because each of them only has one order. So the result is customer_number 3.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT customer_number 
From Orders
GROUP BY customer_number
ORDER BY count(customer_number) DESC
LIMIT 1 
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q1.%20Customer%20Placing%20the%20Largest%20Number%20of%20Orders/%F0%9F%95%8D%20SQL%20-%20Customer%20Placing%20the%20Largest%20Number%20of%20Orders.sql) |