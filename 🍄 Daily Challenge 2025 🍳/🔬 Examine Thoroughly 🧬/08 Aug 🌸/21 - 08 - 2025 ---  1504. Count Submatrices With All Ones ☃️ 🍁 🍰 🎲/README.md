# 1504. Count Submatrices With All Ones

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-submatrices-with-all-ones/description/?envType=daily-question&envId=2025-08-21"><strong>➥ ☢️ 1504 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an m x n binary matrix mat, return the number of submatrices that have all ones.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/77362719-7492-421b-81dc-1094757fde67" width="300" height="200"/>

  ### 📥 `Input`  ➤ `[[1,0,1],[1,1,0],[1,1,0]]`

  ### 📤 `Output`  ➤ 13

  ### 🔦 `Explanation`  ➤ ➺ There are 6 rectangles of side 1x1, 2 rectangles of side 1x2, 3 rectangles of side 2x1, 1 rectangle of side 2x2, and 1 rectangle of side 3x1. Total number of rectangles = 6 + 2 + 3 + 1 + 1 = 13.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/af3fe051-2c0c-4b22-8236-09868b0ab482" width="400" height="200"/>

  ### 📥 `Input` ➤ `[[0,1,1,0],[0,1,1,1],[1,1,1,0]]`

  ### 📤 `Output`  ➤ 24

  ### 🔦 `Explanation` ➤ There are 8 rectangles of side 1x1, 5 rectangles of side 1x2, 2 rectangles of side 1x3, 4 rectangles of side 2x1, 2 rectangles of side 2x2, 2 rectangles of side 3x1 and 1 rectangle of side 3x2. Total number of rectangles = 8 + 5 + 2 + 4 + 2 + 2 + 1 = 24.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `[[1,1,1],[1,1,1],[1,1,1]]`

  ### 📤 `Output`  ➤ 20

  ### 🔦 `Explanation`  ➤ There are 9 rectangles of size 1x1. There are four rectangles of size 1x2, two rectangle of size 2x1, one rectangle of size 2x2, three rectangles of size 1x3 and one of 3x1, totalling in 9+4+2+1+3+1=20. Note that there will be two 3x2 and on 3x3 rectangles.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= m, n <= 150` </br>

🔹 `mat[i][j]` is either 0 or 1. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Stack**  </br>
🔸 **Matrix**  </br>
🔸 **Monotonic Stack**  </br>

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

<img src ="https://github.com/user-attachments/assets/c6a3358b-5600-4115-b377-24e275f1b0dd" width = "700px" height="462px" />

</h1>
