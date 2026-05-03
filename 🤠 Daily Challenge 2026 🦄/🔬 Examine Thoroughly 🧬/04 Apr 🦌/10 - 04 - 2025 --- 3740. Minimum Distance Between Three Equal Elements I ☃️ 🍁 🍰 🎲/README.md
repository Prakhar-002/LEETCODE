# 3740. Minimum Distance Between Three Equal Elements I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/?envType=daily-question&envId=2026-04-03"><strong>➥ ♻️ 3740 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums`.
### A tuple `(i, j, k)` of **3 distinct indices** is **good** if `nums[i] == nums[j] == nums[k]`.
### The **distance** of a good tuple is `abs(i - j) + abs(j - k) + abs(k - i)`, where `abs(x)` denotes the absolute value of `x`.
### Return an integer denoting the **minimum possible distance** of a good tuple. If **no good tuples** exist, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,2,1,1,3]
  ### 📤 `Output`  ➤ 6
  ### 🔦 `Explanation`  ➤ The good tuple `(0, 2, 3)` has `nums[0] == nums[2] == nums[3] == 1`. Distance = `abs(0-2) + abs(2-3) + abs(3-0) = 2 + 1 + 3 = 6`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,1,2,3,2,1,2]
  ### 📤 `Output`  ➤ 8
  ### 🔦 `Explanation` ➤ The good tuple `(2, 4, 6)` has `nums[2] == nums[4] == nums[6] == 2`. Distance = `abs(2-4) + abs(4-6) + abs(6-2) = 2 + 2 + 4 = 8`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1]
  ### 📤 `Output`  ➤ -1
  ### 🔦 `Explanation` ➤ There are **no good tuples** since there are fewer than 3 elements. Therefore, the answer is `-1`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= n == nums.length <= 100` </br>
🔹 `1 <= nums[i] <= n` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Hash Table** </br>

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
