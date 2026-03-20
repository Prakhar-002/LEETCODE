# 3567. Minimum Absolute Difference in Sliding Submatrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/description/?envType=daily-question&envId=2026-03-20"><strong>➥ ☢️ 3567 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` integer matrix `grid` and an integer `k`.
### For every contiguous `k x k` submatrix of `grid`, compute the **minimum absolute difference** between any two **distinct values** within that submatrix.
### Return a 2D array `ans` of size `(m - k + 1) x (n - k + 1)`, where `ans[i][j]` is the **minimum absolute difference** in the submatrix whose **top-left corner** is `(i, j)` in `grid`.
### **Note:** If all elements in the submatrix have the **same value**, the answer will be `0`.
### A submatrix `(x1, y1, x2, y2)` is a matrix that is formed by choosing all cells `matrix[x][y]` where `x1 <= x <= x2` and `y1 <= y <= y2`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ grid = [[1,8],[3,-2]], k = 2
  ### 📤 `Output`  ➤ [[2]]
  ### 🔦 `Explanation`  ➤ There is only one possible `k x k` submatrix: `[[1,8],[3,-2]]`. Distinct values are `[1,8,3,-2]`. The minimum absolute difference is `|1 - 3| = 2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[3,-1]], k = 1
  ### 📤 `Output`  ➤ [[0,0]]
  ### 🔦 `Explanation` ➤ Both `k x k` submatrices have only one distinct element each. Thus, the answer is `[[0, 0]]`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,-2,3],[2,3,5]], k = 2
  ### 📤 `Output`  ➤ [[1,2]]
  ### 🔦 `Explanation` ➤ Submatrix starting at `(0,0)`: `[[1,-2],[2,3]]` → min diff = `|1 - 2| = 1`. Submatrix starting at `(0,1)`: `[[-2,3],[3,5]]` → min diff = `|3 - 5| = 2`. Thus, the answer is `[[1, 2]]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= m == grid.length <= 30` </br>
🔹 `1 <= n == grid[i].length <= 30` </br>
🔹 `-10^5 <= grid[i][j] <= 10^5` </br>
🔹 `1 <= k <= min(m, n)` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Sorting** </br>
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

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
