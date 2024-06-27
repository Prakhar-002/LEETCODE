# 1208. Get Equal Substrings Within Budget

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/get-equal-substrings-within-budget/?envType=daily-question&envId=2024-05-21"><strong>➥ ☢️ 1208 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings `s` and `t` of the same length and an integer `maxCost`.

### You want to change `s` to `t`. Changing the ith character of `s` to ith character of t costs `|s[i] - t[i]|` (i.e., the absolute difference between the ASCII values of the characters).

### Return *the maximum length of a substring of `s` that can be changed to be the same as the corresponding substring of `t` with a cost less than or equal to `maxCost`*. If there is no substring from `s` that can be changed to its corresponding substring from `t`, return `0`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ s = "abcd", t = "bcdf", maxCost = 3

  ### Output  ➤ 3

  ### Explanation  ➤ "abc" of s can change to "bcd".</br> That costs 3, so the maximum length is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "abcd", t = "cdef", maxCost = 3

  ### Output  ➤ 1

  ### Explanation ➤ Each character in s costs 2 to change to character in t,  so the maximum length is 1.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "abcd", t = "acde", maxCost = 0

  ### Output  ➤ 1

  ### Explanation  ➤ You cannot make any change, so the maximum length is 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= s.length <= 105**
- **t.length == s.length**
- **0 <= maxCost <= 106**
- **`s` and `t` consist of only lowercase English letters.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **String**
2. **Binary Search**
3. **Sliding Window**
4. **Prefix Sum**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/28%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201208.%20Get%20Equal%20Substrings%20Within%20Budget%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_1208_GetEqualSubstringsWithinBudget.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/28%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201208.%20Get%20Equal%20Substrings%20Within%20Budget%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON_1208_GetEqualSubstringsWithinBudget.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/28%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201208.%20Get%20Equal%20Substrings%20Within%20Budget%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_1208_GetEqualSubstringsWithinBudget.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/28%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201208.%20Get%20Equal%20Substrings%20Within%20Budget%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%92%96C_1208_GetEqualSubstringsWithinBudget.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/student-attendance-record-i/solutions/5223682/java-100-beats-one-line-python-sol-step-wise-explanation-biggner-friendy)  |
