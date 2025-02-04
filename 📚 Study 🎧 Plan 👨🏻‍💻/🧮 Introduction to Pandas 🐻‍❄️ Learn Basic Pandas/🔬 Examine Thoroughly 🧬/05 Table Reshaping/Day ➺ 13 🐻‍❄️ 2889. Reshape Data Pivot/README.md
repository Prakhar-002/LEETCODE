
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2012%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202888.%20Reshape%20Data%20Concatenate)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2014%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202890.%20Reshape%20Data%20Melt)

</br>
</br>

# 2889. Reshape Data: Pivot

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reshape-data-pivot/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2889 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame `weather`

| Column Name | Type   |
|-------------|--------|
| city        | object |
| month       | object |
| temperature | int    |

### Write a solution to pivot the data so that each row represents temperatures for a specific month, and each city is a separate column.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| city         | month    | temperature |
| ------------ | -------- | ----------- |
| Jacksonville | January  | 13          |
| Jacksonville | February | 23          |
| Jacksonville | March    | 38          |
| Jacksonville | April    | 5           |
| Jacksonville | May      | 34          |
| ElPaso       | January  | 20          |
| ElPaso       | February | 6           |
| ElPaso       | March    | 26          |
| ElPaso       | April    | 2           |
| ElPaso       | May      | 43          |

  ### 📤 `Output`  ➤ 

| month    | ElPaso | Jacksonville |
| -------- | ------ | ------------ |
| April    | 2      | 5            |
| February | 6      | 23           |
| January  | 20     | 13           |
| March    | 26     | 38           |
| May      | 43     | 34           |

  ### 🔦 `Explanation`  ➤ The table is pivoted, each column represents a city, and each row represents a specific month.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python



```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Table%20Reshaping/Day%20%E2%9E%BA%2013%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202889.%20Reshape%20Data%20Pivot/%F0%9F%90%BC%20Pandas%20-%202889.%20Reshape%20Data%20Pivot.py) |
