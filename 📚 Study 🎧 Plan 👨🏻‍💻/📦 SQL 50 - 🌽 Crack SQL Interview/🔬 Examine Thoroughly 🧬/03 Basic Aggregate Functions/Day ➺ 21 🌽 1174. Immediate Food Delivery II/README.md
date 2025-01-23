
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2020%20%F0%9F%8C%BD%201193.%20Monthly%20Transactions%20I)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2022%20%F0%9F%8C%BD%20550.%20Game%20Play%20Analysis%20IV)

</br>
</br>

# 1174. Immediate Food Delivery II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/immediate-food-delivery-ii/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1174 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Delivery`


| Column Name                 | Type    |
|-----------------------------|---------|
| delivery_id                 | int     |
| customer_id                 | int     |
| order_date                  | date    |
| customer_pref_delivery_date | date    |

delivery_id is the column of unique values of this table.</br>
The table holds information about food delivery to customers that make orders at some date and specify a preferred delivery date (on the same order date or after it).

---

### If the customer's preferred delivery date is the same as the order date, then the order is called immediate; otherwise, it is called scheduled.

### The first order of a customer is the order with the earliest order date that the customer made. It is guaranteed that a customer has precisely one first order.

### Write a solution to find the percentage of immediate orders in the first orders of all customers, rounded to 2 decimal places.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Delivery table:

| delivery_id | customer_id | order_date | customer_pref_delivery_date |
| ----------- | ----------- | ---------- | --------------------------- |
| 1           | 1           | 2019-08-01 | 2019-08-02                  |
| 2           | 2           | 2019-08-02 | 2019-08-02                  |
| 3           | 1           | 2019-08-11 | 2019-08-12                  |
| 4           | 3           | 2019-08-24 | 2019-08-24                  |
| 5           | 3           | 2019-08-21 | 2019-08-22                  |
| 6           | 2           | 2019-08-11 | 2019-08-13                  |
| 7           | 4           | 2019-08-09 | 2019-08-09                  |

  ### 📤 `Output`  ➤

| immediate_percentage |
| -------------------- |
| 50                   |

  ### 🔦 `Explanation`  ➤ The customer id 1 has a first order with delivery id 1 and it is scheduled.</br> The customer id 2 has a first order with delivery id 2 and it is immediate.</br> The customer id 3 has a first order with delivery id 5 and it is scheduled.</br> The customer id 4 has a first order with delivery id 7 and it is immediate.</br> Hence, half the customers have immediate first orders.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT 
ROUND(SUM(IF(min_order_date = min_customer_pref_delivery_date, 1, 0) * 100) / COUNT(min_order_date), 2) AS immediate_percentage
FROM
      (SELECT
            delivery_id,
            customer_id,
            min(order_date) AS min_order_date,
            min(customer_pref_delivery_date) AS min_customer_pref_delivery_date
      FROM Delivery
      GROUP BY customer_id) as new_table

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Basic%20Aggregate%20Functions/Day%20%E2%9E%BA%2021%20%F0%9F%8C%BD%201174.%20Immediate%20Food%20Delivery%20II/%F0%9F%95%8D%20SQL%20-%201174.%20Immediate%20Food%20Delivery%20II.sql) |