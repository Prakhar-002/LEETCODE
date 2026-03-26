# 3548. Equal Sum Grid Partition II

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/equal-sum-grid-partition-ii/description/?envType=daily-question&envId=2026-03-26"><strong>➥ 🫀 3548 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` matrix `grid` of positive integers. Your task is to determine if it is possible to make either **one horizontal** or **one vertical cut** on the grid such that:
### &nbsp;&nbsp;&nbsp;&nbsp;• Each of the **two resulting sections** formed by the cut is **non-empty**.
### &nbsp;&nbsp;&nbsp;&nbsp;• The **sum of elements** in both sections is **equal**, or can be made equal by **discounting at most one single cell** in total (from either section).
### &nbsp;&nbsp;&nbsp;&nbsp;• If a cell is **discounted**, the rest of the section must remain **connected**.
### Return `true` if such a partition exists; otherwise, return `false`.
### **Note:** A section is **connected** if every cell in it can be reached from any other cell by moving **up, down, left, or right** through other cells in the section.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ grid = [[1,4],[2,3]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ A **horizontal cut** after the first row gives sums `1 + 4 = 5` and `2 + 3 = 5`, which are **equal**. Thus, the answer is `true`.

<img width="180" height="180" alt="image" src="https://github.com/user-attachments/assets/755d07d0-78fd-40cb-9754-ba907c33093f" />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,2],[3,4]]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ A **vertical cut** after the first column gives sums `1 + 3 = 4` and `2 + 4 = 6`. By discounting `2` from the right section (`6 - 2 = 4`), both sections have **equal sums** and remain **connected**. Thus, the answer is `true`.

<img width="180" height="180" alt="image" src="https://github.com/user-attachments/assets/048870a3-a778-44f6-8836-12c7591cff67" />

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[1,2,4],[2,3,5]]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ A **horizontal cut** after the first row gives `1+2+4 = 7` and `2+3+5 = 10`. By discounting `3` from the bottom section (`10 - 3 = 7`), sums are equal, but the bottom section is **no longer connected** as it splits into `[2]` and `[5]`. Thus, the answer is `false`.

<img width="180" height="180" alt="image" src="https://github.com/user-attachments/assets/1ea530fe-4dea-4de3-8227-98f095234345" />

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ grid = [[4,1,8],[3,2,6]]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ No valid cut exists that satisfies all the conditions. Thus, the answer is `false`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= m == grid.length <= 10^5` </br>
🔹 `1 <= n == grid[i].length <= 10^5` </br>
🔹 `2 <= m * n <= 10^5` </br>
🔹 `1 <= grid[i][j] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Matrix** </br>
🔸 **Enumeration** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203548.%20Equal%20Sum%20Grid%20Partition%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203548.%20Equal%20Sum%20Grid%20Partition%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203548.%20Equal%20Sum%20Grid%20Partition%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203548.%20Equal%20Sum%20Grid%20Partition%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203548.%20Equal%20Sum%20Grid%20Partition%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203548.%20Equal%20Sum%20Grid%20Partition%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203548.%20Equal%20Sum%20Grid%20Partition%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203548.%20Equal%20Sum%20Grid%20Partition%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d9af8165-d1d8-437e-807c-29591e0b62ae" width = "700px" height="462px" />

</h1>
