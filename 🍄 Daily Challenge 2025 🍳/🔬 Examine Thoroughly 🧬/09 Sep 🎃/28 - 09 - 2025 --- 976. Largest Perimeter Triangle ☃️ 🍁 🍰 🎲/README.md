# 976. Largest Perimeter Triangle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-perimeter-triangle/description/?envType=daily-question&envId=2025-09-28"><strong>➥ ♻️ 976 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [2,1,2]`

  ### 📤 `Output`  ➤ `5`

  ### 🔦 `Explanation`  ➤ ➺

  - You can form a triangle with three side lengths: 1, 2, and 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,2,1,10]`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation`  ➤ ➺

  - You cannot use the side lengths 1, 1, and 2 to form a triangle.
  - You cannot use the side lengths 1, 1, and 10 to form a triangle.
  - You cannot use the side lengths 1, 2, and 10 to form a triangle.
  - As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= nums.length <= 10^4` </br>
🔹 `1 <= nums[i] <= 10^6` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/28%20-%2009%20-%202025%20---%20976.%20Largest%20Perimeter%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20976.%20Largest%20Perimeter%20Triangle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/28%20-%2009%20-%202025%20---%20976.%20Largest%20Perimeter%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20976.%20Largest%20Perimeter%20Triangle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/28%20-%2009%20-%202025%20---%20976.%20Largest%20Perimeter%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20976.%20Largest%20Perimeter%20Triangle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/28%20-%2009%20-%202025%20---%20976.%20Largest%20Perimeter%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20976.%20Largest%20Perimeter%20Triangle.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4a04538c-29e1-4c50-b37c-d656f47b5569" width = "700px" height="462px" />

</h1>
