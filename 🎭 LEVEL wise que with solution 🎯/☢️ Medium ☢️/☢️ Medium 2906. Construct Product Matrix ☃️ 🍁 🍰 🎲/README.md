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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
