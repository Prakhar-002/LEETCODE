# 2913. Subarrays Distinct Element Sum of Squares I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/?envType=daily-question&envId=2026-10-15"><strong>➥ ☢️ 2913 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`.

### The distinct count of a subarray of `nums` is defined as:
- Let `nums[i..j]` be a subarray of `nums` consisting of all the indices from `i` to `j` such that `0 <= i <= j < nums.length`. Then the number of distinct values in `nums[i..j]` is called the distinct count of `nums[i..j]`.

### Return the sum of the squares of distinct counts of all subarrays of `nums`. A subarray is a contiguous non-empty sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums = [1,2,1]`

  ### 📤 `Output`  ➤ `15`

  ### 🔦 `Explanation`  ➤ ➺ Six possible subarrays are:
- `[1]`: 1 distinct value
- `[2]`: 1 distinct value
- `[1]`: 1 distinct value
- `[1,2]`: 2 distinct values
- `[2,1]`: 2 distinct values
- `[1,2,1]`: 2 distinct values
The sum of the squares of the distinct counts in all subarrays is equal to `1^2 + 1^2 + 1^2 + 2^2 + 2^2 + 2^2 = 15`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,1]`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation` ➤ ➺ Three possible subarrays are:
- `[1]`: 1 distinct value
- `[1]`: 1 distinct value
- `[1,1]`: 1 distinct value
The sum of the squares of the distinct counts in all subarrays is equal to `1^2 + 1^2 + 1^2 = 3`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,2,3]`

  ### 📤 `Output`  ➤ `20`

  ### 🔦 `Explanation`  ➤ ➺ Subarrays and distinct counts:
- Size 1: `[1]` (1), `[2]` (1), `[3]` (1) -> `1 + 1 + 1 = 3`
- Size 2: `[1,2]` (2), `[2,3]` (2) -> `4 + 4 = 8`
- Size 3: `[1,2,3]` (3) -> `9`
Total score: `3 + 8 + 9 = 20`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 100`** </br>

🔹 **`1 <= nums[i] <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Binary Indexed Tree** </br>
🔸 **Segment Tree** </br>

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
