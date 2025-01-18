# 2290. Minimum Obstacle Removal to Reach Corner

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-obstacle-removal-to-reach-corner/description/?envType=daily-question&envId=2024-11-28"><strong>➥ 🫀 2290 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D integer array grid of size m x n. Each cell has one of two values:

- `0` represents an `empty` cell,

- `1` represents an `obstacle` that may be removed.

### You can move up, down, left, or right from and to an empty cell.

### Return *the minimum number of obstacles to remove so you can move from the upper left corner* `(0, 0)` *to the lower right corner* `(m - 1, n - 1)`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/0e5dc1de-94ce-4f0d-b8b6-490f432ecf70" width="605px" height="246px" />

  ### 📥 `Input`  ➤ grid = [[0,1,1],[1,1,0],[1,1,0]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ We can remove the obstacles at (0, 1) and (0, 2) to create a path from (0, 0) to (2, 2).</br> It can be shown that we need to remove at least 2 obstacles, so we return 2.</br> Note that there may be other ways to remove 2 obstacles to create a path.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/95670c54-d360-4848-9acc-d97e330a38a5" width="405px" height="246px"/>

  ### 📥 `Input` ➤  grid = [[0,1,0,0,0],[0,1,0,1,0],[0,0,0,1,0]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  We can move from (0, 0) to (2, 4) without removing any obstacles, so we return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **`2 <= m * n <= 10<sup>5</sup>** </br>

🔹 **`grid[i][j] is either 0 or 1.`** </br>

🔹 **`grid[0][0] == grid[m - 1][n - 1] == 0`** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/28%20-%2011%20-%202024%20---%20%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/28%20-%2011%20-%202024%20---%20%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/28%20-%2011%20-%202024%20---%20%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/28%20-%2011%20-%202024%20---%20%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202290.%20Minimum%20Obstacle%20Removal%20to%20Reach%20Corner.js) |
