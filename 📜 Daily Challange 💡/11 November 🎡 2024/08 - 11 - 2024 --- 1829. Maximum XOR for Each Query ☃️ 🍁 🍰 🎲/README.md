# 1829. Maximum XOR for Each Query

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-xor-for-each-query/?envType=daily-question&envId=2024-11-08"><strong>➥ ☢️ 1829 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a sorted array nums of n non-negative integers and an integer maximumBit. You want to perform the following query n times:

1. Find a non-negative integer k < 2<sup>maximumBit</sup> such that `nums[0] XOR nums[1] XOR ... XOR nums[nums.length-1] XOR k` is maximized. `k` is the answer to the i<sup>th</sup> query.

2. Remove the last element from the current array `nums`.

### Return *an array `answer`, where `answer[i]` is the answer to the `i-th` query*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [0,1,1,3], maximumBit = 2

  ### 📤 `Output`  ➤ [0,3,2,3]

  ### 🔦 `Explanation`  ➤  The queries are answered as follows:

#### 1<sup>st</sup> query ➺ nums = [0,1,1,3], k = 0 since 0 XOR 1 XOR 1 XOR 3 XOR 0 = 3.
#### 2<sup>nd</sup> query ➺ nums = [0,1,1], k = 3 since 0 XOR 1 XOR 1 XOR 3 = 3.
#### 3<sup>rd</sup> query ➺ nums = [0,1], k = 2 since 0 XOR 1 XOR 2 = 3.
#### 4<sup>th</sup> query ➺ nums = [0], k = 3 since 0 XOR 3 = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [2,3,4,7], maximumBit = 3

  ### 📤 `Output`  ➤ [5,2,6,5]

  ### 🔦 `Explanation` ➤  The queries are answered as follows:

#### 1<sup>st</sup> query: nums = [2,3,4,7], k = 5 since 2 XOR 3 XOR 4 XOR 7 XOR 5 = 7.
#### 2<sup>nd</sup> query: nums = [2,3,4], k = 2 since 2 XOR 3 XOR 4 XOR 2 = 7.
#### 3<sup>rd</sup> query: nums = [2,3], k = 6 since 2 XOR 3 XOR 6 = 7.
#### 4<sup>th</sup> query: nums = [2], k = 5 since 2 XOR 5 = 7.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [0,1,2,2,5,7], maximumBit = 3

  ### 📤 `Output`  ➤ [4,3,6,4,6,7]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`nums.length == n`** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **`1 <= maximumBit <= 20`** </br>

🔹 **0 <= nums[i] < 2<sup>maximumBit</sup>** </br>

🔹 **`nums​​​` is sorted in ascending order.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/08%20-%2011%20-%202024%20---%201829.%20Maximum%20XOR%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201829.%20Maximum%20XOR%20for%20Each%20Query.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/08%20-%2011%20-%202024%20---%201829.%20Maximum%20XOR%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201829.%20Maximum%20XOR%20for%20Each%20Query.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/08%20-%2011%20-%202024%20---%201829.%20Maximum%20XOR%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201829.%20Maximum%20XOR%20for%20Each%20Query.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/08%20-%2011%20-%202024%20---%201829.%20Maximum%20XOR%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201829.%20Maximum%20XOR%20for%20Each%20Query.js) |
