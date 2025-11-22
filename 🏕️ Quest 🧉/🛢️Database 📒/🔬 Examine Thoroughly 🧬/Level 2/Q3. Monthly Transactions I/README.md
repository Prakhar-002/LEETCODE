# Q3. Monthly Transactions I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/monthly-transactions-i/?envType=problem-list-v2&envId=db-db2-filtering-aggregation"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Transactions

| Column Name   | Type    |
|---------------|---------|
| id            | int     |
| country       | varchar |
| state         | enum    |
| amount        | int     |
| trans_date    | date    |

id is the primary key of this table.
The table has information about incoming transactions.
The state column is an enum of type ["approved", "declined"].

</br>

### Write an SQL query to find for each month and country, the number of transactions and their total amount, the number of approved transactions and their total amount.

### Return the result table in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Transactions table:

| id   | country | state    | amount | trans_date |
|------|---------|----------|--------|------------|
| 121  | US      | approved | 1000   | 2018-12-18 |
| 122  | US      | declined | 2000   | 2018-12-19 |
| 123  | US      | approved | 2000   | 2019-01-01 |
| 124  | DE      | approved | 2000   | 2019-01-07 |

</br>

  ### 📤 `Output`  ➤

| month    | country | trans_count | approved_count | trans_total_amount | approved_total_amount |
|----------|---------|-------------|----------------|--------------------|-----------------------|
| 2018-12  | US      | 2           | 1              | 3000               | 1000                  |
| 2019-01  | US      | 1           | 1              | 2000               | 2000                  |
| 2019-01  | DE      | 1           | 1              | 2000               | 2000                  |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT 
  date_format(trans_date, '%Y-%m') AS month ,
  country, 
  COUNT(id) AS trans_count ,
  SUM(IF(state = 'approved', 1, 0)) AS approved_count ,
  SUM(amount) AS trans_total_amount ,
  SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount
FROM Transactions 
GROUP BY month, country 
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q3.%20Monthly%20Transactions%20I/%F0%9F%95%8D%20SQL%20-%20Monthly%20Transactions%20I.sql) |