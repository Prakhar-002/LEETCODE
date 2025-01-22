# 1765. Map of Highest Peak

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/map-of-highest-peak/description/?envType=daily-question&envId=2025-01-22"><strong>➥ ☢️ 1765 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer matrix `isWater` of size `m x n` that represents a map of `land` and `water` cells.

- If `isWater[i][j] == 0`, cell `(i, j)` is a `land` cell.

- If `isWater[i][j] == 1`, cell `(i, j)` is a `water` cell.

### You must assign each cell a height in a way that follows these rules:

- The height of each cell must be non-negative.

- If the cell is a water cell, its height must be `0`.

- Any two adjacent cells must have an absolute height difference of at most `1`. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).

### Find an assignment of heights such that the maximum height in the matrix is `maximized`.

### Return *an integer matrix* `height` *of size* `m x n` *where* `height[i][j]` *is cell* `(i, j)`'s *height. If there are multiple solutions*, return `any` *of them*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ isWater = [[0,1],[0,0]]

  ### 📤 `Output`  ➤ [[1,0],[2,1]]

  ### 🔦 `Explanation`  ➤ The image shows the assigned heights of each cell.</br> The blue cell is the water cell, and the green cells are the land cells.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ isWater = [[0,0,1],[1,0,0],[0,0,0]]

  ### 📤 `Output`  ➤ [[1,1,0],[0,1,1],[1,2,2]]

  ### 🔦 `Explanation` ➤ A height of 2 is the maximum possible height of any assignment.</br> Any height assignment that has a maximum height of 2 while still meeting the rules will also be accepted.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == isWater.length`** </br>

🔹 **`n == isWater[i].length`** </br>

🔹 **`1 <= m, n <= 1000`** </br>

🔹 **`isWater[i][j]` is `0` or `1.`** </br>

🔹 **There is at least one water cell.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Matrix**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ☢️ [542. 01 Matrix]() </br>

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


