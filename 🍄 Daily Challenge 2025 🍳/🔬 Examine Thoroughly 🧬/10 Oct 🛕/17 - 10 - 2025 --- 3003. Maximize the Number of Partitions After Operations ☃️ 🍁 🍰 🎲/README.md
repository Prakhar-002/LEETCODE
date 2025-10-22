# 3003. Maximize the Number of Partitions After Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-the-number-of-partitions-after-operations/?envType=daily-question&envId=2025-10-17"><strong>➥ 🫀 3003 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` and an integer `k`.

### First, you are allowed to change at most one index in `s` to another lowercase English letter.

### After that, do the following partitioning operation until `s` is empty:

- Choose the longest prefix of `s` containing at most `k` distinct characters.
- Delete the prefix from `s` and increase the number of partitions by one. The remaining characters (if any) in `s` maintain their initial order.

### Return an integer denoting the maximum number of resulting partitions after the operations by optimally choosing at most one index to change.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "accca", k = 2`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - The optimal way is to change `s[2]` to something other than a and c, for example, b. then it becomes "acbca".
  - Then we perform the operations:
    - The longest prefix containing at most 2 distinct characters is "ac", we remove it and `s` becomes "bca".
    - Now The longest prefix containing at most 2 distinct characters is "bc", so we remove it and `s` becomes "a".
    - Finally, we remove "a" and `s` becomes empty, so the procedure ends.
  - Doing the operations, the string is divided into 3 partitions, so the answer is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "aabaab", k = 3`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺

  - Initially `s` contains 2 distinct characters, so whichever character we change, it will contain at most 3 distinct characters, so the longest prefix with at most 3 distinct characters would always be all of it, therefore the answer is 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "xxyz", k = 1`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - The optimal way is to change `s[0]` or `s[1]` to something other than characters in `s`, for example, to change `s[0]` to w.
  - Then `s` becomes "wxyz", which consists of 4 distinct characters, so as `k` is 1, it will divide into 4 partitions.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 10^4` </br>
🔹 `s` consists only of lowercase English letters. </br>
🔹 `1 <= k <= 26` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Dynamic Programming** </br>
🔸 **Bit Manipulation** </br>
🔸 **Bitmask** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/17%20-%2010%20-%202025%20---%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Op.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/17%20-%2010%20-%202025%20---%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Oper.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/17%20-%2010%20-%202025%20---%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Op.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/17%20-%2010%20-%202025%20---%203003.%20Maximize%20the%20Number%20of%20Partitions%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203003.%20Maximize%20the%20Number%20of%20Partitions%20Afte.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/780cb5a0-b28f-4739-b4eb-b12daa723eb8" width = "700px" height="462px" />

</h1>
