# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` 2D grid called `grid` initialized with the following three possible values:

1. `-1`: Represents a water cell that cannot be traversed.
2. `0`: Represents a treasure chest cell.
3. `INF`: Represents a land cell that can be traversed. `INF` is represented by the integer 2<sup>31</sup> - 1 = 2147483647.

### The task is to modify the `grid` in-place so that each land cell (represented by `INF` initially) is filled with the distance to its nearest treasure chest (represented by `0`). The distance is calculated based on 4-directional movement (up, down, left, right).

### If a particular land cell cannot reach *any* treasure chest, then its value should remain as `INF` (2147483647).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [
  [2147483647,-1,0,2147483647],
  [2147483647,2147483647,2147483647,-1],
  [2147483647,-1,2147483647,-1],
  [0,-1,2147483647,2147483647]
]

  ### 📤 `Output`  ➤ [
  [3,-1,0,1],
  [2,2,1,-1],
  [1,-1,2,-1],
  [0,-1,3,4]
]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [
  [0,-1],
  [2147483647,2147483647]
]

  ### 📤 `Output`  ➤ [
  [0,-1],
  [1,2]
]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == grid.length </br>

🔹 n == grid[i].length </br>

🔹 1 <= m, n <= 100 </br>

🔹 grid[i][j] is one of {-1, 0, 2147483647} </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
