# 3432. Count Partitions with Even Sum Difference

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-partitions-with-even-sum-difference/description/?envType=daily-question&envId=2025-12-05"><strong>➥ ♻️ 3432 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` of length `n`.

### A partition is defined as an index `i` where `0 <= i < n - 1`, splitting the array into two non-empty subarrays such that:

- Left subarray contains indices `[0, i]`.
- Right subarray contains indices `[i + 1, n - 1]`.

### Return the number of partitions where the difference between the sum of the left and right subarrays is even.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [10,10,3,7,6]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The 4 partitions are:

- [10], [10, 3, 7, 6] with a sum difference of 10 - 26 = -16, which is even.
- [10, 10], [3, 7, 6] with a sum difference of 20 - 16 = 4, which is even.
- [10, 10, 3], [7, 6] with a sum difference of 23 - 13 = 10, which is even.
- [10, 10, 3, 7], [6] with a sum difference of 30 - 6 = 24, which is even.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,2]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
No partition results in an even sum difference.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,4,6,8]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤
All partitions result in an even sum difference.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n == nums.length <= 100 </br>
🔹 1 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/05%20-%2012%20-%202025%20---%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/05%20-%2012%20-%202025%20---%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/05%20-%2012%20-%202025%20---%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/05%20-%2012%20-%202025%20---%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203432.%20Count%20Partitions%20with%20Even%20Sum%20Difference.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d6c442c8-c375-4a43-8a37-9152eca163e3" width = "700px" height="462px" />

</h1>
