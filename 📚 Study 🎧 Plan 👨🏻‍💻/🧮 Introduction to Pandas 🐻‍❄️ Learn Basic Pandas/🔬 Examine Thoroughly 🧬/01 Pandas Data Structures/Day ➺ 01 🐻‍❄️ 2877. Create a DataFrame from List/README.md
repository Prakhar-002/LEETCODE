
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Advanced%20Techniques/Day%20%E2%9E%BA%2015%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202891.%20Method%20Chaining)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Data%20Inspection/Day%20%E2%9E%BA%2002%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202878.%20Get%20the%20Size%20of%20a%20DataFrame)

</br>
</br>

# 2877. Create a DataFrame from List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/create-a-dataframe-from-list/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2877 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Write a solution to create a DataFrame from a 2D list called `student_data`. This 2D list contains the IDs and ages of some students.

### The DataFrame should have two columns, `student_id` and `age`, and be in the same order as the original 2D list.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ student_data:

[
  [1, 15],
  [2, 11],
  [3, 11],
  [4, 20]
]

  ### 📤 `Output`  ➤ 

| student_id | age |
|------------|-----|
| 1          | 15  |
| 2          | 11  |
| 3          | 11  |
| 4          | 20  |

  ### 🔦 `Explanation`  ➤ A DataFrame was created on top of student_data, with two columns named `student_id` and `age`.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      return pd.DataFrame(student_data, columns=["student_id", "age"])

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Pandas%20Data%20Structures/Day%20%E2%9E%BA%2001%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202877.%20Create%20a%20DataFrame%20from%20List/%F0%9F%90%BC%20Pandas%20-%202877.%20Create%20a%20DataF.py) |
