# 3065. Minimum Operations to Exceed Threshold Value I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/"><strong>➥ ♻️ 3065 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, and an integer k.

### In one operation, you can remove one occurrence of the smallest element of `nums`.

### Return *the minimum number of operations needed so that all elements of the array are greater than or equal to* `k`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,11,10,1,3], k = 10

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ After one operation, nums becomes equal to [2, 11, 10, 3].</br> </br> After two operations, nums becomes equal to [11, 10, 3].</br> </br> After three operations, nums becomes equal to [11, 10].</br> </br> At this stage, all the elements of nums are greater than or equal to 10 so we can stop.</br> </br> It can be shown that 3 is the minimum number of operations needed so that all elements of the array are greater than or equal to 10.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,4,9], k = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ All elements of the array are greater than or equal to 1 so we do not need to apply any operations on nums.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,4,9], k = 9

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ only a single element of nums is greater than or equal to 9 so we need to apply the operations 4 times on nums.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 50`** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 10<sup>9</sup>** </br>

🔹 **The input is generated such that there is at least one index `i` such that `nums[i] >= k`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203065.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20I.c)  |
