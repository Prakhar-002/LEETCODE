# 2333. Minimum Sum of Squared Difference

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-sum-of-squared-difference/description/?envType=daily-question&envId=2026-10-10"><strong>➥ ☢️ 2333 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive 0-indexed integer arrays `nums1` and `nums2`, both of length `n`.

### The sum of squared difference of arrays `nums1` and `nums2` is defined as the sum of `(nums1[i] - nums2[i])^2` for each `0 <= i < n`.

### You are also given two positive integers `k1` and `k2`. You can modify any of the elements of `nums1` by `+1` or `-1` at most `k1` times. Similarly, you can modify any of the elements of `nums2` by `+1` or `-1` at most `k2` times.

### Return the minimum sum of squared difference after modifying array `nums1` at most `k1` times and modifying array `nums2` at most `k2` times.

> **Note:** You are allowed to modify the array elements to become negative integers.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums1 = [1,2,3,4]`, `nums2 = [2,10,20,19]`, `k1 = 0`, `k2 = 0`

  ### 📤 `Output`  ➤ `579`

  ### 🔦 `Explanation`  ➤ ➺ The elements in `nums1` and `nums2` cannot be modified because `k1 = 0` and `k2 = 0`. The sum of square difference will be: `(1 - 2)^2 + (2 - 10)^2 + (3 - 20)^2 + (4 - 19)^2 = 579`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums1 = [1,4,10,12]`, `nums2 = [5,8,6,9]`, `k1 = 1`, `k2 = 1`

  ### 📤 `Output`  ➤ `43`

  ### 🔦 `Explanation` ➤ ➺ One way to obtain the minimum sum of square difference is:
- Increase `nums1[0]` once.
- Increase `nums2[2]` once.
The minimum of the sum of square difference will be: `(2 - 5)^2 + (4 - 8)^2 + (10 - 7)^2 + (12 - 9)^2 = 43`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums1 = [1,2]`, `nums2 = [1,2]`, `k1 = 5`, `k2 = 5`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation`  ➤ ➺ The differences are already all 0, so the squared difference sum remains 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == nums1.length == nums2.length`** </br>

🔹 **`1 <= n <= 10^5`** </br>

🔹 **`0 <= nums1[i], nums2[i] <= 10^5`** </br>

🔹 **`0 <= k1, k2 <= 10^9`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>
🔸 **Heap (Priority Queue)** </br>

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
