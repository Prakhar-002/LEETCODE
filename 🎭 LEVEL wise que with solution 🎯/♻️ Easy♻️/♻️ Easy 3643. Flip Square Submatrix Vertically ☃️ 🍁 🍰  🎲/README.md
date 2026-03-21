# 3643. Flip Square Submatrix Vertically

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/flip-square-submatrix-vertically/description/?envType=daily-question&envId=2026-03-21"><strong>➥ ♻️ 3643 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` integer matrix `grid`, and three integers `x`, `y`, and `k`.
### The integers `x` and `y` represent the **row and column indices** of the **top-left corner** of a square submatrix and the integer `k` represents the **size (side length)** of the square submatrix.
### Your task is to **flip the submatrix** by reversing the order of its **rows vertically**.
### Return the **updated matrix**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="621" height="241" alt="image" src="https://github.com/user-attachments/assets/061539af-3fc7-4ed9-9d69-fb3d55c95d6c" />

  ### 📥 `Input`  ➤ grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], x = 1, y = 0, k = 3
  ### 📤 `Output`  ➤ [[1,2,3,4],[13,14,15,8],[9,10,11,12],[5,6,7,16]]
  ### 🔦 `Explanation`  ➤ The `3x3` submatrix starting at `(1,0)` has its rows reversed vertically, swapping row 1 and row 3 of the submatrix while row 2 stays in place.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="621" height="121" alt="image" src="https://github.com/user-attachments/assets/64d6a673-04be-4cc0-98cb-668effdab42a" />

  ### 📥 `Input` ➤ grid = [[3,4,2,3],[2,3,4,2]], x = 0, y = 2, k = 2
  ### 📤 `Output`  ➤ [[3,4,4,2],[2,3,2,3]]
  ### 🔦 `Explanation` ➤ The `2x2` submatrix starting at `(0,2)` has its rows reversed vertically, swapping the two rows within the submatrix columns only.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,2],[3,4],[5,6]], x = 0, y = 0, k = 3
  ### 📤 `Output`  ➤ [[5,6],[3,4],[1,2]]
  ### 🔦 `Explanation` ➤ The entire `3x2` submatrix starting at `(0,0)` with `k = 3` has all its rows reversed vertically, fully flipping the matrix top to bottom.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `m == grid.length` </br>
🔹 `n == grid[i].length` </br>
🔹 `1 <= m, n <= 50` </br>
🔹 `1 <= grid[i][j] <= 100` </br>
🔹 `0 <= x < m` </br>
🔹 `0 <= y < n` </br>
🔹 `1 <= k <= min(m - x, n - y)` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Two Pointers** </br>
🔸 **Matrix** </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
