# 3195. Find the Minimum Area to Cover All Ones I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/?envType=daily-question&envId=2025-08-22"><strong>➥ ☢️ 3195 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D binary array `grid`. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the 1's in `grid` lie inside this rectangle.  Return the minimum possible area of the rectangle.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="279" height="198" alt="3195 que 1" src="https://github.com/user-attachments/assets/669f5a93-81e9-4259-8b28-1bf5465c306d" />

  ### 📥 `Input`  ➤ `grid = [[0,1,0],[1,0,1]]`

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ ➺ The smallest rectangle has a height of 2 and a width of 3, so it has an area of 2 * 3 = 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="204" height="201" alt="3195 que 2" src="https://github.com/user-attachments/assets/21bde7c2-a4a7-4c5e-9f61-9a71e01f4900" />

  ### 📥 `Input` ➤ `grid = [[1,0],[0,0]]`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The smallest rectangle has both height and width 1, so its area is 1 * 1 = 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `grid = [[0, 0, 0], [0, 1, 0], [0, 0, 0]]`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The smallest rectangle has a height of 1 and a width of 1. It starts at the center index.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= grid.length, grid[i].length <= 1000` </br>

🔹 `grid[i][j]` is either 0 or 1. </br>

🔹 The input is generated such that there is at least one 1 in `grid`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/22%20-%2008%20-%202025%20---%20%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/22%20-%2008%20-%202025%20---%20%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/22%20-%2008%20-%202025%20---%20%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/22%20-%2008%20-%202025%20---%20%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203195.%20Find%20the%20Minimum%20Area%20to%20Cover%20All%20Ones%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/70c52bd3-90b2-4c31-a2ba-7166593dbcc4" width = "700px" height="462px" />

</h1>
