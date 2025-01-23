
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2035%20%F0%9F%8C%BD1204.%20Last%20Person%20to%20Fit%20in%20the%20Bus)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2037%20%F0%9F%8C%BD1978.%20Employees%20Whose%20Manager%20Left%20the%20Company)

</br>
</br>

# 1907. Count Salary Categories

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-salary-categories/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1907 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Accounts`

| Column Name | Type |
|-------------|------|
| account_id  | int  |
| income      | int  |

account_id is the primary key (column with unique values) for this table.</br>
Each row contains information about the monthly income for one bank account.

---

### Write a solution to calculate the number of bank accounts for each salary category. The salary categories are:

- `"Low Salary"`: All the salaries strictly less than $20000.

- `"Average Salary"`: All the salaries in the inclusive range [$20000, $50000].

- `"High Salary"`: All the salaries strictly greater than $50000.

### The result table must contain all three categories. If there are no accounts in a category, return 0.

### Return the result table in any order.

### The result format is in the following example. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Accounts table:

| account_id | income |
| ---------- | ------ |
| 3          | 108939 |
| 2          | 12747  |
| 8          | 87709  |
| 6          | 91796  |

  ### 📤 `Output`  ➤

| category       | accounts_count |
| -------------- | -------------- |
| High Salary    | 3              |
| Low Salary     | 1              |
| Average Salary | 0              |

  ### 🔦 `Explanation`  ➤ </br> Low Salary: Account 2.</br> Average Salary: No accounts.</br> High Salary: Accounts 3, 6, and 8.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT "Low Salary" AS category ,
SUM(IF(income < 20000, 1, 0)) AS accounts_count 
FROM Accounts

UNION 

SELECT "Average Salary" AS category ,
SUM(IF(income BETWEEN 20000 AND 50000, 1, 0)) AS accounts_count 
FROM Accounts

UNION 

SELECT "High Salary" AS category ,
SUM(IF(income > 50000, 1, 0)) AS accounts_count 
FROM Accounts

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2036%20%F0%9F%8C%BD1907.%20Count%20Salary%20Categories/%F0%9F%95%8D%20SQL%20-%201907.%20Count%20Salary%20Categories.sql) |