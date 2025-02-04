
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2006%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202882.%20Drop%20Duplicate%20Rows)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2008%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202884.%20Modify%20Columns)

</br>
</br>

# 2883. Drop Missing Data

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/drop-missing-data/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2883 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame students

| Column Name | Type   |
|-------------|--------|
| student_id  | int    |
| name        | object |
| age         | int    |

### There are some rows having missing values in the `name` column.

### Write a solution to remove the rows with missing values.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| student_id | name    | age |
| ---------- | ------- | --- |
| 32         | Piper   | 5   |
| 217        | null    | 19  |
| 779        | Georgia | 20  |
| 849        | Willow  | 14  |

  ### 📤 `Output`  ➤ 

| student_id | name    | age |
| ---------- | ------- | --- |
| 32         | Piper   | 5   |
| 779        | Georgia | 20  |
| 849        | Willow  | 14  |

  ### 🔦 `Explanation`  ➤ Student with id 217 havs empty value in the name column, so it will be removed.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students.dropna(subset = ["name"])

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2007%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202883.%20Drop%20Missing%20Data/%F0%9F%90%BC%20Pandas%20-%202883.%20Drop%20Missing%20Data.py) |
