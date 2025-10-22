# 3397. Maximum Number of Distinct Elements After Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/?envType=daily-question&envId=2025-10-18"><strong>➥ ☢️ 3397 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`.

### You are allowed to perform the following operation on each element of the array at most once:

- Add an integer in the range `[-k, k]` to the element.

### Return the maximum possible number of distinct elements in `nums` after performing the operations.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [1,2,2,3,3,4], k = 2`

  ### 📤 `Output`  ➤ `6`

  ### 🔦 `Explanation`  ➤ ➺

  - `nums` changes to `[-1, 0, 1, 2, 3, 4]` after performing operations on the first four elements.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [4,4,4,4], k = 1`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - By adding -1 to `nums[0]` and 1 to `nums[1]`, `nums` changes to `[3, 5, 4, 4]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 10^5` </br>
🔹 `1 <= nums[i] <= 10^9` </br>
🔹 `0 <= k <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/18%20-%2010%20-%202025%20---%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20Afte.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/18%20-%2010%20-%202025%20---%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20After%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/18%20-%2010%20-%202025%20---%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20Afte.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/18%20-%2010%20-%202025%20---%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203397.%20Maximum%20Number%20of%20Distinct%20Elements%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0e396f0f-f811-4fb8-a665-67aa11133d4f" width = "700px" height="462px" />

</h1>
