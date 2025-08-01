# 2293. Min Max Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/min-max-game/description/"><strong>➥ ♻️ 2293 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` with a length that is a power of 2. Your task is to apply a specific algorithm repeatedly to the array until only one number remains.

### Here's the algorithm:

1. Let `n` be the current length of the `nums` array. If `n == 1`, stop the process. You are left with a single number.
2. If `n > 1`, create a new 0-indexed integer array, `newNums`, of length `n / 2`.
3. For every even index `i` (where `0 <= i < n / 2`), assign the value of `newNums[i]` as the *minimum* of `nums[2 * i]` and `nums[2 * i + 1]`.
4. For every odd index `i` (where `0 <= i < n / 2`), assign the value of `newNums[i]` as the *maximum* of `nums[2 * i]` and `nums[2 * i + 1]`.
5. Replace the array `nums` with `newNums`.
6. Repeat from step 1.

### Your objective is to return the single, last remaining number in `nums` after repeatedly applying this min/max algorithm.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/2c0ba243-ebca-48dd-b519-6347eac52993" width="" height=""/>

  ### 📥 `Input`  ➤ nums = [1,3,5,2,4,8,2,2]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤
The following arrays are the results of applying the algorithm repeatedly.

- First: nums = [1,5,4,2]
- Second: nums = [1,4]
- Third: nums = [1]

1 is the last remaining number, so we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ 3 is already the last remaining number, so we return 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1024 </br>

🔹 1 <= nums[i] <= 10<sup>9</sup> </br>

🔹 nums.length is a power of 2. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202293.%20Min%20Max%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202293.%20Min%20Max%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202293.%20Min%20Max%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202293.%20Min%20Max%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202293.%20Min%20Max%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202293.%20Min%20Max%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202293.%20Min%20Max%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202293.%20Min%20Max%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c1164ea3-18d8-473a-8e69-54654d4d89e7" width = "700px" height="462px" />

</h1>
