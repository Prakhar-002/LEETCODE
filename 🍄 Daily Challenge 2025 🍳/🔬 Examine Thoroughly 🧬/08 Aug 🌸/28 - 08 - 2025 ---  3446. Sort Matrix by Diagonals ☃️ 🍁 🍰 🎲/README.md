# 3446. Sort Matrix by Diagonals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sort-matrix-by-diagonals/description/?envType=daily-question&envId=2025-08-28"><strong>➥ ☢️ 3446 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an n x n square matrix of integers `grid`. Return the matrix such that:

### 1. The diagonals in the bottom-left triangle (including the middle diagonal) are sorted in non-increasing order.
### 2. The diagonals in the top-right triangle are sorted in non-decreasing order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="461" height="181" alt="3446 que 1" src="https://github.com/user-attachments/assets/7b19a7d8-37a3-45ec-9cc4-8d010148b523" />

  ### 📥 `Input`  ➤ `grid = [[1,7,3],[9,8,2],[4,5,6]]`

  ### 📤 `Output`  ➤ `[[8,2,3],[9,6,7],[4,5,1]]`

  ### 🔦 `Explanation`  ➤ ➺ The diagonals with a black arrow (bottom-left triangle) should be sorted in non-increasing order: [1, 8, 6] becomes [8, 6, 1]. [9, 5] and [4] remain unchanged. The diagonals with a blue arrow (top-right triangle) should be sorted in non-decreasing order: [7, 2] becomes [2, 7]. [3] remains unchanged.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="383" height="141" alt="3446 que 2" src="https://github.com/user-attachments/assets/4f883ad5-6555-4439-a0f6-e3e529ebfc1f" />

  ### 📥 `Input` ➤ `grid = [[0,1],[1,2]]`

  ### 📤 `Output`  ➤ `[[2,1],[1,0]]`

  ### 🔦 `Explanation` ➤ The diagonals with a black arrow must be non-increasing, so [0, 2] is changed to [2, 0]. The other diagonals are already in the correct order.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `grid = [[1]]`

  ### 📤 `Output`  ➤ `[[1]]`

  ### 🔦 `Explanation`  ➤ Diagonals with exactly one element are already in order, so no changes are needed.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `grid.length == grid[i].length == n` </br>

🔹 `1 <= n <= 10` </br>

🔹 `-10^5 <= grid[i][j] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sorting**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/28%20-%2008%20-%202025%20---%20%203446.%20Sort%20Matrix%20by%20Diagonals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203446.%20Sort%20Matrix%20by%20Diagonals.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/28%20-%2008%20-%202025%20---%20%203446.%20Sort%20Matrix%20by%20Diagonals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203446.%20Sort%20Matrix%20by%20Diagonals.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/28%20-%2008%20-%202025%20---%20%203446.%20Sort%20Matrix%20by%20Diagonals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203446.%20Sort%20Matrix%20by%20Diagonals.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/28%20-%2008%20-%202025%20---%20%203446.%20Sort%20Matrix%20by%20Diagonals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203446.%20Sort%20Matrix%20by%20Diagonals.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7cf6243b-81c4-4b27-be91-08a27a87d8e3" width = "700px" height="462px" />

</h1>
