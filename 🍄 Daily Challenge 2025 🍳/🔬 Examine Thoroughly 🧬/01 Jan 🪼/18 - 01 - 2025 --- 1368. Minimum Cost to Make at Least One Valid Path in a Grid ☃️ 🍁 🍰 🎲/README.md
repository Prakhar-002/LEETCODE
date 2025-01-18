# 1368. Minimum Cost to Make at Least One Valid Path in a Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/description/?envType=daily-question&envId=2025-01-18"><strong>➥ ☢️ 1368 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an `m x n` grid. Each cell of the grid has a sign pointing to the next cell you should visit if you are currently in this cell. The sign of `grid[i][j]` can be:

- 1 which means go to the cell to the right. (i.e go from `grid[i][j]` to `grid[i][j + 1]`)

- 2 which means go to the cell to the left. (i.e go from `grid[i][j]` to `grid[i][j - 1]`)

- 3 which means go to the lower cell. (i.e go from `grid[i][j]` to `grid[i + 1][j]`)

- 4 which means go to the upper cell. (i.e go from `grid[i][j]` to `grid[i - 1][j]`)

### Notice that there could be some signs on the cells of the grid that point outside the grid.

### You will initially start at the upper left cell `(0, 0)`. A valid path in the grid is a path that starts from the upper left cell `(0, 0)` and ends at the bottom-right cell `(m - 1, n - 1)` following the signs on the grid. The valid path does not have to be the shortest.

### You can modify the sign on a cell with `cost = 1`. You can modify the sign on a cell one time only.

### Return *the minimum cost to make the grid have at least one valid path*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [[1,1,1,1],[2,2,2,2],[1,1,1,1],[2,2,2,2]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ You will start at point (0, 0).</br> The path to (3, 3) is as follows. (0, 0) --> (0, 1) --> (0, 2) --> (0, 3) change the arrow to down with cost = 1 --> (1, 3) --> (1, 2) --> (1, 1) --> (1, 0) change the arrow to down with cost = 1 --> (2, 0) --> (2, 1) --> (2, 2) --> (2, 3) change the arrow to down with cost = 1 --> (3, 3)</br> The total cost = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  grid = [[1,1,3],[3,2,2],[1,1,4]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ You can follow the path from (0, 0) to (2, 2).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,2],[4,3]]

  ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= m, n <= 100`** </br>

🔹 **`1 <= grid[i][j] <= 4`** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
