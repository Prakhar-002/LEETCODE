# 73. Set Matrix Zeroes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/set-matrix-zeroes/description/"><strong>➥ ☢️ 73 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

### You must do it in place.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/d519ce90-93a9-40ec-afc8-eef7a0118521" width="450px" height="169px"/>

  ### 📥 `Input`  ➤  matrix = [[1,1,1],[1,0,1],[1,1,1]]

  ### 📤 `Output`  ➤  [[1,0,1],[0,0,0],[1,0,1]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/fcf1fedf-3c83-42ba-97a6-bc1a7f1b0e34" width="450px" height="137px"/>

  ### 📥 `Input` ➤ matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

  ### 📤 `Output`  ➤ [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == matrix.length`** </br>

🔹 **`n == matrix[0].length`** </br>

🔹 **`1 <= m, n <= 200`** </br>

🔹 **-2<sup>31</sup> <= matrix[i][j] <= 2<sup>31</sup> - 1** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2073.%20Set%20Matrix%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%2073.%20Set%20Matrix%20Zeroes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2073.%20Set%20Matrix%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%2073.%20Set%20Matrix%20Zeroes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2073.%20Set%20Matrix%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%2073.%20Set%20Matrix%20Zeroes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2073.%20Set%20Matrix%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2073.%20Set%20Matrix%20Zeroes.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2073.%20Set%20Matrix%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%2073.%20Set%20Matrix%20Zeroes.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/514fdf28-761f-43e7-bf46-43fbd072a509" width = "700px" height="462px" />

</h1>
