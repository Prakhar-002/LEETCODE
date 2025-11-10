# 3542. Minimum Operations to Convert All Elements to Zero

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/description/?envType=daily-question&envId=2025-11-10"><strong>➥ ☢️ 3542 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` of size `n`, consisting of non-negative integers. Your task is to apply some (possibly zero) operations on the array so that all elements become 0.

### In one operation, you can select a subarray `[i, j]` (where `0 <= i <= j < n`) and set all occurrences of the minimum non-negative integer in that subarray to 0.

### Return the minimum number of operations required to make all elements in the array 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [0,2]`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺

  - Select the subarray `[1,1]` (which is `[2]`), where the minimum non-negative integer is 2. Setting all occurrences of 2 to 0 results in `[0,0]`.
  - Thus, the minimum number of operations required is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [3,1,2,1]`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - Select subarray `[1,3]` (which is `[1,2,1]`), where the minimum non-negative integer is 1. Setting all occurrences of 1 to 0 results in `[3,0,2,0]`.
  - Select subarray `[2,2]` (which is `[2]`), where the minimum non-negative integer is 2. Setting all occurrences of 2 to 0 results in `[3,0,0,0]`.
  - Select subarray `[0,0]` (which is `[3]`), where the minimum non-negative integer is 3. Setting all occurrences of 3 to 0 results in `[0,0,0,0]`.
  - Thus, the minimum number of operations required is 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,2,1,2,1,2]`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - Select subarray `[0,5]` (which is `[1,2,1,2,1,2]`), where the minimum non-negative integer is 1. Setting all occurrences of 1 to 0 results in `[0,2,0,2,0,2]`.
  - Select subarray `[1,1]` (which is `[2]`), where the minimum non-negative integer is 2. Setting all occurrences of 2 to 0 results in `[0,0,0,2,0,2]`.
  - Select subarray `[3,3]` (which is `[2]`), where the minimum non-negative integer is 2. Setting all occurrences of 2 to 0 results in `[0,0,0,0,0,2]`.
  - Select subarray `[5,5]` (which is `[2]`), where the minimum non-negative integer is 2. Setting all occurrences of 2 to 0 results in `[0,0,0,0,0,0]`.
  - Thus, the minimum number of operations required is 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n == nums.length <= 10^5` </br>
🔹 `0 <= nums[i] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Stack** </br>
🔸 **Greedy** </br>
🔸 **Monotonic Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
