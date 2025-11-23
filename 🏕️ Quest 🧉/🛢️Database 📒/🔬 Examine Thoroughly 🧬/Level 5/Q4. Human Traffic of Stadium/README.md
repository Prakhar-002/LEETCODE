# Q4. Human Traffic of Stadium

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/human-traffic-of-stadium/?envType=problem-list-v2&envId=db-db5-sql-ii"><strong>➥ 🫀 Q4 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷ 

### Table: Stadium

| Column Name   | Type    |
|---------------+---------|
| id            | int     |
| visit_date    | date    |
| people        | int     |

visit_date is the column with unique values for this table.
Each row of this table contains the visit date and visit id to the stadium with the number of people during the visit.
As the id increases, the date increases as well.

</br>

### Write a solution to display the records with three or more rows with consecutive id's, and the number of people is greater than or equal to 100 for each.

### Return the result table ordered by visit_date in ascending order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Stadium table:

| id   | visit_date | people    |
|------+------------+-----------|
| 1    | 2017-01-01 | 10        |
| 2    | 2017-01-02 | 109       |
| 3    | 2017-01-03 | 150       |
| 4    | 2017-01-04 | 99        |
| 5    | 2017-01-05 | 145       |
| 6    | 2017-01-06 | 1455      |
| 7    | 2017-01-07 | 199       |
| 8    | 2017-01-09 | 188       |

</br>

  ### 📤 `Output`  ➤

| id   | visit_date | people    |
|------+------------+-----------|
| 5    | 2017-01-05 | 145       |
| 6    | 2017-01-06 | 1455      |
| 7    | 2017-01-07 | 199       |
| 8    | 2017-01-09 | 188       |

</br>

  ### 🔦 `Explanation`  ➤
  ### The four rows with ids 5, 6, 7, and 8 have consecutive ids and each of them has >= 100 people attended. Note that row 8 was included even though the visit_date was not the next day after row 7.
  ### The rows with ids 2 and 3 are not included because we need at least three consecutive ids.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

# Write your MySQL query statement below
with q1 as (
select *, 
     count(*) over( order by id range between current row and 2 following ) following_cnt,
     count(*) over( order by id range between 2 preceding and current row ) preceding_cnt,
     count(*) over( order by id range between 1 preceding and 1 following ) current_cnt
from stadium
where people > 99
)
select id, visit_date, people
from q1
where following_cnt = 3 or preceding_cnt = 3 or current_cnt = 3
order by visit_date
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q4.%20Human%20Traffic%20of%20Stadium/%F0%9F%95%8D%20SQL%20-%20Q4.%20Human%20Traffic%20of%20Stadium.sql) |