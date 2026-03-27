# 2946. Matrix Similarity After Cyclic Shifts

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/description/?envType=daily-question&envId=2026-03-27"><strong>➥ ♻️ 2496 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` integer matrix `mat` and an integer `k`. The matrix rows are **0-indexed**.
### The following process happens `k` times:
### &nbsp;&nbsp;&nbsp;&nbsp;• **Even-indexed** rows `(0, 2, 4, ...)` are cyclically shifted to the **left**.
<img width="288" height="88" alt="image" src="https://github.com/user-attachments/assets/f21bc318-fe94-4392-81fa-b2cb5cd5b99d" />

### &nbsp;&nbsp;&nbsp;&nbsp;• **Odd-indexed** rows `(1, 3, 5, ...)` are cyclically shifted to the **right**.
<img width="283" height="90" alt="image" src="https://github.com/user-attachments/assets/97901bb9-df15-4eb3-ba2b-a61d7a471859" />

### Return `true` if the final modified matrix after `k` steps is **identical** to the original matrix, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ mat = [[1,2,3],[4,5,6],[7,8,9]], k = 4
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation`  ➤ In each step, **left shift** is applied to rows `0` and `2` (even indices), and **right shift** to row `1` (odd index). After `4` steps, the matrix does not return to its original state.

<img width="647" height="113" alt="image" src="https://github.com/user-attachments/assets/fdaae3d7-a1c0-4649-b5e9-19f1c11f843a" />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ mat = [[1,2,1,2],[5,5,5,5],[6,3,6,3]], k = 2
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ After `2` cyclic shift steps, the matrix returns to its original state due to the **repeating pattern** in each row.

<img width="632" height="149" alt="image" src="https://github.com/user-attachments/assets/768b9768-daa3-4a1b-9f23-5d4d3f350804" />

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ mat = [[2,2],[2,2]], k = 3
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ As **all values are equal** in the matrix, even after performing cyclic shifts the matrix will remain the same.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= mat.length <= 25` </br>
🔹 `1 <= mat[i].length <= 25` </br>
🔹 `1 <= mat[i][j] <= 25` </br>
🔹 `1 <= k <= 50` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Matrix** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
