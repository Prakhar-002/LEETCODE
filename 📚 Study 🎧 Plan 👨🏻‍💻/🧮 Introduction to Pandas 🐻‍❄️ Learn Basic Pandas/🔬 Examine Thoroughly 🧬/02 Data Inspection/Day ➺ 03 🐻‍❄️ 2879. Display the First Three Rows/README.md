
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Data%20Inspection/Day%20%E2%9E%BA%2002%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202878.%20Get%20the%20Size%20of%20a%20DataFrame)
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Data%20Selecting/Day%20%E2%9E%BA%2004%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202880.%20Select%20Data)

</br>
</br>

# 2879. Display the First Three Rows

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/display-the-first-three-rows/?envType=study-plan-v2&envId=introduction-to-pandas&lang=pythondata"><strong>➥ ♻️ 2879 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### DataFrame: employees

| Column Name | Type   |
|-------------|--------|
| employee_id | int    |
| name        | object |
| department  | object |
| salary      | int    |

### Write a solution to display the first 3 rows of this DataFrame.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

| employee_id | name      | department            | salary |
| ----------- | --------- | --------------------- | ------ |
| 3           | Bob       | Operations            | 48675  |
| 90          | Alice     | Sales                 | 11096  |
| 9           | Tatiana   | Engineering           | 33805  |
| 60          | Annabelle | InformationTechnology | 37678  |
| 49          | Jonathan  | HumanResources        | 23793  |
| 43          | Khaled    | Administration        | 40454  |

  ### 📤 `Output`  ➤ 

| employee_id | name    | department  | salary |
| ----------- | ------- | ----------- | ------ |
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |

  ### 🔦 `Explanation`  ➤ Only the first 3 rows are displayed.

</br>

# PANDAS 🐼 ˋ°•*⁀➷

```python

# https://github.com/Prakhar-002/LEETCODE

import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.head(3)

```

</br>

# Detail Solution 🧮 ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
| ![Pandas](https://img.shields.io/badge/pandas-%23150458.svg?style=for-the-badge&logo=pandas&logoColor=white) | [PANDAS🐼](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A7%AE%20Introduction%20to%20Pandas%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%20Learn%20Basic%20Pandas/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Data%20Inspection/Day%20%E2%9E%BA%2003%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202879.%20Display%20the%20First%20Three%20Rows/%F0%9F%90%BC%20Pandas%20-%202879.%20Display%20the%20First%20Thr.py) |
