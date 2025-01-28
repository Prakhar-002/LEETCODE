# 2658. Maximum Number of Fish in a Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/?envType=daily-question&envId=2025-01-28"><strong>➥ ☢️ 2658 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D matrix grid of size m x n, where `(r, c)` represents:

- A land cell if `grid[r][c]` = 0, or

- A water cell containing `grid[r][c]` fish, if `grid[r][c] > 0`.

### A fisher can start at any water cell `(r, c)` and can do the following operations any number of times:

- Catch all the fish at cell `(r, c)`, or

- Move to any adjacent water cell.

### Return *the maximum number of fish the fisher can catch if he chooses his starting cell optimally*, or `0` if no water cell exists.

### An adjacent cell of the cell `(r, c)`, is one of the cells `(r, c + 1)`, `(r, c - 1)`, `(r + 1, c)` or `(r - 1, c)` if it exists.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/b72dd28e-607c-4735-afb2-5cfc27770707" width="241px" height="161px"/>

  ### 📥 `Input`  ➤ grid = [[0,2,1,0],[4,0,0,3],[1,0,0,4],[0,3,2,0]]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤  The fisher can start at cell `(1,3)` and collect 3 fish, then move to cell `(2,3)` and collect 4 fish.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c56b9007-cfb7-487f-a61c-40572dff729a" width="241px" height="161px"/>

  ### 📥 `Input` ➤ grid = [[1,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,1]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The fisher can start at cells (0,0) or (3,3) and collect a single fish.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= m, n <= 10`** </br>

🔹 **`0 <= grid[i][j] <= 10`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/28%20-%2001%20-%202025%20---%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/28%20-%2001%20-%202025%20---%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/28%20-%2001%20-%202025%20---%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/28%20-%2001%20-%202025%20---%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202658.%20Maximum%20Number%20of%20Fish%20in%20a%20Grid.js) |
