# 2017. Grid Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/grid-game/description/?envType=daily-question&envId=2025-01-21"><strong>➥ ☢️ 2017 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D array `grid` of size `2 x n`, where `grid[r][c]` represents the number of points at position `(r, c)` on the matrix. Two robots are playing a game on this matrix.

### Both robots initially start at `(0, 0)` and want to reach (1, n-1). Each robot may only move to the right (`(r, c)` to `(r, c + 1)`) or down (`(r, c)` to `(r + 1, c)`).

### At the start of the game, the first robot moves from `(0, 0)` to `(1, n-1)`, collecting all the points from the cells on its path. For all cells `(r, c)` traversed on the path, `grid[r][c]` is set to 0. Then, the second robot moves from `(0, 0)` to `(1, n-1)`, collecting the points on its path. Note that their paths may intersect with one another.

### The first robot wants to minimize the number of points collected by the second robot. In contrast, the second robot wants to maximize the number of points it collects. If both robots play optimally, return *the number of points collected by the second robot*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/5bb2bb35-8d67-4a54-915d-643145eefd5f" width="388px" height="103px"/>

  ### 📥 `Input`  ➤ grid = [[2,5,4],[1,5,1]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.</br> The cells visited by the first robot are set to 0.</br> The second robot will collect 0 + 0 + 4 + 0 = 4 points.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/f70a28d6-27bb-4fd0-9b75-d2d6978e3f18" width="384px" height="105px"/>

  ### 📥 `Input` ➤ grid = [[3,3,1],[8,5,2]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.</br> The cells visited by the first robot are set to 0.</br> The second robot will collect 0 + 3 + 1 + 0 = 4 points.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/39b70f86-55c6-4bcd-9825-00c45226843b" width="493px" height="103px"/>

  ### 📥 `Input` ➤ grid = [[1,3,1,15],[1,3,3,1]]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.</br> The cells visited by the first robot are set to 0.</br> The second robot will collect 0 + 1 + 3 + 3 + 0 = 7 points.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`grid.length == 2`** </br>

🔹 **`n == grid[r].length`** </br>

🔹 **1 <= n <= 5 * 10<sup>4</sup>** </br>

🔹 **1 <= grid[r][c] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/21%20-%2001%20-%202025%20---%202017.%20Grid%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202017.%20Grid%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/21%20-%2001%20-%202025%20---%202017.%20Grid%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202017.%20Grid%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/21%20-%2001%20-%202025%20---%202017.%20Grid%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202017.%20Grid%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/21%20-%2001%20-%202025%20---%202017.%20Grid%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202017.%20Grid%20Game.js) |
