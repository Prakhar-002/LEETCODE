# . Rotating the Box

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rotating-the-box/description/?envType=daily-question&envId=2024-11-23"><strong>➥ ☢️ 1861 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` matrix of characters `box` representing a side-view of a box. Each cell of the box is one of the following:

- A stone `'#'`
- A stationary obstacle `'*'`
- Empty `'.'`

### The box is rotated `90 degrees clockwise`, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity does not affect the obstacles' positions, and the inertia from the box's rotation does not affect the stones' horizontal positions.

### It is `guaranteed` that each stone in `box` rests on an obstacle, another stone, or the bottom of the box.

### Return *an `n x m` matrix representing the box after the rotation described above*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1861 que 1](https://github.com/user-attachments/assets/3f7c913e-6732-4605-bab5-375db79839f6)

  ### 📥 `Input`  ➤  box = [["#",".","#"]]

  ### 📤 `Output`  ➤

      [ ["."],
        ["#"],
        ["#"] ]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1861 que 2](https://github.com/user-attachments/assets/9a83bdb1-9565-481a-992a-0cd21ea5e71f)

  ### 📥 `Input` ➤  box = [["#",".","*","."], ["#","#","*","."]]

  ### 📤 `Output`  ➤

      [ ["#","."],
        ["#","#"],
        ["*","*"],
        [".","."] ]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![1861 que 3](https://github.com/user-attachments/assets/da2643ee-0cff-44fc-814e-46250cfde4e7)

  ### 📥 `Input` ➤  box = [["#","#","*",".","*","."], ["#","#","#","*",".","."], ["#","#","#",".","#","."]]

  ### 📤 `Output`  ➤

       [ [".","#","#"],
         [".","#","#"],
         ["#","#","*"],
         ["#","*","."],
         ["#",".","*"],
         ["#",".","."] ]
</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == box.length`** </br>

🔹 **`n == box[i].length`** </br>

🔹 **`1 <= m, n <= 500`** </br>

🔹 **`box[i][j]` is either `'#'`, `'*'`, or `'.'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

