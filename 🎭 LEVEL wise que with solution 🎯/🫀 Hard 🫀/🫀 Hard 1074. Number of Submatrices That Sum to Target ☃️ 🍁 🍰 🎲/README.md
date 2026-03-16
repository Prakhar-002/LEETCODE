# 1074. Number of Submatrices That Sum to Target

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a **matrix** and a **target**, return the number of **non-empty submatrices** that sum to `target`.

### A **submatrix** `x1, y1, x2, y2` is the set of all cells `matrix[x][y]` where `x1 <= x <= x2` and `y1 <= y <= y2`.

### Two submatrices `(x1, y1, x2, y2)` and `(x1', y1', x2', y2')` are **different** if they have at least one coordinate that differs (e.g., `x1 != x1'`).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://im.ge/i/1074-que-1.eKlvMG" width="" height=""/>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
