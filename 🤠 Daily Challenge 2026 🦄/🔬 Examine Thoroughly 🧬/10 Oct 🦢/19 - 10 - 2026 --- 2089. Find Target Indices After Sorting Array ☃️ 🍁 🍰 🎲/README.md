# 2089. Find Target Indices After Sorting Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-target-indices-after-sorting-array/description/?envType=daily-question&envId=2026-10-19"><strong>➥ ♻️ 2089 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` and a target element `target`.

### A target index is an index `i` such that `nums[i] == target`.

### Return a list of the target indices of `nums` after sorting `nums` in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums = [1,2,5,2,3]`, `target = 2`

  ### 📤 `Output`  ➤ `[1,2]`

  ### 🔦 `Explanation`  ➤ ➺ After sorting, `nums` is `[1,2,2,3,5]`. The indices where `nums[i] == 2` are 1 and 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,2,5,2,3]`, `target = 3`

  ### 📤 `Output`  ➤ `[3]`

  ### 🔦 `Explanation` ➤ ➺ After sorting, `nums` is `[1,2,2,3,5]`. The index where `nums[i] == 3` is 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,2,5,2,3]`, `target = 5`

  ### 📤 `Output`  ➤ `[4]`

  ### 🔦 `Explanation`  ➤ ➺ After sorting, `nums` is `[1,2,2,3,5]`. The index where `nums[i] == 5` is 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 100`** </br>

🔹 **`1 <= nums[i], target <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/19%20-%2010%20-%202026%20---%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/19%20-%2010%20-%202026%20---%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/19%20-%2010%20-%202026%20---%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/19%20-%2010%20-%202026%20---%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202089.%20Find%20Target%20Indices%20After%20Sorting%20Array.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/find-target-indices-after-sorting-array/solutions/8578985/leetcode-daily-grind-java-c-python-javas-5lic) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fef68142-85f0-42e9-ab6a-822815226861" width = "700px" height="462px" />

</h1>
