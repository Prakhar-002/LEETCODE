# 1886. Determine Whether Matrix Can Be Obtained By Rotation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/?envType=daily-question&envId=2026-03-22"><strong>➥ ♻️ 1886 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given two `n x n` binary matrices `mat` and `target`, return `true` if it is possible to make `mat` equal to `target` by **rotating** `mat` in **90-degree increments**, or `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="301" height="121" alt="image" src="https://github.com/user-attachments/assets/2fe623e6-4ccb-457d-ae2c-364c09c4357a" />

  ### 📥 `Input`  ➤ mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ We can rotate `mat` **90 degrees clockwise** to make `mat` equal `target`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="301" height="121" alt="image" src="https://github.com/user-attachments/assets/fbabcdde-0001-4730-9191-947eab74bee6" />

  ### 📥 `Input` ➤ mat = [[0,1],[1,1]], target = [[1,0],[0,1]]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ It is **impossible** to make `mat` equal to `target` by rotating `mat`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="661" height="184" alt="image" src="https://github.com/user-attachments/assets/4c33b9d2-e0d0-499e-98a4-3c3d1cf2d212" />

  ### 📥 `Input` ➤ mat = [[0,0,0],[0,1,0],[1,1,1]], target = [[1,1,1],[0,1,0],[0,0,0]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ We can rotate `mat` **90 degrees clockwise two times** to make `mat` equal `target`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `n == mat.length == target.length` </br>
🔹 `n == mat[i].length == target[i].length` </br>
🔹 `1 <= n <= 10` </br>
🔹 `mat[i][j]` and `target[i][j]` are either `0` or `1`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201886.%20Determine%20Whether%20Matrix%20Can%20Be%20Obtained%20By%20Rotation.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1aa2159c-76e2-4a31-9967-151420cebf24" width = "700px" height="462px" />

</h1>
