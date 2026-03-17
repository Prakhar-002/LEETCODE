# Q1. Minimum Remove to Make Valid Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/?envType=problem-list-v2&envId=interview-instance-vii"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given a string `s` of `'('` , `')'` and lowercase English characters.
### Your task is to remove the **minimum number of parentheses** ( `'('` or `')'`, in any positions ) so that the resulting parentheses string is **valid** and return **any valid string**.
### Formally, a parentheses string is valid if and only if:
- &nbsp;&nbsp;&nbsp;&nbsp; It is the **empty string**, contains only lowercase characters, or
- &nbsp;&nbsp;&nbsp;&nbsp; It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings, or
- &nbsp;&nbsp;&nbsp;&nbsp; It can be written as `(A)`, where `A` is a valid string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ s = "lee(t(c)o)de)"
  ### 📤 `Output`  ➤ "lee(t(c)o)de"
  ### 🔦 `Explanation`  ➤ "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "a)b(c)d"
  ### 📤 `Output`  ➤ "ab(c)d"
  ### 🔦 `Explanation` ➤ The unmatched `)` at index 1 is removed, leaving a valid parentheses string.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "))(("
  ### 📤 `Output`  ➤ ""
  ### 🔦 `Explanation` ➤ An empty string is also valid. All 4 parentheses are unmatched, so all are removed.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= s.length <= 10^5` </br>
🔹 `s[i]` is either `'('` , `')'` , or a lowercase English letter. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>
🔸 **Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/3%20Ascension/Interview%20Instance%207/Q1.%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses/%F0%9F%8D%81JAVA%20-%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/3%20Ascension/Interview%20Instance%207/Q1.%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses/%F0%9F%8E%B2CPP%20-%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/3%20Ascension/Interview%20Instance%207/Q1.%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses/%F0%9F%8D%B0PYTHON%20-%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/3%20Ascension/Interview%20Instance%207/Q1.%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Minimum%20Remove%20to%20Make%20Valid%20Parentheses.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
