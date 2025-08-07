# 3363. Find the Maximum Number of Fruits Collected

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-maximum-number-of-fruits-collected/description/?envType=daily-question&envId=2025-08-07"><strong>➥ 🫀 3363 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a game dungeon comprised of an `n x n` grid. You are also provided a 2D integer array `fruits` of size `n x n`, where `fruits[i][j]` represents the number of fruits present in the room located at coordinates (i, j).

### Three children are playing in the game dungeon. They start from these initial positions: (0, 0), (0, n - 1), and (n - 1, 0).

### Each child must make exactly `n - 1` moves to reach the destination room at (n - 1, n - 1), following specific movement rules:

- **Child 1 (starts at (0, 0)):** From their current room (i, j), they can move to one of these rooms (if they exist):
    - (i + 1, j + 1)
    - (i + 1, j)
    - (i, j + 1)
- **Child 2 (starts at (0, n - 1)):** From their current room (i, j), they can move to one of these rooms (if they exist):
    - (i + 1, j - 1)
    - (i + 1, j)
    - (i + 1, j + 1)
- **Child 3 (starts at (n - 1, 0)):** From their current room (i, j), they can move to one of these rooms (if they exist):
    - (i - 1, j + 1)
    - (i, j + 1)
    - (i + 1, j + 1)

### Whenever a child enters a room, they automatically collect all the fruits in that room. If two or more children enter the same room, only *one* child collects the fruits, and after they leave, the room is emptied.

### Your task is to determine and return the *maximum* total number of fruits that these three children can collect from the dungeon, by strategically coordinating their movements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ fruits = [[1,2,3,4],[5,6,8,7],[9,10,11,12],[13,14,15,16]]

  ### 📤 `Output`  ➤ 100

  ### 🔦 `Explanation`  ➤

<img src="https://github.com/user-attachments/assets/3b497493-bf10-411e-a2d9-ddbdf834faef" width="" height=""/>

In this example:

- The 1st child (green) moves on the path (0,0) -> (1,1) -> (2,2) -> (3, 3).
- The 2nd child (red) moves on the path (0,3) -> (1,2) -> (2,3) -> (3, 3).
- The 3rd child (blue) moves on the path (3,0) -> (3,1) -> (3,2) -> (3, 3).

In total they collect 1 + 6 + 11 + 16 + 4 + 8 + 12 + 13 + 14 + 15 = 100 fruits.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ fruits = [[1,1],[1,1]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤

In this example:

- The 1st child moves on the path (0,0) -> (1,1).
- The 2nd child moves on the path (0,1) -> (1,1).
- The 3rd child moves on the path (1,0) -> (1,1).

In total they collect 1 + 1 + 1 + 1 = 4 fruits.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n == fruits.length == fruits[i].length <= 1000 </br>

🔹 0 <= fruits[i][j] <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Dynamic Programming**  </br>

🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
