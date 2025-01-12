# 1174. Immediate Food Delivery II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/immediate-food-delivery-ii/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1174 Leetcode Easy ♻️ </strong></a>
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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |