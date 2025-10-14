# 3349. Adjacent Increasing Subarrays Detection I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/description/?envType=daily-question&envId=2025-10-14"><strong>➥ ♻️ 3349 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array `nums` of `n` integers and an integer `k`, determine whether there exist two adjacent subarrays of length `k` such that both subarrays are strictly increasing. Specifically, check if there are two subarrays starting at indices `a` and `b` (`a < b`), where:

- Both subarrays `nums[a..a + k - 1]` and `nums[b..b + k - 1]` are strictly increasing.
- The subarrays must be adjacent, meaning `b = a + k`.

### Return `true` if it is possible to find two such subarrays, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [2,5,7,8,9,2,3,4,3,1], k = 3`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺

  - The subarray starting at index 2 is `[7, 8, 9]`, which is strictly increasing.
  - The subarray starting at index 5 is `[2, 3, 4]`, which is also strictly increasing.
  - These two subarrays are adjacent, so the result is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,2,3,4,4,4,4,5,6,7], k = 5`

  ### 📤 `Output`  ➤ `false`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= nums.length <= 100` </br>
🔹 `1 < 2 * k <= nums.length` </br>
🔹 `-1000 <= nums[i] <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/14%20-%2010%20-%202025%20---%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/14%20-%2010%20-%202025%20---%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/14%20-%2010%20-%202025%20---%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/14%20-%2010%20-%202025%20---%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203349.%20Adjacent%20Increasing%20Subarrays%20Detection%20I3349.%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1657ad37-f6d3-46b8-a4b7-13a882479701" width = "700px" height="462px" />

</h1>
