# 36. Valid Sudoku

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/valid-sudoku/description/"><strong>➥ ☢️ 36 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1. Each row must contain the digits 1-9 without repetition.

2. Each column must contain the digits 1-9 without repetition.

3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

### Note:

- A Sudoku board (partially filled) could be valid but is not necessarily solvable.

- Only the filled cells need to be validated according to the mentioned rules.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c0c4f4ab-411c-43f9-9214-c14377a3fa72" width="250px" height="250px"/>

  ### 📥 `Input`  ➤  board = 

    [["5","3",".",".","7",".",".",".","."]
    ,["6",".",".","1","9","5",".",".","."]
    ,[".","9","8",".",".",".",".","6","."]
    ,["8",".",".",".","6",".",".",".","3"]
    ,["4",".",".","8",".","3",".",".","1"]
    ,["7",".",".",".","2",".",".",".","6"]
    ,[".","6",".",".",".",".","2","8","."]
    ,[".",".",".","4","1","9",".",".","5"]
    ,[".",".",".",".","8",".",".","7","9"]]

  ### 📤 `Output`  ➤ true

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ board = 

    [["8","3",".",".","7",".",".",".","."]
    ,["6",".",".","1","9","5",".",".","."]
    ,[".","9","8",".",".",".",".","6","."]
    ,["8",".",".",".","6",".",".",".","3"]
    ,["4",".",".","8",".","3",".",".","1"]
    ,["7",".",".",".","2",".",".",".","6"]
    ,[".","6",".",".",".",".","2","8","."]
    ,[".",".",".","4","1","9",".",".","5"]
    ,[".",".",".",".","8",".",".","7","9"]]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`board.length == 9`** </br>

🔹 **`board[i].length == 9`** </br>

🔹 **`board[i][j]` is a digit 1-9 or `'.'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2008%20%F0%9F%A5%A1%2036.%20Valid%20Sudoku%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2036.%20Valid%20Sudoku.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2008%20%F0%9F%A5%A1%2036.%20Valid%20Sudoku%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2036.%20Valid%20Sudoku.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2008%20%F0%9F%A5%A1%2036.%20Valid%20Sudoku%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2036.%20Valid%20Sudoku.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2008%20%F0%9F%A5%A1%2036.%20Valid%20Sudoku%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2036.%20Valid%20Sudoku.js) |
