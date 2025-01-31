# 827. Making A Large Island

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/making-a-large-island/description/?envType=daily-question&envId=2025-01-31"><strong>➥ 🫀 827 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `n x n` binary matrix `grid`. You are allowed to change at most one `0` to be `1`.

### Return *the size of the largest island in* `grid` *after applying this operation*.

### An island is a 4-directionally connected group of `1`s.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [[1,0],[0,1]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ Change one 0 to 1 and connect two 1s, then we get an island with area = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,1],[1,0]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ Change the 0 to 1 and make the island bigger, only one island with area = 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,1],[1,1]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ Can't change any 0 to 1, only one island with area = 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= n <= 500`** </br>

🔹 **`grid[i][j]` is either `0` or `1`.** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/31%20-%2001%20-%202025%20---%20827.%20Making%20A%20Large%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20827.%20Making%20A%20Large%20Island.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/31%20-%2001%20-%202025%20---%20827.%20Making%20A%20Large%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20827.%20Making%20A%20Large%20Island.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/31%20-%2001%20-%202025%20---%20827.%20Making%20A%20Large%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20827.%20Making%20A%20Large%20Island.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/31%20-%2001%20-%202025%20---%20827.%20Making%20A%20Large%20Island%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20827.%20Making%20A%20Large%20Island.js) |
