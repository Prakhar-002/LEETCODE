# 1695. Maximum Erasure Value

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-erasure-value/description/?envType=daily-question&envId=2025-07-22"><strong>➥ ☢️ 1695 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` consisting of positive integers. Your task is to erase a *subarray* that contains only *unique* elements. The score you get by erasing this subarray is equal to the sum of the elements it contains.

### Your goal is to return the *maximum* score you can obtain by erasing exactly *one* such subarray from the given array.

### Remember: A subarray is a contiguous subsequence of the array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,2,4,5,6]

  ### 📤 `Output`  ➤ 17

  ### 🔦 `Explanation`  ➤ The optimal subarray here is [2,4,5,6], which has a sum of 17.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5,2,1,2,5,2,1,2,5]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation` ➤ The optimal subarray here is [5,2,1] or [1,2,5], each of which has a sum of 8.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Sliding Window**  </br>

🔸 **Weekly Contest 220**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/22%20-%2007%20-%202025%20---%201695.%20Maximum%20Erasure%20Value%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201695.%20Maximum%20Erasure%20Value.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/22%20-%2007%20-%202025%20---%201695.%20Maximum%20Erasure%20Value%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201695.%20Maximum%20Erasure%20Value.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/22%20-%2007%20-%202025%20---%201695.%20Maximum%20Erasure%20Value%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201695.%20Maximum%20Erasure%20Value.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/22%20-%2007%20-%202025%20---%201695.%20Maximum%20Erasure%20Value%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201695.%20Maximum%20Erasure%20Value.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c5bf00fc-9d06-41fd-a757-1f99b3a0606a" width = "700px" height="462px" />

</h1>
