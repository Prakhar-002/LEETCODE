
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Data%20Inspection/Day%20%E2%9E%BA%2003%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202879.%20Display%20the%20First%20Three%20Rows)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Data%20Selecting/Day%20%E2%9E%BA%2005%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202881.%20Create%20a%20New%20Column)

</br>
</br>

# 2880. Select Data

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/select-data/description/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2880 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame students


| Column Name | Type   |
|-------------|--------|
| student_id  | int    |
| name        | object |
| age         | int    |


### Write a solution to select the name and age of the student with student_id = 101.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| student_id | name    | age |
| ---------- | ------- | --- |
| 101        | Ulysses | 13  |
| 53         | William | 10  |
| 128        | Henry   | 6   |
| 3          | Henry   | 11  |

  ### 📤 `Output`  ➤ 

| name    | age |
| ------- | --- |
| Ulysses | 13  |

  ### 🔦 `Explanation`  ➤ Student Ulysses has student_id = 101, we select the name and age.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      return students.loc[students["student_id"] == 101, ["name", "age"]]

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Data%20Selecting/Day%20%E2%9E%BA%2004%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202880.%20Select%20Data/%F0%9F%90%BC%20Pandas%20-%202880.%20Select%20Data.py) |
