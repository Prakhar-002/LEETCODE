# 3347. Maximum Frequency of an Element After Performing Operations II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-frequency-of-an-element-after-performing-operations-ii/?envType=daily-question&envId=2025-10-22"><strong>➥ 🫀 3347 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and two integers `k` and `numOperations`.

### You must perform an operation `numOperations` times on `nums`, where in each operation you:

- Select an index `i` that was not selected in any previous operations.
- Add an integer in the range `[-k, k]` to `nums[i]`.

### Return the maximum possible frequency of any element in `nums` after performing the operations.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,4,5], k = 1, numOperations = 2`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - We can achieve a maximum frequency of two by:
    - Adding 0 to `nums[1]`, after which `nums` becomes `[1, 4, 5]`.
    - Adding -1 to `nums[2]`, after which `nums` becomes `[1, 4, 4]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [5,11,20,20], k = 5, numOperations = 1`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - We can achieve a maximum frequency of two by:
    - Adding 0 to `nums[1]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 10^5` </br>
🔹 `1 <= nums[i] <= 10^9` </br>
🔹 `0 <= k <= 10^9` </br>
🔹 `0 <= numOperations <= nums.length` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Sliding Window** </br>
🔸 **Sorting** </br>
🔸 **Prefix Sum** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
