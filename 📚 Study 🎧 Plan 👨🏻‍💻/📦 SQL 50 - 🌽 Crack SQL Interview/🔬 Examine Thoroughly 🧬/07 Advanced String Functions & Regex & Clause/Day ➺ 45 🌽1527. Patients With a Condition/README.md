
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2044%20%F0%9F%8C%BD1667.%20Fix%20Names%20in%20a%20Table)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2046%20%F0%9F%8C%BD%20196.%20Delete%20Duplicate%20Emails)

</br>
</br>

# 1527. Patients With a Condition

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/patients-with-a-condition/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 1527 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Patients`

| Column Name  | Type    |
|--------------|---------|
| patient_id   | int     |
| patient_name | varchar |
| conditions   | varchar |

patient_id is the primary key (column with unique values) for this table.</br>
'conditions' contains 0 or more code separated by spaces. </br>
This table contains information of the patients in the hospital.

---

### Write a solution to find the patient_id, patient_name, and conditions of the patients who have Type I Diabetes. Type I Diabetes always starts with DIAB1 prefix.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Patients table:

| patient_id | patient_name | conditions   |
| ---------- | ------------ | ------------ |
| 1          | Daniel       | YFEV COUGH   |
| 2          | Alice        |              |
| 3          | Bob          | DIAB100 MYOP |
| 4          | George       | ACNE DIAB100 |
| 5          | Alain        | DIAB201      |

  ### 📤 `Output`  ➤

| patient_id | patient_name | conditions   |
| ---------- | ------------ | ------------ |
| 3          | Bob          | DIAB100 MYOP |
| 4          | George       | ACNE DIAB100 |

  ### 🔦 `Explanation`  ➤ Bob and George both have a condition that starts with DIAB1.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Advanced%20String%20Functions%20%26%20Regex%20%26%20Clause/Day%20%E2%9E%BA%2045%20%F0%9F%8C%BD1527.%20Patients%20With%20a%20Condition/%F0%9F%95%8D%20SQL%20-%201527.%20Patients%20With%20a%20Con.sql) |