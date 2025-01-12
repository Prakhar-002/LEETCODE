# 1070. Product Sales Analysis III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/product-sales-analysis-iii/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1070 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Sales`


| Column Name | Type  |
|-------------|-------|
| sale_id     | int   |
| product_id  | int   |
| year        | int   |
| quantity    | int   |
| price       | int   |

(sale_id, year) is the primary key (combination of columns with unique values) of this table.</br>
product_id is a foreign key (reference column) to `Product` table.</br>
Each row of this table shows a sale on the product product_id in a certain year.</br>
Note that the price is per unit.

---

### Table: Product


| Column Name  | Type    |
|--------------|---------|
| product_id   | int     |
| product_name | varchar |

product_id is the primary key (column with unique values) of this table.</br>
Each row of this table indicates the product name of each product.</br>

---

### Write a solution to select the product id, year, quantity, and price for the first year of every product sold.

### Return the resulting table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Sales table:

| sale_id | product_id | year | quantity | price |
| ------- | ---------- | ---- | -------- | ----- |
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |

### Product table:

| product_id | product_name |
| ---------- | ------------ |
| 100        | Nokia        |
| 200        | Apple        |
| 300        | Samsung      |

  ### 📤 `Output`  ➤

| product_id | first_year | quantity | price |
| ---------- | ---------- | -------- | ----- |
| 100        | 2008       | 10       | 5000  |
| 200        | 2011       | 15       | 9000  |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |