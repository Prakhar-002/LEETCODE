# 2210. Count Hills and Valleys in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/?envType=daily-question&envId=2025-07-27"><strong>➥ ♻️ 2210 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`. Your task is to count the number of hills and valleys in `nums`.

### Definitions:

- A peak element (or hill) is an element at index `i` that is strictly greater than its closest non-equal neighbors.
- A valley is an element at index `i` that is strictly smaller than its closest non-equal neighbors.
- Adjacent indices `i` and `j` are part of the *same* hill or valley if `nums[i] == nums[j]`.

### Important notes:

- To be considered a hill or valley, an index must have a non-equal neighbor *both* to its left and right.

### Your function should return the total number of distinct hills and valleys in the given array `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,4,1,1,6,5]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
- Index 0: No non-equal neighbor on the left. Not a hill/valley.
- Index 1: Neighbors are 2 and 1. 4 > 2 and 4 > 1, so it's a hill.
- Index 2: Neighbors are 4 and 6. 1 < 4 and 1 < 6, so it's a valley.
- Index 3: Neighbors are 4 and 6. It's part of the *same* valley as index 2.
- Index 4: Neighbors are 1 and 5. 6 > 1 and 6 > 5, so it's a hill.
- Index 5: No non-equal neighbor on the right. Not a hill/valley.

There are 3 distinct hills and valleys in `nums`: one hill at index 1, one valley spanning indices 2 and 3, and another hill at index 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,6,5,5,4,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
- Index 0: No non-equal neighbor on the left.
- Index 1: No non-equal neighbor on the left.
- Index 2: Neighbors are 6 and 4. 5 < 6 and 5 > 4, so not a hill/valley.
- Index 3: Neighbors are 6 and 4. 5 < 6 and 5 > 4, so not a hill/valley.
- Index 4: Neighbors are 5 and 1. 4 < 5 and 4 > 1, so not a hill/valley.
- Index 5: No non-equal neighbor on the right.

There are 0 hills and valleys.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= nums.length <= 100 </br>

🔹 1 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/27%20-%2007%20-%202025%20---%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/27%20-%2007%20-%202025%20---%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/27%20-%2007%20-%202025%20---%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/27%20-%2007%20-%202025%20---%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202210.%20Count%20Hills%20and%20Valleys%20in%20an%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e06d8c09-9257-443f-a616-69800c88e923" width = "700px" height="462px" />

</h1>
