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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍]() |