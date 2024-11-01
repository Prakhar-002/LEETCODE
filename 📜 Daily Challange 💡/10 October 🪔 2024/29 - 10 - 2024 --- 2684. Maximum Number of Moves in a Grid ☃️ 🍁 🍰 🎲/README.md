# 2684. Maximum Number of Moves in a Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-moves-in-a-grid/description/?envType=daily-question&envId=2024-10-29"><strong>➥ ☢️ 2684 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed `m x n` matrix `grid` consisting of positive integers.

### You can start at `any` cell in the first column of the matrix, and traverse the grid in the following way:

- From a cell `(row, col)`, you can move to any of the cells: `(row - 1, col + 1)`, `(row, col + 1)` and `(row + 1, col + 1)` such that the value of the cell you move to, should be `strictly` bigger than the value of the current cell.

### Return *the `maximum` number of `moves` that you can perform*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = 

![2684 que 1](https://github.com/user-attachments/assets/dacb6898-eb8b-4206-985c-76c1636fa7e5)

    [
      [2,4,3,5],
      [5,4,9,3],
      [3,4,2,11],
      [10,9,13,15]
    ]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ We can start at the cell (0, 0) and make the following moves:
    ➺ (0, 0) -> (0, 1).
    ➺ (0, 1) -> (1, 2).
    ➺ (1, 2) -> (2, 3).
    It can be shown that it is the maximum number of moves that can be made.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2684 que 2](https://github.com/user-attachments/assets/db4da6c1-35e4-4ca8-a30b-0ae8aa89f410)

  ### 📥 `Input` ➤ grid = 
    [
      [3,2,4],
      [2,1,9],
      [1,1,7]
    ]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ Starting from any cell in the first column we cannot perform any moves.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`2 <= m, n <= 1000`** </br>

🔹 **4 <= m * n <= 10<sup>5</sup>** </br>

🔹 **1 <= grid[i][j] <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/29%20-%2010%20-%202024%20---%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/29%20-%2010%20-%202024%20---%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/29%20-%2010%20-%202024%20---%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/29%20-%2010%20-%202024%20---%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202684.%20Maximum%20Number%20of%20Moves%20in%20a%20Grid.js) |
