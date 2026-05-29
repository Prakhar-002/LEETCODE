# 3300. Minimum Element After Replacement With Digit Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/?envType=daily-question&envId=2026-05-29"><strong>➥ ♻️ 3300 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums`.
### You **replace each element** in `nums` with the **sum of its digits**.
### Return the **minimum element** in `nums` after all replacements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [10,12,13,14]
  ### 📤 `Output`  ➤ 1
  ### 🔦 `Explanation`  ➤ `nums` becomes `[1, 3, 4, 5]` after all replacements, with minimum element `1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,2,3,4]
  ### 📤 `Output`  ➤ 1
  ### 🔦 `Explanation` ➤ `nums` becomes `[1, 2, 3, 4]` after all replacements (single-digit numbers stay the same), with minimum element `1`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [999,19,199]
  ### 📤 `Output`  ➤ 10
  ### 🔦 `Explanation` ➤ `nums` becomes `[27, 10, 19]` after all replacements (`9+9+9=27`, `1+9=10`, `1+9+9=19`), with minimum element `10`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 10^4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203300.%20Minimum%20Element%20After%20Replacement%20With%20Digit%20Sum.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/33cde47b-e700-4c09-915e-82f892dcb656" width = "700px" height="462px" />

</h1>
