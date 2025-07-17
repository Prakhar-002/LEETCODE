# 3202. Find the Maximum Length of Valid Subsequence II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-ii/description/?envType=daily-question&envId=2025-07-17"><strong>➥ ☢️ 3202 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and a positive integer `k`. A subsequence `sub` of `nums` with length `x` is considered *valid* if it satisfies:

### `(sub[0] + sub[1]) % k == (sub[1] + sub[2]) % k == ... == (sub[x - 2] + sub[x - 1]) % k`

### This means the sum of any two adjacent elements in the subsequence, modulo `k`, must be equal to each other.

### Your task is to return the length of the *longest valid subsequence* of `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4,5], k = 2

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤
The longest valid subsequence is [1, 2, 3, 4, 5].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,4,2,3,1,4], k = 3

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤
The longest valid subsequence is [1, 4, 1, 4].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 10<sup>3</sup> </br>

🔹 1 <= nums[i] <= 10<sup>7</sup> </br>

🔹 1 <= k <= 10<sup>3</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/17%20-%2007%20-%202025%20---%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/17%20-%2007%20-%202025%20---%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/17%20-%2007%20-%202025%20---%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/17%20-%2007%20-%202025%20---%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203202.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequ.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/88e1287f-781e-4b04-8ee3-3fdace280e8d" width = "700px" height="462px" />

</h1>
