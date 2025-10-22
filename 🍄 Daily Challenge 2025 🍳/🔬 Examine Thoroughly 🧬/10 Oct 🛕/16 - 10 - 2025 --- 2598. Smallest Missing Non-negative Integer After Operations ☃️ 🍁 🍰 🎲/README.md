# 2598. Smallest Missing Non-negative Integer After Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-the-number-of-partitions-after-operations/?envType=daily-question&envId=2025-10-16"><strong>➥ ☢️ 2598 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` and an integer `value`.

### In one operation, you can add or subtract `value` from any element of `nums`.

### For example, if `nums = [1,2,3]` and `value = 2`, you can choose to subtract `value` from `nums[0]` to make `nums = [-1,2,3]`.

### The MEX (minimum excluded) of an array is the smallest missing non-negative integer in it.

### For example, the MEX of `[-1,2,3]` is 0 while the MEX of `[1,0,3]` is 2.

### Return the maximum MEX of `nums` after applying the mentioned operation any number of times.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,-10,7,13,6,8], value = 5`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - One can achieve this result by applying the following operations:
    - Add `value` to `nums[1]` twice to make `nums = [1,0,7,13,6,8]`
    - Subtract `value` from `nums[2]` once to make `nums = [1,0,2,13,6,8]`
    - Subtract `value` from `nums[3]` twice to make `nums = [1,0,2,3,6,8]`
  - The MEX of `nums` is 4. It can be shown that 4 is the maximum MEX we can achieve.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,-10,7,13,6,8], value = 7`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - One can achieve this result by applying the following operation:
    - subtract `value` from `nums[2]` once to make `nums = [1,-10,0,13,6,8]`
  - The MEX of `nums` is 2. It can be shown that 2 is the maximum MEX we can achieve.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length, value <= 10^5` </br>
🔹 `-10^9 <= nums[i] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Math** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/16%20-%2010%20-%202025%20---%202598.%20Smallest%20Missing%20Non-negative%20Integer%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202598.%20Smallest%20Missing%20Non-negative%20Integer%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/16%20-%2010%20-%202025%20---%202598.%20Smallest%20Missing%20Non-negative%20Integer%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202598.%20Smallest%20Missing%20Non-negative%20Integer%20Af.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/16%20-%2010%20-%202025%20---%202598.%20Smallest%20Missing%20Non-negative%20Integer%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202598.%20Smallest%20Missing%20Non-negative%20Integer%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/16%20-%2010%20-%202025%20---%202598.%20Smallest%20Missing%20Non-negative%20Integer%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202598.%20Smallest%20Missing%20Non-negative%20Inte.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/341782c0-8abc-4a40-9426-ba84e4eab28a" width = "700px" height="462px" />

</h1>
