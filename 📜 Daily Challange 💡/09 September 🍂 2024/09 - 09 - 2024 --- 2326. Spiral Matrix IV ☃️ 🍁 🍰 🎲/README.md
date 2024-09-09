# 2326. Spiral Matrix IV

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/spiral-matrix-iv/description/?envType=daily-question&envId=2024-09-09"><strong>➥ ☢️ 2326 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers `m` and `n`, which represent the dimensions of a matrix.

### You are also given the `head` of a linked list of integers.

### Generate an `m x n` matrix that contains the integers in the linked list presented in `spiral` order `(clockwise)`, starting from the `top-left` of the matrix. If there are remaining empty spaces, fill them with `-1`.

### Return *the generated matrix*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2326 que 1](https://github.com/user-attachments/assets/24bc51d2-72ad-4b7d-bbe9-651b485a7f81)

  ### 📥 `Input`  ➤ m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]

  ### 📤 `Output`  ➤ [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]

  ### 🔦 `Explanation`  ➤ ➺The diagram above shows how the values are printed in the matrix. </br> Note that the remaining spaces in the matrix are filled with -1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2326 que 2](https://github.com/user-attachments/assets/17e8a3d8-d937-47a1-ac31-16506b8d7864)

  ### 📥 `Input` ➤ m = 1, n = 4, head = [0,1,2]

  ### 📤 `Output`  ➤ [[0,1,2,-1]]

  ### 🔦 `Explanation` ➤ The diagram above shows how the values are printed from left to right in the matrix.</br> The last space in the matrix is set to -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **1 <= m * n <= 10<sup>5</sup>** </br>

🔹 **The number of nodes in the list is in the range `[1, m * n]`.** </br>

🔹 **`0 <= Node.val <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Linked List**  </br>
🔸 **Matrix**  </br>
🔸 **Simulation**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### 🍫 [Spiral Matrix](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2054.%20Spiral%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2) </br>
### 🍫 [Spiral Matrix II](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2059.%20Spiral%20Matrix%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96)  </br>
### 🍫 [Spiral Matrix III](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/08%20-%2008%20-%202024%20---%20885.%20Spiral%20Matrix%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2)  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/09%20-%2009%20-%202024%20---%202326.%20Spiral%20Matrix%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2326-SpiralMatrix-IV.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/09%20-%2009%20-%202024%20---%202326.%20Spiral%20Matrix%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2326-SpiralMatrix-IV.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/09%20-%2009%20-%202024%20---%202326.%20Spiral%20Matrix%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2326-SpiralMatrix-IV.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/09%20-%2009%20-%202024%20---%202326.%20Spiral%20Matrix%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2326-SpiralMatrix-IV.js) |
