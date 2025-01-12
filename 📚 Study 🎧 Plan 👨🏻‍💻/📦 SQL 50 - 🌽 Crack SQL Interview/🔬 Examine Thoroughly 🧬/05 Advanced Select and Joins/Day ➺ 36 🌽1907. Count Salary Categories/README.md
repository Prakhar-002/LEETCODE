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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |