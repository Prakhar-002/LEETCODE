# 542. 01 Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/01-matrix/description/"><strong>➥ ☢️ 542 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an `m x n` binary matrix `mat`, return *the distance of the nearest* `0` *for each cell*.

### The distance between two cells sharing a common edge is `1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/899be4b0-53a6-4764-9969-e7b21e6526b5" width="253px" height="253px"/>

  ### 📥 `Input`  ➤ mat = [[0,0,0],[0,1,0],[0,0,0]]

  ### 📤 `Output`  ➤ [[0,0,0],[0,1,0],[0,0,0]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/2f9f76c1-3092-41e3-8224-8b2fada5c6ab" width="253px" height="253px"/>

  ### 📥 `Input` ➤ mat = [[0,0,0],[0,1,0],[1,1,1]]

  ### 📤 `Output`  ➤ [[0,0,0],[0,1,0],[1,2,1]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == mat.length`** </br>

🔹 **`n == mat[i].length`** </br>

🔹 **1 <= m, n <= 10<sup>4</sup>** </br>

🔹 **1 <= m * n <= 10<sup>4</sup>** </br>

🔹 **`mat[i][j]` is either `0` or `1`.** </br>

🔹 **There is at least one `0` in mat.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20542.%2001%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20542.%2001%20Matrix.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20542.%2001%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20542.%2001%20Matrix.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20542.%2001%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20542.%2001%20Matrix.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20542.%2001%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20542.%2001%20Matrix.js) |
