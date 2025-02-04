
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2013%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202889.%20Reshape%20Data%20Pivot)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Advanced%20Techniques/Day%20%E2%9E%BA%2015%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202891.%20Method%20Chaining)

</br>
</br>

# 2890. Reshape Data: Melt

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reshape-data-melt/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2890 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame `report`

| Column Name | Type   |
|-------------|--------|
| product     | object |
| quarter_1   | int    |
| quarter_2   | int    |
| quarter_3   | int    |
| quarter_4   | int    |

### Write a solution to reshape the data so that each row represents sales data for a product in a specific quarter.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| product     | quarter_1 | quarter_2 | quarter_3 | quarter_4 |
| ----------- | --------- | --------- | --------- | --------- |
| Umbrella    | 417       | 224       | 379       | 611       |
| SleepingBag | 800       | 936       | 93        | 875       |

  ### 📤 `Output`  ➤ 

| product     | quarter   | sales |
| ----------- | --------- | ----- |
| Umbrella    | quarter_1 | 417   |
| SleepingBag | quarter_1 | 800   |
| Umbrella    | quarter_2 | 224   |
| SleepingBag | quarter_2 | 936   |
| Umbrella    | quarter_3 | 379   |
| SleepingBag | quarter_3 | 93    |
| Umbrella    | quarter_4 | 611   |
| SleepingBag | quarter_4 | 875   |

  ### 🔦 `Explanation`  ➤ The DataFrame is reshaped from wide to long format. Each row represents the sales of a product in a quarter.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
      return report.melt(id_vars = ["product"], var_name = "quarter", value_name = "sales")

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2014%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202890.%20Reshape%20Data%20Melt/%F0%9F%90%BC%20Pandas%20-%202890.%20Reshape%20Data%20Melt.py) |
