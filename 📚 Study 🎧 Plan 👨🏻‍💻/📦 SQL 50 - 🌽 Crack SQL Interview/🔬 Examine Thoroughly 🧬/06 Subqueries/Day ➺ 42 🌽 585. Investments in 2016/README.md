
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2041%20%F0%9F%8C%BD%20602.%20Friend%20Requests%20II%20Who%20Has%20the%20Most%20Friends)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2043%20%F0%9F%8C%BD%20185.%20Department%20Top%20Three%20Salaries)

</br>
</br>

# 585. Investments in 2016

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/investments-in-2016/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ☢️ 585 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Insurance`

| Column Name | Type  |
|-------------|-------|
| pid         | int   |
| tiv_2015    | float |
| tiv_2016    | float |
| lat         | float |
| lon         | float |

pid is the primary key (column with unique values) for this table.</br>
Each row of this table contains information about one policy where:</br>
pid is the policyholder's policy ID.</br>
tiv_2015 is the total investment value in 2015 and tiv_2016 is the total investment value in 2016.</br>
lat is the latitude of the policy holder's city. It's guaranteed that lat is not NULL.</br>
lon is the longitude of the policy holder's city. It's guaranteed that lon is not NULL.

---

### Write a solution to report the sum of all total investment values in 2016 `tiv_2016`, for all policyholders who:

- have the same `tiv_2015` value as one or more other policyholders, and

- are not located in the same city as any other policyholder (i.e., the `(lat, lon)` attribute pairs must be unique).

### Round `tiv_2016` to two decimal places.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Insurance table:

| pid | tiv_2015 | tiv_2016 | lat | lon |
| --- | -------- | -------- | --- | --- |
| 1   | 10       | 5        | 10  | 10  |
| 2   | 20       | 20       | 20  | 20  |
| 3   | 10       | 30       | 20  | 20  |
| 4   | 10       | 40       | 40  | 40  |

  ### 📤 `Output`  ➤

| tiv_2016 |
| -------- |
| 45       |

  ### 🔦 `Explanation`  ➤ </br> The first record in the table, like the last record, meets both of the two criteria.</br> The tiv_2015 value 10 is the same as the third and fourth records, and its location is unique.</br> </br> The second record does not meet any of the two criteria. Its tiv_2015 is not like any other policyholders and its location is the same as the third record, which makes the third record fail, too.</br> So, the result is the sum of tiv_2016 of the first and last record, which is 45.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT ROUND(SUM(tiv_2016), 2) AS tiv_2016 
FROM Insurance
WHERE tiv_2015 IN (
      SELECT tiv_2015 
      FROM Insurance
      GROUP BY tiv_2015
      HAVING COUNT(*) > 1
)
AND (lat , lon) IN (
      SELECT lat, lon 
      FROM Insurance
      GROUP BY lat, lon 
      HAVING COUNT(*) = 1
)

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Subqueries/Day%20%E2%9E%BA%2042%20%F0%9F%8C%BD%20585.%20Investments%20in%202016/%F0%9F%95%8D%20SQL%20-%20585.%20Investments%20in%202016.sql) |