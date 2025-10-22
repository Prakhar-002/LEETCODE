# 3350. Adjacent Increasing Subarrays Detection II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-missing-non-negative-integer-after-operations/?envType=daily-question&envId=2025-10-15"><strong>➥ ☢️ 3350 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array `nums` of `n` integers, your task is to find the maximum value of `k` for which there exist two adjacent subarrays of length `k` each, such that both subarrays are strictly increasing. Specifically, check if there are two subarrays of length `k` starting at indices `a` and `b` (`a < b`), where:

- Both subarrays `nums[a..a + k - 1]` and `nums[b..b + k - 1]` are strictly increasing.
- The subarrays must be adjacent, meaning `b = a + k`.

### Return the maximum possible value of `k`.

### A subarray is a contiguous non-empty sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [2,5,7,8,9,2,3,4,3,1]`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - The subarray starting at index 2 is `[7, 8, 9]`, which is strictly increasing.
  - The subarray starting at index 5 is `[2, 3, 4]`, which is also strictly increasing.
  - These two subarrays are adjacent, and 3 is the maximum possible value of k for which two such adjacent strictly increasing subarrays exist.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,2,3,4,4,4,4,5,6,7]`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - The subarray starting at index 0 is `[1, 2]`, which is strictly increasing.
  - The subarray starting at index 2 is `[3, 4]`, which is also strictly increasing.
  - These two subarrays are adjacent, and 2 is the maximum possible value of k for which two such adjacent strictly increasing subarrays exist.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= nums.length <= 2 * 10^5` </br>
🔹 `-10^9 <= nums[i] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/15%20-%2010%20-%202025%20---%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/15%20-%2010%20-%202025%20---%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/15%20-%2010%20-%202025%20---%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/15%20-%2010%20-%202025%20---%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203350.%20Adjacent%20Increasing%20Subarrays%20Detection%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/12370f44-01dd-44ce-a0c2-70e33f558d75" width = "700px" height="462px" />

</h1>
