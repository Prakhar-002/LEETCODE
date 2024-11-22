# 1072. Flip Columns For Maximum Number of Equal Rows

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows/description/?envType=daily-question&envId=2024-11-22"><strong>➥ ☢️ 1072 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` binary matrix `matrix`.

### You can choose any number of columns in the matrix and flip every cell in that column (i.e., Change the value of the cell from `0` to `1` or vice versa).

### Return *the maximum number of rows that have all values equal after some number of flips*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  matrix = [[0,1],[1,1]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ After flipping no values, 1 row has all values equal.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ matrix = [[0,1],[1,0]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ After flipping values in the first column, both rows have equal values.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ matrix = [[0,0,0],[0,0,1],[1,1,0]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ After flipping values in the first two columns, the last two rows have equal values.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == matrix.length`** </br>

🔹 **`n == matrix[i].length`** </br>

🔹 **`1 <= m, n <= 300`** </br>

🔹 **`matrix[i][j]` is either `0` or `1`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/22%20-%2011%20-%202024%20---%20%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/22%20-%2011%20-%202024%20---%20%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/22%20-%2011%20-%202024%20---%20%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/22%20-%2011%20-%202024%20---%20%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows.js) |

