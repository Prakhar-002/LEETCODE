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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/88e1287f-781e-4b04-8ee3-3fdace280e8d" width = "700px" height="462px" />

</h1>
