# 2906. Construct Product Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-product-matrix/description/?envType=daily-question&envId=2026-03-24"><strong>➥ ☢️ 2906 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given a 0-indexed 2D integer matrix `grid` of size `n * m`, we define a 0-indexed 2D matrix `p` of size `n * m` as the **product matrix** of `grid` if the following condition is met:
### &nbsp;&nbsp;&nbsp;&nbsp;• Each element `p[i][j]` is calculated as the **product of all elements** in `grid` except for the element `grid[i][j]`. This product is then taken **modulo** `12345`.
### Return the **product matrix** of `grid`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ grid = [[1,2],[3,4]]
  ### 📤 `Output`  ➤ [[24,12],[8,6]]
  ### 🔦 `Explanation`  ➤ `p[0][0]` = 2×3×4 = 24, `p[0][1]` = 1×3×4 = 12, `p[1][0]` = 1×2×4 = 8, `p[1][1]` = 1×2×3 = 6. So the answer is [[24,12],[8,6]].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[12345],[2],[1]]
  ### 📤 `Output`  ➤ [[2],[0],[0]]
  ### 🔦 `Explanation` ➤ `p[0][0]` = 2×1 = 2. `p[0][1]` = 12345×1 = 12345 % 12345 = 0. `p[0][2]` = 12345×2 = 24690 % 12345 = 0. So the answer is [[2],[0],[0]].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,1],[1,1]]
  ### 📤 `Output`  ➤ [[1,1],[1,1]]
  ### 🔦 `Explanation` ➤ Every element is 1, so the product of all other elements is also 1 for each position. 1 % 12345 = 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= n == grid.length <= 10^5` </br>
🔹 `1 <= m == grid[i].length <= 10^5` </br>
🔹 `2 <= n * m <= 10^5` </br>
🔹 `1 <= grid[i][j] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Matrix** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201594.%20Maximum%20Non%20Negative%20Product%20in%20a%20Matrix.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fb5807fb-0b99-4bb9-b1f4-728e91d2965a" width = "700px" height="462px" />

</h1>
