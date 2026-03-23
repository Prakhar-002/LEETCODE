# 1594. Maximum Non Negative Product in a Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/description/?envType=daily-question&envId=2026-03-23"><strong>➥ ☢️ 1594 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a `m x n` matrix `grid`. Initially, you are located at the **top-left corner** `(0, 0)`, and in each step, you can only move **right or down** in the matrix.
### Among all possible paths starting from the **top-left corner** `(0, 0)` and ending in the **bottom-right corner** `(m - 1, n - 1)`, find the path with the **maximum non-negative product**. The product of a path is the product of all integers in the grid cells visited along the path.
### Return the **maximum non-negative product modulo** `10^9 + 7`. If the maximum product is **negative**, return `-1`.
### **Notice** that the modulo is performed **after** getting the maximum product.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="244" height="245" alt="image" src="https://github.com/user-attachments/assets/cfe77140-8641-4817-80c3-966901652439" />

  ### 📥 `Input`  ➤ grid = [[-1,-2,-3],[-2,-3,-3],[-3,-3,-2]]
  ### 📤 `Output`  ➤ -1
  ### 🔦 `Explanation`  ➤ It is not possible to get a non-negative product in any path from `(0,0)` to `(2,2)`, so return `-1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="244" height="245" alt="image" src="https://github.com/user-attachments/assets/e198cca4-dbd2-416e-b4dd-e29be8cb8240" />

  ### 📥 `Input` ➤ grid = [[1,-2,1],[1,-2,1],[3,-4,1]]
  ### 📤 `Output`  ➤ 8
  ### 🔦 `Explanation` ➤ Maximum non-negative product is `1 * 1 * -2 * -4 * 1 = 8`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="164" height="165" alt="image" src="https://github.com/user-attachments/assets/23d3d92d-6e49-4dcf-aadb-be69f876a511" />

  ### 📥 `Input` ➤ grid = [[1,3],[0,-4]]
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ Maximum non-negative product is `1 * 0 * -4 = 0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `m == grid.length` </br>
🔹 `n == grid[i].length` </br>
🔹 `1 <= m, n <= 15` </br>
🔹 `-4 <= grid[i][j] <= 4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
