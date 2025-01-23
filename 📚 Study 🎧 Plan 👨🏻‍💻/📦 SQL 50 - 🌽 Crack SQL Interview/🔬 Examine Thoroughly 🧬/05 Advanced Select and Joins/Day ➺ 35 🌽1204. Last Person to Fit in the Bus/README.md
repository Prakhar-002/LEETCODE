
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2034%20%F0%9F%8C%BD1164.%20Product%20Price%20at%20a%20Given%20Date)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2036%20%F0%9F%8C%BD1907.%20Count%20Salary%20Categories)

</br>
</br>

# 1204. Last Person to Fit in the Bus

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/last-person-to-fit-in-the-bus/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 1204 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Queue`

| Column Name | Type    |
|-------------|---------|
| person_id   | int     |
| person_name | varchar |
| weight      | int     |
| turn        | int     |

person_id column contains unique values.</br>
This table has the information about all people waiting for a bus.</br>
The person_id and turn columns will contain all numbers from 1 to n, where n is the number of rows in the table.</br>
turn determines the order of which the people will board the bus, where turn=1 denotes the first person to board and turn=n denotes the last person to board.</br>
weight is the weight of the person in kilograms.

---

### There is a queue of people waiting to board a bus. However, the bus has a weight limit of `1000 kilograms`, so there may be some people who cannot board.

### Write a solution to find the `person_name` of the last person that can fit on the bus without exceeding the weight limit. The test cases are generated such that the first person does not exceed the weight limit.

### Note *that only one person can board the bus at any given turn*.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Queue table:

| person_id | person_name | weight | turn |
| --------- | ----------- | ------ | ---- |
| 5         | Alice       | 250    | 1    |
| 4         | Bob         | 175    | 5    |
| 3         | Alex        | 350    | 2    |
| 6         | John Cena   | 400    | 3    |
| 1         | Winston     | 500    | 6    |
| 2         | Marie       | 200    | 4    |

  ### 📤 `Output`  ➤

| person_name |
| ----------- |
| John Cena   |

  ### 🔦 `Explanation`  ➤  The folowing table is ordered by the turn for simplicity.


| Turn | ID | Name      | Weight | Total Weight |
|------|----|-----------|--------|--------------|
| 1    | 5  | Alice     | 250    | 250          |
| 2    | 3  | Alex      | 350    | 600          |
| 3    | 6  | John Cena | 400    | 1000         | 
| 4    | 2  | Marie     | 200    | 1200         |
| 5    | 4  | Bob       | 175    | ___          |
| 6    | 1  | Winston   | 500    | ___          |

### 3 (last person to board)

### 4  (cannot board)

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT q1.person_name 
FROM Queue q1
INNER JOIN Queue q2
ON q1.turn >= q2.turn 
GROUP BY q1.turn
HAVING SUM(q2.weight) <= 1000
ORDER BY q1.turn DESC LIMIT 1

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2035%20%F0%9F%8C%BD1204.%20Last%20Person%20to%20Fit%20in%20the%20Bus/%F0%9F%95%8D%20SQL%20-%201204.%20Last%20Person%20to%20Fit%20in%20the%20Bus.sql) |