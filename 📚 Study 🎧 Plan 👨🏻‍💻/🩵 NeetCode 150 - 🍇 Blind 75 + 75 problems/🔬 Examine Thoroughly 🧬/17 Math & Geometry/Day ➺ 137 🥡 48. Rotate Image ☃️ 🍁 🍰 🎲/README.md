# 48. Rotate Image


</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rotate-image/description/"><strong>➥ ☢️ 48 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br> 

# Description 📜 ˋ°•*⁀➷

### You are given an `n x n` 2D `matrix` representing an image, rotate the image by 90 degrees (clockwise).

### You have to rotate the image [in-place](https://en.wikipedia.org/wiki/In-place_algorithm), which means you have to modify the input 2D matrix directly. `DO NOT` allocate another 2D matrix and do the rotation.

 
</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![48](https://github.com/Prakhar-002/LEETCODE/assets/136890202/3d5567eb-8023-4c6f-8aa9-e4c5f243fc2b)

  ### Input ➤  matrix = [[1,2,3],[4,5,6],[7,8,9]]

  ### Output  ➤  [[7,4,1],[8,5,2],[9,6,3]]

</br>

![48 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/5ee0e6e1-93ed-476c-a17c-627825db60f1)

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ matrix = [[5,1 ,9, 11 ],[ 2,4, 8, 10 ],[ 13,3 ,6 ,7 ],[ 15,1 4, 12, 16]]

  ### Output  ➤ [[15, 13, 2, 5], [14, 3, 4, 1], [12, 6, 8, 9], [16, 7, 10, 11]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == matrix.length == matrix[i].length**
- **1 <= n <= 20**
- **-1000 <= matrix[i][j] <= 1000**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Matrix**
3. **Math**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2048.%20Rotate%20Image%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_48_RotateImage.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2048.%20Rotate%20Image%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_48_RotateImage.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2048.%20Rotate%20Image%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_48_RotateImage.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2048.%20Rotate%20Image%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_48_RotateImage.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2048.%20Rotate%20Image%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_48_RotateImage.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
