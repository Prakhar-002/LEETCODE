# 1074. Number of Submatrices That Sum to Target

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/"><strong>➥ 🫀 1074 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a **matrix** and a **target**, return the number of **non-empty submatrices** that sum to `target`.

### A **submatrix** `x1, y1, x2, y2` is the set of all cells `matrix[x][y]` where `x1 <= x <= x2` and `y1 <= y <= y2`.

### Two submatrices `(x1, y1, x2, y2)` and `(x1', y1', x2', y2')` are **different** if they have at least one coordinate that differs (e.g., `x1 != x1'`).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="./Images/1074 que.jpg" width="" height=""/>

  ### 📥 `Input`  ➤ `matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0`

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The four 1x1 submatrices that only contain 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `matrix = [[1,-1],[-1,1]], target = 0`

### 📤 `Output`  ➤ `5`

### 🔦 `Explanation`  ➤ Two **1x2 submatrices** `[1,-1]` and `[-1,1]`, two **2x1 submatrices** `[1,-1]` and `[-1,1]`, plus the **2x2 submatrix**.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `matrix = [[904]], target = 0`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation`  ➤ No submatrix sums to `0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= matrix.length <= 100` </br>
🔹 `1 <= matrix[0].length <= 100` </br>
🔹 `-1000 <= matrix[i][j] <= 1000` </br>
🔹 `-10^8 <= target <= 10^8` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.py)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
