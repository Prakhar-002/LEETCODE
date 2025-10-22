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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
