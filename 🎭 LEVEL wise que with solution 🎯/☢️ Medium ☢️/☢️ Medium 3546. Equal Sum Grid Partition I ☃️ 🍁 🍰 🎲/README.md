# 3546. Equal Sum Grid Partition I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/equal-sum-grid-partition-i/description/?envType=daily-question&envId=2026-03-25"><strong>➥ ☢️ 3546 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` matrix `grid` of positive integers. Your task is to determine if it is possible to make either **one horizontal** or **one vertical cut** on the grid such that:
### &nbsp;&nbsp;&nbsp;&nbsp;• Each of the **two resulting sections** formed by the cut is **non-empty**.
### &nbsp;&nbsp;&nbsp;&nbsp;• The **sum of the elements** in both sections is **equal**.
### Return `true` if such a partition exists; otherwise return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ grid = [[1,4],[2,3]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ A **horizontal cut** between row 0 and row 1 results in two non-empty sections, each with a sum of `5`. Thus, the answer is `true`.

<img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/599fdee2-9ae5-41c3-b5a6-e91d4bc4505a" />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,3],[2,4]]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ No horizontal or vertical cut results in two non-empty sections with equal sums. Thus, the answer is `false`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,2,3],[3,2,1]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ A **vertical cut** between column 1 and column 2 results in sections with sums `(1+2+3+2) = 8` and `(3+1) = 4` — not equal. But a **horizontal cut** between row 0 and row 1 gives sums `1+2+3 = 6` and `3+2+1 = 6`. Thus, the answer is `true`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= m == grid.length <= 10^5` </br>
🔹 `1 <= n == grid[i].length <= 10^5` </br>
🔹 `2 <= m * n <= 10^5` </br>
🔹 `1 <= grid[i][j] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Matrix** </br>
🔸 **Enumeration** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203546.%20Equal%20Sum%20Grid%20Partition%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203546.%20Equal%20Sum%20Grid%20Partition%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203546.%20Equal%20Sum%20Grid%20Partition%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203546.%20Equal%20Sum%20Grid%20Partition%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203546.%20Equal%20Sum%20Grid%20Partition%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203546.%20Equal%20Sum%20Grid%20Partition%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203546.%20Equal%20Sum%20Grid%20Partition%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203546.%20Equal%20Sum%20Grid%20Partition%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/53424b8a-8164-48ec-8b45-0988265af487" width = "700px" height="462px" />

</h1>
