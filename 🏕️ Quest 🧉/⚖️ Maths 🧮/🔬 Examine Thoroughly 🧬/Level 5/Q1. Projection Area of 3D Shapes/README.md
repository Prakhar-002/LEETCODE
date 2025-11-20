# Q1. Projection Area of 3D Shapes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/projection-area-of-3d-shapes/?envType=problem-list-v2&envId=maths-m5-geometry"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `n x n` grid where we place some `1 x 1 x 1` cubes that are axis-aligned with the x, y, and z axes.

### Each value `v = grid[i][j]` represents a tower of `v` cubes placed on top of the cell `(i, j)`.

### We view the projection of these cubes onto the xy, yz, and zx planes.

### A projection is like a shadow, that maps our 3-dimensional figure to a 2-dimensional plane. We are viewing the "shadow" when looking at the cubes from the top, the front, and the side.

### Return the total area of all three projections.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="2138" height="571" alt="883 que 1" src="https://github.com/user-attachments/assets/2af687f3-f21a-4e9e-bd13-5a4ecb4745a7" />

  ### 📥 `Input`  ➤ grid = [[1,2],[3,4]]

  ### 📤 `Output`  ➤ 17

  ### 🔦 `Explanation`  ➤ Here are the three projections ("shadows") of the shape made with each axis-aligned plane.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[2]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ N/A

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,0],[0,2]]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation` ➤ N/A

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == grid.length == grid[i].length </br>
🔹 1 <= n <= 50 </br>
🔹 0 <= grid[i][j] <= 50 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Geometry** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q1.%20Projection%20Area%20of%203D%20Shapes/%F0%9F%8D%81JAVA%20-%20Projection%20Area%20of%203D%20Shapes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q1.%20Projection%20Area%20of%203D%20Shapes/%F0%9F%8E%B2CPP%20-%20Projection%20Area%20of%203D%20Shapes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q1.%20Projection%20Area%20of%203D%20Shapes/%F0%9F%8D%B0PYTHON%20-%20Projection%20Area%20of%203D%20Shapes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q1.%20Projection%20Area%20of%203D%20Shapes/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Projection%20Area%20of%203D%20Shapes.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d70672c4-8ce6-498f-b765-18d5bf9e93e6" width = "700px" height="462px" />

</h1>
