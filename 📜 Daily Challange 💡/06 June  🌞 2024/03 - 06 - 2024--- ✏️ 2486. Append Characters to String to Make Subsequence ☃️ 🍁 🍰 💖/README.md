# 2486. Append Characters to String to Make Subsequence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 2486 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings `s` and `t` consisting of only lowercase English letters.

### Return *the minimum number of characters that need to be appended to the end of `s` so that `t` becomes a **subsequence** of `s`*.

### A **subsequence** is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤  s = "coaching", t = "coding"

  ### Output  ➤ 4

  ### Explanation  ➤ Append the characters "ding" to the end of s so that s = "coachingding".Now, t is a subsequence of s ("`co`aching`ding`").It can be shown that appending any 3 characters to the end of s will never make t a subsequence.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "abcde", t = "a"

  ### Output  ➤ 0

  ### Explanation ➤  t is already a subsequence of s ("`a`bcde").


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤  s = "z", t = "abcde"

  ### Output  ➤ 5

  ### Explanation ➤  Append the characters "abcde" to the end of s so that s = "zabcde".Now, t is a subsequence of s ("z`abcde`").It can be shown that appending any 4 characters to the end of s will never make t a subsequence.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= s.length, t.length <= 105**
- **s and t consist only of lowercase English letters.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Two Pointers**
2. **Greedy**
3. **String**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/03%20-%2006%20-%202024---%20%E2%9C%8F%EF%B8%8F%202486.%20Append%20Characters%20to%20String%20to%20Make%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%81JAVA_AppendCharactersToStringToMakeSubsequence.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/03%20-%2006%20-%202024---%20%E2%9C%8F%EF%B8%8F%202486.%20Append%20Characters%20to%20String%20to%20Make%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_AppendCharactersToStringToMakeSubsequence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/03%20-%2006%20-%202024---%20%E2%9C%8F%EF%B8%8F%202486.%20Append%20Characters%20to%20String%20to%20Make%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_2486_AppendCharactersToStringToMakeSubsequence.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/03%20-%2006%20-%202024---%20%E2%9C%8F%EF%B8%8F%202486.%20Append%20Characters%20to%20String%20to%20Make%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%92%96C_AppendCharactersToStringToMakeSubsequence.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/solutions/5250623/true-explanation-step-by-step-97-89-beats-best-visualization-formatted)  |
