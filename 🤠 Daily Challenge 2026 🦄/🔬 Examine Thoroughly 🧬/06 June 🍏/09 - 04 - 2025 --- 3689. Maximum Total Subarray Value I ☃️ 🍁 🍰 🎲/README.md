# 3689. Maximum Total Subarray Value I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-total-subarray-value-i/description/?envType=daily-question&envId=2026-06-09"><strong>➥ ☢️ 3689 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums` of length `n` and an integer `k`.
### You need to choose **exactly** `k` **non-empty subarrays** `nums[l..r]` of `nums`. Subarrays may **overlap**, and the **exact same subarray** (same `l` and `r`) can be chosen **more than once**.
### The **value** of a subarray `nums[l..r]` is defined as: `max(nums[l..r]) - min(nums[l..r])`.
### The **total value** is the sum of the values of all chosen subarrays.
### Return the **maximum possible total value** you can achieve.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,3,2], k = 2
  ### 📤 `Output`  ➤ 4
  ### 🔦 `Explanation`  ➤ Choose `nums[0..1]` → value `3-1 = 2`. Choose `nums[0..2]` → value `3-1 = 2`. Total = `2 + 2 = 4`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [4,2,5,1], k = 3
  ### 📤 `Output`  ➤ 12
  ### 🔦 `Explanation` ➤ Choose `nums[0..3]` twice and `nums[2..3]` once — each has value `5-1 = 4`. Total = `4 + 4 + 4 = 12`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,1,1], k = 5
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ All elements are equal, so every subarray has `max - min = 0`. No matter which `5` subarrays are chosen, total value = `0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= n == nums.length <= 5 * 10^4` </br>
🔹 `0 <= nums[i] <= 10^9` </br>
🔹 `1 <= k <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/09%20-%2004%20-%202025%20---%203689.%20Maximum%20Total%20Subarray%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203689.%20Maximum%20Total%20Subarray%20Value%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/09%20-%2004%20-%202025%20---%203689.%20Maximum%20Total%20Subarray%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203689.%20Maximum%20Total%20Subarray%20Value%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/09%20-%2004%20-%202025%20---%203689.%20Maximum%20Total%20Subarray%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203689.%20Maximum%20Total%20Subarray%20Value%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/09%20-%2004%20-%202025%20---%203689.%20Maximum%20Total%20Subarray%20Value%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203689.%20Maximum%20Total%20Subarray%20Value%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/819f4b6d-ae28-473a-835b-d0670fbe0e7b" width = "700px" height="462px" />

</h1>
