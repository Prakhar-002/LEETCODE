# 2257. Count Unguarded Cells in the Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-unguarded-cells-in-the-grid/description/?envType=daily-question&envId=2024-11-21"><strong>➥ ☢️ 2257 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers `m` and `n` representing a 0-indexed `m x n` grid. You are also given two 2D integer arrays `guards` and walls where guards[i] = [row<sub>i</sub>, col<sub>i</sub>] and walls[j] = [row<sub>j</sub>, col<sub>j</sub>] represent the positions of the i<sup>th</sup> guard and j<sup>th</sup> wall respectively.

### A guard can see `every` cell in the four cardinal directions (north, east, south, or west) starting from their position unless `obstructed` by a wall or another guard. A cell is `guarded` if there is `at least` one guard that can see it.

### Return *the number of unoccupied cells that are `not guarded`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2257 que 1](https://github.com/user-attachments/assets/9abf028e-e386-4758-8c13-4b04401a4766)

  ### 📥 `Input`  ➤ m = 4, n = 6, guards = [[0,0],[1,1],[2,3]], walls = [[0,1],[2,2],[1,4]]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ The guarded and unguarded cells are shown in red and green respectively in the above diagram.</br> There are a total of 7 unguarded cells, so we return 7.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2257 que 2](https://github.com/user-attachments/assets/62f35bd7-0084-40e4-ada3-3f3a9ce0750f)

  ### 📥 `Input` ➤ m = 3, n = 3, guards = [[1,1]], walls = [[0,1],[1,0],[2,1],[1,2]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ The unguarded cells are shown in green in the above diagram.</br> There are a total of 4 unguarded cells, so we return 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **2 <= m * n <= 10<sup>5</sup>** </br>

🔹 **1 <= guards.length, walls.length <= 5 * 10<sup>4</sup>** </br>

🔹 **`2 <= guards.length + walls.length <= m * n`** </br>

🔹 **`guards[i].length == walls[j].length == 2`** </br>

🔹 **0 <= row<sub>i</sub>, row<sub>j</sub> < m** </br>

🔹 **0 <= col<sub>i</sub>, col<sub>j</sub> < n** </br>

🔹 **All the positions in `guards` and `walls` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/21%20-%2011%20-%202024%20---%20%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/21%20-%2011%20-%202024%20---%20%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/21%20-%2011%20-%202024%20---%20%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/21%20-%2011%20-%202024%20---%20%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202257.%20Count%20Unguarded%20Cells%20in%20the%20Grid.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
