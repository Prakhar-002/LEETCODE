# 1039. Minimum Score Triangulation of Polygon

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-score-triangulation-of-polygon/description/?envType=daily-question&envId=2025-09-29"><strong>➥ ☢️ 1039 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have a convex `n`-sided polygon where each vertex has an integer value. You are given an integer array `values` where `values[i]` is the value of the `i`th vertex in clockwise order.

### Polygon triangulation is a process where you divide a polygon into a set of triangles and the vertices of each triangle must also be vertices of the original polygon. Note that no other shapes other than triangles are allowed in the division. This process will result in `n - 2` triangles.

### You will triangulate the polygon. For each triangle, the weight of that triangle is the product of the values at its vertices. The total score of the triangulation is the sum of these weights over all `n - 2` triangles.

### Return the minimum possible score that you can achieve with some triangulation of the polygon.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `values = [1,2,3]`

  ### 📤 `Output`  ➤ `6`

  ### 🔦 `Explanation`  ➤ ➺

  - The polygon is already triangulated, and the score of the only triangle is 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `values = [3,7,4,5]`

  ### 📤 `Output`  ➤ `144`

  ### 🔦 `Explanation`  ➤ ➺

  - There are two triangulations, with possible scores: 3\*7\*5 + 4\*5\*7 = 245, or 3\*4\*5 + 3\*4\*7 = 144. The minimum score is 144.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `values = [1,3,1,4,1,5]`

  ### 📤 `Output`  ➤ `13`

  ### 🔦 `Explanation`  ➤ ➺

  - The minimum score triangulation is 1\*1\*3 + 1\*1\*4 + 1\*1\*5 + 1\*1\*1 = 13.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == values.length` </br>
🔹 `3 <= n <= 50` </br>
🔹 `1 <= values[i] <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/2b84e9db-b22e-4828-a6ee-32c5fd8a4e8c" width = "700px" height="462px" />

</h1>
