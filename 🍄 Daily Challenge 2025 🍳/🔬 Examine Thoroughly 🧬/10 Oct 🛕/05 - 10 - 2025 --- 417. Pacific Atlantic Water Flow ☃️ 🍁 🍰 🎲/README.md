# 417. Pacific Atlantic Water Flow

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/pacific-atlantic-water-flow/description/"><strong>➥ ☢️ 417 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` rectangular island bordered by both the Pacific Ocean and the Atlantic Ocean. The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges.

### The island is divided into a grid of square cells. You are provided an `m x n` integer matrix called `heights`, where `heights[r][c]` represents the height above sea level of the cell located at coordinate (r, c).

### Rainwater falling on the island can flow to neighboring cells (directly north, south, east, or west) *only if* the neighboring cell's height is less than or equal to the height of the current cell. Furthermore, water can flow from any cell adjacent to an ocean directly into that ocean.

### The goal is to identify all cells from which rainwater can flow to both the Pacific and Atlantic oceans. Return a 2D list of grid coordinates, where each `result[i] = [ri, ci]` represents a cell at `heights[ri][ci]` that can reach both oceans.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]

  ### 📤 `Output`  ➤ [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]

  ### 🔦 `Explanation`  ➤ The following cells can flow to the Pacific and Atlantic oceans, as shown below:

```JS

    [0,4]: [0,4] -> Pacific Ocean
         [0,4] -> Atlantic Ocean
    [1,3]: [1,3] -> [0,3] -> Pacific Ocean
         [1,3] -> [1,4] -> Atlantic Ocean
    [1,4]: [1,4] -> [1,3] -> [0,3] -> Pacific Ocean
         [1,4] -> Atlantic Ocean
    [2,2]: [2,2] -> [1,2] -> [0,2] -> Pacific Ocean
         [2,2] -> [2,3] -> [2,4] -> Atlantic Ocean
    [3,0]: [3,0] -> Pacific Ocean
         [3,0] -> [4,0] -> Atlantic Ocean
    [3,1]: [3,1] -> [3,0] -> Pacific Ocean
         [3,1] -> [4,1] -> Atlantic Ocean
    [4,0]: [4,0] -> Pacific Ocean
         [4,0] -> Atlantic Ocean
```

Note that there are other possible paths for these cells to flow to the Pacific and Atlantic oceans.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ heights = [[1]]

  ### 📤 `Output`  ➤ [[0,0]]

  ### 🔦 `Explanation` ➤ The water can flow from the only cell to the Pacific and Atlantic oceans.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == heights.length </br>

🔹 n == heights[r].length </br>

🔹 1 <= m, n <= 200 </br>

🔹 0 <= heights[r][c] <= 10<sup>5</sup> </br>

</br>

# Topics 📋 

🔸 **Array**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2086%20%F0%9F%A5%A1%20417.%20Pacific%20Atlantic%20Water%20Flow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20417.%20Pacific%20Atlantic%20Water%20Flow.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2086%20%F0%9F%A5%A1%20417.%20Pacific%20Atlantic%20Water%20Flow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20417.%20Pacific%20Atlantic%20Water%20Flow.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2086%20%F0%9F%A5%A1%20417.%20Pacific%20Atlantic%20Water%20Flow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20417.%20Pacific%20Atlantic%20Water%20Flow.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2086%20%F0%9F%A5%A1%20417.%20Pacific%20Atlantic%20Water%20Flow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20417.%20Pacific%20Atlantic%20Water%20Flow.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷ 

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/403994e9-9010-42e0-97d7-60e5a612bb6d" width = "700px" height="462px" />

</h1>
