# 2958. Length of Longest Subarray With at Most K Frequency

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/?envType=daily-question&envId=2026-08-12"><strong>➥ ☢️ 2958 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`.

### The frequency of an element `x` is the number of times it occurs in an array. An array is called good if the frequency of each element in this array is less than or equal to `k`.

### Return the length of the longest good subarray of `nums`. A subarray is a contiguous non-empty sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums = [1,2,3,1,2,3,1,2]`, `k = 2`

  ### 📤 `Output`  ➤ `6`

  ### 🔦 `Explanation`  ➤ ➺ The longest possible good subarray is `[1,2,3,1,2,3]` since the values 1, 2, and 3 occur at most twice in this subarray. Note that the subarrays `[2,3,1,2,3,1]` and `[3,1,2,3,1,2]` are also good. It can be shown that there are no good subarrays with length more than 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,2,1,2,1,2,1,2]`, `k = 1`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation` ➤ ➺ The longest possible good subarray is `[1,2]` since the values 1 and 2 occur at most once in this subarray. Note that the subarray `[2,1]` is also good. It can be shown that there are no good subarrays with length more than 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5,5,5,5,5,5,5]`, `k = 4`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺ The longest possible good subarray is `[5,5,5,5]` since the value 5 occurs 4 times in this subarray. It can be shown that there are no good subarrays with length more than 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 10^5`** </br>

🔹 **`1 <= nums[i] <= 10^9`** </br>

🔹 **`1 <= k <= nums.length`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sliding Window** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/12%20-%2008%20-%202025%20---%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Most%20K%20Frequency%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Mos.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/12%20-%2008%20-%202025%20---%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Most%20K%20Frequency%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Most%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/12%20-%2008%20-%202025%20---%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Most%20K%20Frequency%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Mos.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/12%20-%2008%20-%202025%20---%202958.%20Length%20of%20Longest%20Subarray%20With%20at%20Most%20K%20Frequency%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202958.%20Length%20of%20Longest%20Subarray%20With%20at.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e9e75998-f78c-4b97-97cc-c9f1d0b65517" width = "700px" height="462px" />

</h1>
