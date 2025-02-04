
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2010%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202886.%20Change%20Data%20Type)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2012%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202888.%20Reshape%20Data%20Concatenate)

</br>
</br>

# 2887. Fill Missing Data

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/fill-missing-data/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2887 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame `products`

| Column Name | Type   |
|-------------|--------|
| name        | object |
| quantity    | int    |
| price       | int    |

### Write a solution to fill in the missing value as `0` in the `quantity` column.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| name            | quantity | price |
| --------------- | -------- | ----- |
| Wristwatch      | null     | 135   |
| WirelessEarbuds | null     | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |

  ### 📤 `Output`  ➤ 

| name            | quantity | price |
| --------------- | -------- | ----- |
| Wristwatch      | 0        | 135   |
| WirelessEarbuds | 0        | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |

  ### 🔦 `Explanation`  ➤ The quantity for Wristwatch and WirelessEarbuds are filled by 0.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      products["quantity"] = products["quantity"].fillna(0)
      return products

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Data%20Cleaning/Day%20%E2%9E%BA%2011%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202887.%20Fill%20Missing%20Data/%F0%9F%90%BC%20Pandas%20-%202887.%20Fill%20Missing%20Data.py) |
