# 2221. Find Triangular Sum of an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-triangular-sum-of-an-array/description/"><strong>➥ ☢️ 2221 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, where each `nums[i]` is a digit between 0 and 9 (inclusive).

The *triangular sum* of `nums` is defined as the value of the sole remaining element in `nums` after the following process terminates:

1.  If `nums` contains only one element (n == 1), the process ends.
2.  Otherwise, construct a new 0-indexed integer array `newNums` of length `n - 1`.
3.  For each index `i` (where `0 <= i < n - 1`), calculate `newNums[i]` as `(nums[i] + nums[i+1]) % 10`. In other words, each element in `newNums` is the modulo 10 sum of two consecutive elements in `nums`.
4.  Replace the array `nums` with `newNums`.
5.  Repeat the entire process from step 1.

Your task is to return the triangular sum of `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ nums = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤
The above diagram depicts the process from which we obtain the triangular sum of the array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ Since there is only one element in nums, the triangular sum is the value of that element itself.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>

🔹 0 <= nums[i] <= 9 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Math**  </br>

🔸 **Simulation**  </br>

🔸 **Combinatorics**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
