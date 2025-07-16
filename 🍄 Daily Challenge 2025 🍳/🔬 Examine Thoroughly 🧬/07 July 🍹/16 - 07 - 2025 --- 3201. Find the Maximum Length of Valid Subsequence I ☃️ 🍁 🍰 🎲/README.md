# 3201. Find the Maximum Length of Valid Subsequence I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/description/?envType=daily-question&envId=2025-07-16"><strong>➥ ☢️ 3201 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`.

### A subsequence `sub` of `nums` with length `x` is considered *valid* if it satisfies the following condition:

`(sub[0] + sub[1]) % 2 == (sub[1] + sub[2]) % 2 == ... == (sub[x - 2] + sub[x - 1]) % 2`

### In other words, the sum of any two consecutive elements in the subsequence `sub`, when taken modulo 2, results in the same value.

### Your task is to return the length of the *longest* valid subsequence that can be formed from `nums`.

### Note:

- A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤
The longest valid subsequence is [1, 2, 3, 4].  ( (1+2)%2 = (2+3)%2 = (3+4)%2 == 1 )

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,1,1,2,1,2]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤
The longest valid subsequence is [1, 2, 1, 2, 1, 2].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,3]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤
The longest valid subsequence is [1, 3].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 2 * 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>7</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/16%20-%2007%20-%202025%20---%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/16%20-%2007%20-%202025%20---%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/16%20-%2007%20-%202025%20---%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/16%20-%2007%20-%202025%20---%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subsequence%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203201.%20Find%20the%20Maximum%20Length%20of%20Valid%20Subseque.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8f395b29-0b6c-4a0e-b8fe-997895ef5da9" width = "700px" height="462px" />

</h1>
