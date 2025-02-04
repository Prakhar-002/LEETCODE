
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2011%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202887.%20Fill%20Missing%20Data)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2013%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202889.%20Reshape%20Data%20Pivot)

</br>
</br>

# 2888. Reshape Data: Concatenate

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reshape-data-concatenate/description/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2888 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame df1

| Column Name | Type   |
|-------------|--------|
| student_id  | int    |
| name        | object |
| age         | int    |


### DataFrame df2

| Column Name | Type   |
|-------------|--------|
| student_id  | int    |
| name        | object |
| age         | int    |

### Write a solution to concatenate these two DataFrames vertically into one DataFrame.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ df1 

| student_id | name    | age |
| ---------- | ------- | --- |
| 1          | Mason   | 8   |
| 2          | Ava     | 6   |
| 3          | Taylor  | 15  |
| 4          | Georgia | 17  |

### df2

| student_id | name | age |
| ---------- | ---- | --- |
| 5          | Leo  | 7   |
| 6          | Alex | 7   |

  ### 📤 `Output`  ➤ 

| student_id | name    | age |
| ---------- | ------- | --- |
| 1          | Mason   | 8   |
| 2          | Ava     | 6   |
| 3          | Taylor  | 15  |
| 4          | Georgia | 17  |
| 5          | Leo     | 7   |
| 6          | Alex    | 7   |

  ### 🔦 `Explanation`  ➤ The two DataFramess are stacked vertically, and their rows are combined.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
      return pd.concat([df1, df2], axis = 0)

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2012%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202888.%20Reshape%20Data%20Concatenate/%F0%9F%90%BC%20Pandas%20-%202888.%20Reshape%20Data%20Concatenate.py) |
