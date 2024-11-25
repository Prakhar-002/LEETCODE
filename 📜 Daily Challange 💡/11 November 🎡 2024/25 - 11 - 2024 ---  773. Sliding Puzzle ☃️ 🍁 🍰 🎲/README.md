# 773. Sliding Puzzle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sliding-puzzle/description/?envType=daily-question&envId=2024-11-25"><strong>➥ 🫀 773 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### On an `2 x 3` board, there are five tiles labeled from `1` to `5`, and an empty square represented by `0`. A `move` consists of choosing `0` and a 4-directionally adjacent number and swapping it.

### The state of the board is solved if and only if the board is `[[1,2,3],[4,5,0]]`.

### Given the puzzle board `board`, return *the least number of moves required so that the state of the board is solved*. If it is impossible for the state of the board to be solved, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![773 que 1](https://github.com/user-attachments/assets/965b21f1-8d46-4f2d-8446-f05096d6cf07)

  ### 📥 `Input`  ➤ board = [[1,2,3],[4,0,5]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ Swap the 0 and the 5 in one move.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![773 que 2](https://github.com/user-attachments/assets/ffadfe7f-c59e-44f9-a21c-3aabe3cf223d)

  ### 📥 `Input` ➤ board = [[1,2,3],[5,4,0]]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ No number of moves will make the board solved.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![773 que 3](https://github.com/user-attachments/assets/1947f145-c027-4ecb-ab7a-0993ea5e4abe)

  ### 📥 `Input` ➤ board = [[4,1,2],[5,0,3]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ 5 is the smallest number of moves that solves the board.
    An example path:
    After move 0: [[4,1,2],[5,0,3]]
    After move 1: [[4,1,2],[0,5,3]]
    After move 2: [[0,1,2],[4,5,3]]
    After move 3: [[1,0,2],[4,5,3]]
    After move 4: [[1,2,0],[4,5,3]]
    After move 5: [[1,2,3],[4,5,0]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`board.length == 2`** </br>

🔹 **`board[i].length == 3`** </br>

🔹 **`0 <= board[i][j] <= 5`** </br>

🔹 **Each value `board[i][j]` is unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/25%20-%2011%20-%202024%20---%20%20773.%20Sliding%20Puzzle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20773.%20Sliding%20Puzzle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/25%20-%2011%20-%202024%20---%20%20773.%20Sliding%20Puzzle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20773.%20Sliding%20Puzzle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/25%20-%2011%20-%202024%20---%20%20773.%20Sliding%20Puzzle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20773.%20Sliding%20Puzzle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/25%20-%2011%20-%202024%20---%20%20773.%20Sliding%20Puzzle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20773.%20Sliding%20Puzzle.js) |

