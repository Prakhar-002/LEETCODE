# 3471. Find the Largest Almost Missing Integer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-largest-almost-missing-integer/description/?envType=daily-question&envId=2026-08-18"><strong>➥ ♻️ 3471 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`.

### An integer `x` is almost missing from `nums` if `x` appears in exactly one subarray of size `k` within `nums`.

### Return the largest almost missing integer from `nums`. If no such integer exists, return `-1`. A subarray is a contiguous sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums = [3,9,2,1,7]`, `k = 3`

  ### 📤 `Output`  ➤ `7`

  ### 🔦 `Explanation`  ➤ ➺ `1` appears in 2 subarrays of size 3: `[9, 2, 1]` and `[2, 1, 7]`. `2` appears in 3 subarrays of size 3: `[3, 9, 2]`, `[9, 2, 1]`, `[2, 1, 7]`. `3` appears in 1 subarray of size 3: `[3, 9, 2]`. `7` appears in 1 subarray of size 3: `[2, 1, 7]`. `9` appears in 2 subarrays of size 3: `[3, 9, 2]`, and `[9, 2, 1]`. We return 7 since it is the largest integer that appears in exactly one subarray of size `k`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [3,9,7,2,1,7]`, `k = 4`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation` ➤ ➺ `1` appears in 2 subarrays of size 4: `[9, 7, 2, 1]`, `[7, 2, 1, 7]`. `2` appears in 3 subarrays of size 4: `[3, 9, 7, 2]`, `[9, 7, 2, 1]`, `[7, 2, 1, 7]`. `3` appears in 1 subarray of size 4: `[3, 9, 7, 2]`. `7` appears in 3 subarrays of size 4: `[3, 9, 7, 2]`, `[9, 7, 2, 1]`, `[7, 2, 1, 7]`. `9` appears in 2 subarrays of size 4: `[3, 9, 7, 2]`, `[9, 7, 2, 1]`. We return 3 since it is the largest and only integer that appears in exactly one subarray of size `k`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [0,0]`, `k = 1`

  ### 📤 `Output`  ➤ `-1`

  ### 🔦 `Explanation`  ➤ ➺ There is no integer that appears in only one subarray of size 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 50`** </br>

🔹 **`0 <= nums[i] <= 50`** </br>

🔹 **`1 <= k <= nums.length`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/18%20-%2008%20-%202025%20---%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/18%20-%2008%20-%202025%20---%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/18%20-%2008%20-%202025%20---%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/18%20-%2008%20-%202025%20---%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203471.%20Find%20the%20Largest%20Almost%20Missing%20Integer.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c0d5b4ac-a3d3-49ab-82d5-844c91e55919" width = "700px" height="462px" />

</h1>
