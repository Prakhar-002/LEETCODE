# Q4. Island Perimeter

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/island-perimeter/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-bfs"><strong>➥ ♻️ Q4 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `row x col` grid representing a map where `grid[i][j] = 1` represents land and `grid[i][j] = 0` represents water. 

### Grid cells are connected **horizontally/vertically** (not diagonally). The grid is completely surrounded by water, and there is exactly **one island** (one or more connected land cells). 

### The island does not have **lakes**, meaning any water inside the island is not connected to the water around it. Each cell is a square with side length `1`, and both width and height of the grid do not exceed `100`. Determine the **perimeter of the island**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="221" height="213" alt="463 que 1" src="https://github.com/user-attachments/assets/7d79c425-b915-4277-acd5-252fe119ed55" />

### 📥 `Input`  ➤ `grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]`

### 📤 `Output`  ➤ `16`

### 🔦 `Explanation`  ➤ The perimeter of the island in this grid is `16`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `grid = [[1]]`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation` ➤ A single land cell with no neighbors has perimeter `4`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `grid = [[1,0]]`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation` ➤ One land cell next to water still has perimeter `4`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `row == grid.length` </br>
🔹 `col == grid[i].length` </br>
🔹 `1 <= row, col <= 100` </br>
🔹 `grid[i][j]` is `0` or `1`. </br>
🔹 There is exactly **one island** in `grid`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Matrix** </br>


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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
