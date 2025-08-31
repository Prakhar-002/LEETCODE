# 37. Sudoku Solver

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/sudoku-solver/description/?envType=daily-question&envId=2025-08-31"><strong>➥ 🫀 37 Leetcode Hard 🫀 </strong></a>

</h2>

</br>

# Description 📜 ˋ°•\*⁀➷

### Write a program to solve a Sudoku puzzle by filling the empty cells. 

### A Sudoku solution must satisfy the rules: 

1. Each of the digits 1-9 must occur exactly once in each row.

2. Each of the digits 1-9 must occur exactly once in each column.

3. Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

### The '.' character indicates empty cells.

</br>

# Example 💡 1️⃣ ˋ°•\*⁀➷

<img src="https://github.com/user-attachments/assets/d041647e-151e-4a7a-9456-8d42992d3dff" width="" height=""/>

### 📥 `Input` ➤

```JS
board = [
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
```

### 📤 `Output` ➤

```JS
[
  ["5","3","4","6","7","8","9","1","2"],
  ["6","7","2","1","9","5","3","4","8"],
  ["1","9","8","3","4","2","5","6","7"],
  ["8","5","9","7","6","1","4","2","3"],
  ["4","2","6","8","5","3","7","9","1"],
  ["7","1","3","9","2","4","8","5","6"],
  ["9","6","1","5","3","7","2","8","4"],
  ["2","8","7","4","1","9","6","3","5"],
  ["3","4","5","2","8","6","1","7","9"]
]
```

### 🔦 `Explanation` ➤ The input board is shown above and the only valid solution is shown below:

<img src="https://github.com/user-attachments/assets/4f3b476a-f1d8-4bd1-a35b-c5aa9624586b" width="" height=""/>

</br>

# Constraints 🔒 ˋ°•\*⁀➷

🔹 `board.length == 9` </br>

🔹 `board[i].length == 9` </br>

🔹 `board[i][j]` is a digit or '.'. </br>

🔹 It is guaranteed that the input board has only one solution. </br>

</br>

# Topics 📋 ˋ°•\*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Backtracking** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/31%20-%2008%20-%202025%20---%20%2037.%20Sudoku%20Solver%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2037.%20Sudoku%20Solver.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/31%20-%2008%20-%202025%20---%20%2037.%20Sudoku%20Solver%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2037.%20Sudoku%20Solver.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/31%20-%2008%20-%202025%20---%20%2037.%20Sudoku%20Solver%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2037.%20Sudoku%20Solver.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/31%20-%2008%20-%202025%20---%20%2037.%20Sudoku%20Solver%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2037.%20Sudoku%20Solver.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1d0e8f07-cd97-43ad-818e-73cc94a25554" width = "700px" height="462px" />

</h1>
