# 3000. Maximum Area of Longest Diagonal Rectangle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/description/?envType=daily-question&envId=2025-08-26"><strong>➥ ♻️ 3000 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D 0-indexed integer array `dimensions`. For all indices `i`, 0 <= i < `dimensions.length`, `dimensions[i][0]` represents the length and `dimensions[i][1]` represents the width of rectangle `i`. Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `dimensions = [[9,3],[8,6]]`

  ### 📤 `Output`  ➤ 48

  ### 🔦 `Explanation`  ➤ ➺ For index = 0, length = 9 and width = 3. Diagonal length = sqrt(9 * 9 + 3 * 3) = sqrt(90) ≈ 9.487. For index = 1, length = 8 and width = 6. Diagonal length = sqrt(8 * 8 + 6 * 6) = sqrt(100) = 10. So, the rectangle at index 1 has a greater diagonal length therefore we return area = 8 * 6 = 48.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `dimensions = [[3,4],[4,3]]`

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation` ➤ Length of diagonal is the same for both which is 5, so maximum area = 12.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `dimensions = [[2,2],[2,3],[4,1]]`

  ### 📤 `Output`  ➤ 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= dimensions.length <= 100` </br>

🔹 `dimensions[i].length == 2` </br>

🔹 `1 <= dimensions[i][0], dimensions[i][1] <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/26%20-%2008%20-%202025%20---%20%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/26%20-%2008%20-%202025%20---%20%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/26%20-%2008%20-%202025%20---%20%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/26%20-%2008%20-%202025%20---%20%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203000.%20Maximum%20Area%20of%20Longest%20Diagonal%20Rectangle.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/81395c21-def4-47ba-8c65-8309a4a29b39" width = "700px" height="462px" />

</h1>
