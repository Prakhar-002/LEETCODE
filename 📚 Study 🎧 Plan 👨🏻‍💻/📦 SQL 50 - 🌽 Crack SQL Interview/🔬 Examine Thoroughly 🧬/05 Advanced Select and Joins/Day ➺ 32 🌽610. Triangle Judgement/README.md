
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2031%20%F0%9F%8C%BD1789.%20Primary%20Department%20for%20Each%20Employee)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2033%20%F0%9F%8C%BD180.%20Consecutive%20Numbers)

</br>
</br>

# 610. Triangle Judgement

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/triangle-judgement/description/?envType=study-plan-v2&envId=top-sql-50"><strong>➥ ♻️ 610 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: `Triangle`

| Column Name | Type |
|-------------|------|
| x           | int  |
| y           | int  |
| z           | int  |

In SQL, (x, y, z) is the primary key column for this table.</br>
Each row of this table contains the lengths of three line segments.

---

### Report for every three line segments whether they can form a triangle.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ Triangle table:

| x  | y  | z  |
| -- | -- | -- |
| 13 | 15 | 30 |
| 10 | 20 | 15 |

  ### 📤 `Output`  ➤

| x  | y  | z  | triangle |
| -- | -- | -- | -------- |
| 13 | 15 | 30 | No       |
| 10 | 20 | 15 | Yes      |

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database**  </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT x , y , z ,
CASE WHEN 
      x + y > z 
      AND 
      y + z > x 
      AND 
      z + x > y 
      THEN 'Yes' ELSE 'No' END AS triangle
FROM Triangle 

```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%93%A6%20SQL%2050%20-%20%F0%9F%8C%BD%20Crack%20SQL%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Advanced%20Select%20and%20Joins/Day%20%E2%9E%BA%2032%20%F0%9F%8C%BD610.%20Triangle%20Judgement/%F0%9F%95%8D%20SQL%20-%20610.%20Triangle%20Judgement.sql) |