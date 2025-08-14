# 994. Rotting Oranges

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rotting-oranges/description/"><strong>➥ ☢️ 994 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` 2D grid named `grid`. Each cell in the grid can contain one of three values:

- 0: Represents an empty cell.
- 1: Represents a fresh orange.
- 2: Represents a rotten orange.

### The premise of the problem: every minute, any fresh orange (value 1) that is 4-directionally adjacent to a rotten orange (value 2) becomes rotten itself. This process continues, minute by minute.

### The task is to determine the *minimum* number of minutes that must pass until there are no fresh oranges left in the grid. If it is impossible for all fresh oranges to rot, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/03f7b945-5d48-4759-bc2a-53eabdee3c0" width="" height=""/>

  ### 📥 `Input`  ➤ grid = [[2,1,1],[1,1,0],[0,1,1]]

  ### 📤 `Output`  ➤ 4

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[2,1,1],[0,1,1],[1,0,1]]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[0,2]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ Since there are already no fresh oranges at minute 0, the answer is just 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == grid.length </br>

🔹 n == grid[i].length </br>

🔹 1 <= m, n <= 10 </br>

🔹 grid[i][j] is 0, 1, or 2. </br>

</br>

# Topics 📋 

🔸 **Array** </br>

🔸 **Breadth-First Search** </br>

🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2085%20%F0%9F%A5%A1%20994.%20Rotting%20Oranges%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20994.%20Rotting%20Oranges.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2085%20%F0%9F%A5%A1%20994.%20Rotting%20Oranges%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20994.%20Rotting%20Oranges.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2085%20%F0%9F%A5%A1%20994.%20Rotting%20Oranges%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20994.%20Rotting%20Oranges.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Graphs/Day%20%E2%9E%BA%2085%20%F0%9F%A5%A1%20994.%20Rotting%20Oranges%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20994.%20Rotting%20Oranges.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9129f636-6826-4f50-a669-0cdf83e6ea82" width = "700px" height="462px" />

</h1>
