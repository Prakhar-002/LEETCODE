# 3212. Count Submatrices With Equal Frequency of X and Y

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/description/?envType=daily-question&envId=2026-03-19"><strong>➥ ☢️ 3212 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given a 2D character matrix `grid`, where `grid[i][j]` is either `'X'`, `'Y'`, or `'.'`, return the **number of submatrices** that contain:
### &nbsp;&nbsp;&nbsp;&nbsp;• `grid[0][0]`
### &nbsp;&nbsp;&nbsp;&nbsp;• an **equal frequency** of `'X'` and `'Y'`.
### &nbsp;&nbsp;&nbsp;&nbsp;• at least one `'X'`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ grid = [["X","Y","."],["Y",".","."]]
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ There are 3 submatrices containing `grid[0][0]` with equal frequency of `'X'` and `'Y'` and at least one `'X'`.

<img src ="./Images/image1.png" width = "175px" height="330px"  />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [["X","X"],["X","Y"]]
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ No submatrix has an equal frequency of `'X'` and `'Y'`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[".","."],[".","."]]
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ No submatrix has at least one `'X'`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= grid.length, grid[i].length <= 1000` </br>
🔹 `grid[i][j]` is either `'X'`, `'Y'`, or `'.'`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Matrix** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203212.%20Count%20Submatrices%20With%20Equal%20Frequency%20of%20X%20and%20Y.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
