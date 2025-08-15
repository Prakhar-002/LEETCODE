# 130. Surrounded Regions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/surrounded-regions/description/"><strong>➥ ☢️ 130 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` 2D binary matrix called `board`, where each cell contains either 'X' or 'O'. The goal is to "capture" certain regions on the board, following these rules:

1. **Connect:** 'O' cells form a region when they are connected to each other horizontally or vertically (4-directionally).
2. **Region:** A region consists entirely of connected 'O' cells.
3. **Surround:** A region is considered "surrounded" if it is completely enclosed by 'X' cells and *none* of the 'O' cells forming the region are located on the *edge* of the board.

### The objective is to capture the surrounded regions. You need to modify the original `board` *in-place* by replacing all 'O's belonging to surrounded regions with 'X's. There is no return value required for this function.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ board = [["X","X","X","X"], ["X","O","O","X"], ["X","X","O","X"], ["X","O","X","X"]]

  ### 📤 `Output`  ➤ [["X","X","X","X"], ["X","X","X","X"], ["X","X","X","X"], ["X","O","X","X"]]

  ### 🔦 `Explanation`  ➤ In the above diagram, the bottom region is not captured because it is on the edge of the board and cannot be surrounded.

<img src="https://github.com/user-attachments/assets/5e0d44b1-a73a-4b0f-ba34-1010c74749c4" width="" height=""/>

</br>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ board = [["X"]]

  ### 📤 `Output`  ➤ [["X"]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == board.length </br>

🔹 n == board[i].length </br>

🔹 1 <= m, n <= 200 </br>

🔹 board[i][j] is 'X' or 'O'. </br>

</br>

# Topics 📋 

🔸 **Array**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2087%20%F0%9F%A5%A1%20130.%20Surrounded%20Regions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20130.%20Surrounded%20Regions.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2087%20%F0%9F%A5%A1%20130.%20Surrounded%20Regions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20130.%20Surrounded%20Regions.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2087%20%F0%9F%A5%A1%20130.%20Surrounded%20Regions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20130.%20Surrounded%20Regions.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2087%20%F0%9F%A5%A1%20130.%20Surrounded%20Regions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20130.%20Surrounded%20Regions.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e28544d3-16b7-4a67-89ef-f11aac35d450" width = "700px" height="462px" />

</h1>
