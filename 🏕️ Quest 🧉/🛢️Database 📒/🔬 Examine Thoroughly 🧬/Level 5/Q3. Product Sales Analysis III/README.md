# Q3. Product Sales Analysis III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/product-sales-analysis-iii/?envType=problem-list-v2&envId=db-db5-sql-ii"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Sales

| Column Name | Type  |
|-------------|-------|
| sale_id     | int   |
| product_id  | int   |
| year        | int   |
| quantity    | int   |
| price       | int   |

(sale_id, year) is the primary key (combination of columns with unique values) of this table.
Each row records a sale of a product in a given year.
A product may have multiple sales entries in the same year.
Note that the per-unit price.

</br>

### Write a solution to find all sales that occurred in the first year each product was sold.

### For each product_id, identify the earliest year it appears in the Sales table.

### Return all sales entries for that product in that year.

### Return a table with the following columns: product_id, first_year, quantity, and price.
### Return the result in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Sales table:

| sale_id | product_id | year | quantity | price |
|---------|------------|------|----------|-------|
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |

</br>

  ### 📤 `Output`  ➤

| product_id | first_year | quantity | price |
|------------|------------|----------|-------|
| 100        | 2008       | 10       | 5000  |
| 200        | 2011       | 15       | 9000  |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT
    product_id,
    year AS first_year, quantity, price
FROM sales
WHERE ((product_id, year) IN (
SELECT 
    product_id,
    MIN(year)
    FROM sales
    GROUP BY product_id
))
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q3.%20Product%20Sales%20Analysis%20III/%F0%9F%95%8D%20SQL%20-%20Product%20Sales%20Analysis%20III.sql) |