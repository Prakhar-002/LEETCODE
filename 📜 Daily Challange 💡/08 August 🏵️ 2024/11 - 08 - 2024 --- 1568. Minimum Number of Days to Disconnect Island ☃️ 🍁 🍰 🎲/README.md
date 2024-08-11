# 1568. Minimum Number of Days to Disconnect Island

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/description/?envType=daily-question&envId=2024-08-11"><strong>➥ 🫀 1568 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` binary grid `grid` where `1` represents land and `0` represents water. An `island` is a maximal `4-directionally` (horizontal or vertical) connected group of `1`'s.

### The grid is said to be `connected` if we have `exactly one island`, otherwise is said `disconnected`.

### In one day, we are allowed to change *any* single land cell `(1)` into a water cell `(0)`.

### Return *the minimum number of days to disconnect the grid*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1568 que 1](https://github.com/user-attachments/assets/9227580a-8a99-413e-80ea-dd72b32351a6)


  ### 📥 `Input`  ➤ grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ We need at least 2 days to get a disconnected grid. </br>Change land grid[1][1] and grid[0][2] to water and get 2 disconnected island.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1568 que 2](https://github.com/user-attachments/assets/cdb58ddb-1828-4a2a-b111-0369274de827)

  ### 📥 `Input` ➤ grid = [[1,1]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ Grid of full water is also disconnected ([[1,1]] -> [[0,0]]), 0 islands.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= m, n <= 30`** </br>

🔹 **`grid[i][j]` is either `0` or `1`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Matrix**  </br>
🔸 **Strongly Connected Component**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/11%20-%2008%20-%202024%20---%201568.%20Minimum%20Number%20of%20Days%20to%20Disconnect%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1568-MinimumNumberOfDaysToDisconnectIsland.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/11%20-%2008%20-%202024%20---%201568.%20Minimum%20Number%20of%20Days%20to%20Disconnect%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1568-MinimumNumberOfDaysToDisconnectIsland.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/11%20-%2008%20-%202024%20---%201568.%20Minimum%20Number%20of%20Days%20to%20Disconnect%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1568-MinimumNumberOfDaysToDisconnectIsland.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/11%20-%2008%20-%202024%20---%201568.%20Minimum%20Number%20of%20Days%20to%20Disconnect%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1568-MinimumNumberOfDaysToDisconnectIsland.js) |
