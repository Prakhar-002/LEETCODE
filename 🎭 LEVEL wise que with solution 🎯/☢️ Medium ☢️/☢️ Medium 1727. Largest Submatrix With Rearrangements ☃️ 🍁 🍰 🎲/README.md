# 1727. Largest Submatrix With Rearrangements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-submatrix-with-rearrangements/description/?envType=daily-question&envId=2026-03-17"><strong>➥ ☢️ 1727 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a **binary matrix** `matrix` of size `m x n`, and you are allowed to **rearrange the columns** of the `matrix` in any order.
### Return the **area of the largest submatrix** within `matrix` where every element of the submatrix is `1` after reordering the columns **optimally**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src ="./Images/image1.png" />

  ### 📥 `Input`  ➤ matrix = [[0,0,1],[1,1,1],[1,0,1]]
  ### 📤 `Output`  ➤ 4
  ### 🔦 `Explanation`  ➤ You can rearrange the columns as shown above. The largest submatrix of 1s, in bold, has an area of 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src ="./Images/image2.png" />

  ### 📥 `Input` ➤ matrix = [[1,0,1,0,1]]
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation` ➤ You can rearrange the columns as shown above. The largest submatrix of 1s, in bold, has an area of 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ matrix = [[1,1,0],[1,0,1]]
  ### 📤 `Output`  ➤ 2
  ### 🔦 `Explanation` ➤ Notice that you must rearrange **entire columns**, and there is no way to make a submatrix of 1s larger than an area of 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `m == matrix.length` </br>
🔹 `n == matrix[i].length` </br>
🔹 `1 <= m * n <= 10^5` </br>
🔹 `matrix[i][j]` is either `0` or `1`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>
🔸 **Matrix** </br>

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

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
