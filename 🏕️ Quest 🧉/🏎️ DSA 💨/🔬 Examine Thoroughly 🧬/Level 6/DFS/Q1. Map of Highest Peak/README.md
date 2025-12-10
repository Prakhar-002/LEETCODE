# Q1. Map of Highest Peak

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/map-of-highest-peak/description/?envType=daily-question&envId=2025-01-22"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer matrix `isWater` of size `m x n` that represents a map of `land` and `water` cells.

- If `isWater[i][j] == 0`, cell `(i, j)` is a `land` cell.

- If `isWater[i][j] == 1`, cell `(i, j)` is a `water` cell.

### You must assign each cell a height in a way that follows these rules:

- The height of each cell must be non-negative.

- If the cell is a water cell, its height must be `0`.

- Any two adjacent cells must have an absolute height difference of at most `1`. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).

### Find an assignment of heights such that the maximum height in the matrix is `maximized`.

### Return *an integer matrix* `height` *of size* `m x n` *where* `height[i][j]` *is cell* `(i, j)`'s *height. If there are multiple solutions*, return `any` *of them*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="220px" height="219px" alt="1765 que 1" src="https://github.com/user-attachments/assets/f6de631a-c66b-4143-b7d8-2224c92f55ef" />

  ### 📥 `Input`  ➤ isWater = [[0,1],[0,0]]

  ### 📤 `Output`  ➤ [[1,0],[2,1]]

  ### 🔦 `Explanation`  ➤ The image shows the assigned heights of each cell.</br> The blue cell is the water cell, and the green cells are the land cells.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="300px" height="296px" alt="1765 que 2" src="https://github.com/user-attachments/assets/d8c150e1-e932-4047-8bdd-781d56348724" />

  ### 📥 `Input` ➤ isWater = [[0,0,1],[1,0,0],[0,0,0]]

  ### 📤 `Output`  ➤ [[1,1,0],[0,1,1],[1,2,2]]

  ### 🔦 `Explanation` ➤ A height of 2 is the maximum possible height of any assignment.</br> Any height assignment that has a maximum height of 2 while still meeting the rules will also be accepted.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == isWater.length`** </br>

🔹 **`n == isWater[i].length`** </br>

🔹 **`1 <= m, n <= 1000`** </br>

🔹 **`isWater[i][j]` is `0` or `1.`** </br>

🔹 **There is at least one water cell.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Matrix**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ☢️ [542. 01 Matrix](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20542.%2001%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/22%20-%2001%20-%202025%20---%201765.%20Map%20of%20Highest%20Peak%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201765.%20Map%20of%20Highest%20Peak.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/22%20-%2001%20-%202025%20---%201765.%20Map%20of%20Highest%20Peak%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201765.%20Map%20of%20Highest%20Peak.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/22%20-%2001%20-%202025%20---%201765.%20Map%20of%20Highest%20Peak%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201765.%20Map%20of%20Highest%20Peak.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/22%20-%2001%20-%202025%20---%201765.%20Map%20of%20Highest%20Peak%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201765.%20Map%20of%20Highest%20Peak.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/413b9e06-d394-4590-86c9-944d62c4dad7" width = "700px" height="462px" />

</h1>
