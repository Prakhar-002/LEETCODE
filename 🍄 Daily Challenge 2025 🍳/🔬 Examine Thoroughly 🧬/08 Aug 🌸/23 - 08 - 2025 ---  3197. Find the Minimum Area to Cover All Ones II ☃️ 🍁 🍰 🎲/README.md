# 3197. Find the Minimum Area to Cover All Ones II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-ii/description/?envType=daily-question&envId=2025-08-23"><strong>➥ 🫀 3197 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D binary array `grid`. You need to find 3 non-overlapping rectangles having non-zero areas with horizontal and vertical sides such that all the 1's in `grid` lie inside these rectangles.  Return the minimum possible sum of the area of these rectangles. Note that the rectangles are allowed to touch.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="280" height="198" alt="3197 que 1" src="https://github.com/user-attachments/assets/8e3289a1-22ba-4617-9111-af1389d37c91" />

  ### 📥 `Input`  ➤ `grid = [[1,0,1],[1,1,1]]`

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ ➺ The 1's at (0, 0) and (1, 0) are covered by a rectangle of area 2. The 1's at (0, 2) and (1, 2) are covered by a rectangle of area 2. The 1 at (1, 1) is covered by a rectangle of area 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="356" height="198" alt="3197 que 2" src="https://github.com/user-attachments/assets/0471f1b3-e335-44da-b9b4-8d29dd3d0e30" />

  ### 📥 `Input` ➤ `grid = [[1,0,1,0],[0,1,0,1]]`

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ The 1's at (0, 0) and (0, 2) are covered by a rectangle of area 3. The 1 at (1, 1) is covered by a rectangle of area 1. The 1 at (1, 3) is covered by a rectangle of area 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `grid = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]`

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤ Cover the entire matrix by one rectangle resulting the area be grid.length* grid[0].length. Also covering one value would require minimum area 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= grid.length, grid[i].length <= 30` </br>

🔹 `grid[i][j]` is either 0 or 1. </br>

🔹 The input is generated such that there are at least three 1's in `grid`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>
🔸 **Enumeration** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/23%20-%2008%20-%202025%20---%20%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/23%20-%2008%20-%202025%20---%20%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/23%20-%2008%20-%202025%20---%20%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/23%20-%2008%20-%202025%20---%20%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203197.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3b8aec79-072a-41e5-be82-a54fe49912f6" width = "700px" height="462px" />

</h1>
