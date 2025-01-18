# 2577. Minimum Time to Visit a Cell In a Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/description/?envType=daily-question&envId=2024-11-29"><strong>➥ 🫀 2577 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `m x n` matrix `grid` consisting of non-negative integers where `grid[row][col]` represents the minimum time required to be able to visit the cell `(row, col)`, which means you can visit the cell `(row, col)` only when the time you visit it is greater than or equal to `grid[row][col]`.

### You are standing in the top-left cell of the matrix in the 0<sup>th</sup> second, and you must move to any adjacent cell in the four directions: up, down, left, and right. Each move you make takes 1 second.

### Return *the minimum time required in which you can visit the bottom-right cell of the matrix*. If you cannot visit the bottom-right cell, then return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/95f2f4d4-ed79-4a5d-9cd3-7e975e0b8a92" width="201px" height="151px"/>

  ### 📥 `Input`  ➤ grid = [[0,1,3,2],[5,1,2,5],[4,3,8,6]]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ One of the paths that we can take is the following:</br> ➺ at t = 0, we are on the cell (0,0).</br> ➺ at t = 1, we move to the cell (0,1). It is possible because grid[0][1] <= 1.</br> ➺ at t = 2, we move to the cell (1,1). It is possible because grid[1][1] <= 2.</br> ➺ at t = 3, we move to the cell (1,2). It is possible because grid[1][2] <= 3.</br> ➺ at t = 4, we move to the cell (1,1). It is possible because grid[1][1] <= 4.</br> ➺ at t = 5, we move to the cell (1,2). It is possible because grid[1][2] <= 5.</br> ➺ at t = 6, we move to the cell (1,3). It is possible because grid[1][3] <= 6.</br> ➺ at t = 7, we move to the cell (2,3). It is possible because grid[2][3] <= 7.</br> ➺ The final time is 7. It can be shown that it is the minimum time possible.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/e4317df7-8775-4d89-a8f4-112a872dfde7" width="151px" height="151px"/>

  ### 📥 `Input` ➤ grid = [[0,2,4],[3,2,1],[1,0,4]]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ There is no path from the top left to the bottom-right cell.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`2 <= m, n <= 1000`** </br>

🔹 **4 <= m * n <= 10<sup>5</sup>** </br>

🔹 **0 <= grid[i][j] <= 10<sup>5</sup>** </br>

🔹 **`grid[0][0] == 0`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Matrix**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/29%20-%2011%20-%202024%20---%20%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/29%20-%2011%20-%202024%20---%20%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/29%20-%2011%20-%202024%20---%20%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/29%20-%2011%20-%202024%20---%20%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202577.%20Minimum%20Time%20to%20Visit%20a%20Cell%20In%20a%20Grid.js) |
