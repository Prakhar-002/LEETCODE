# 3461. Check If Digits Are Equal in String After Operations I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/description/?envType=daily-question&envId=2025-10-23"><strong>➥ ♻️ 3461 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` consisting of digits. Perform the following operation repeatedly until the string has exactly two digits:

### For each pair of consecutive digits in `s`, starting from the first digit, calculate a new digit as the sum of the two digits modulo 10.

### Replace `s` with the sequence of newly calculated digits, maintaining the order in which they are computed.

### Return `true` if the final two digits in `s` are the same; otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "3902"`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺

  - Initially, `s = "3902"`
  - First operation:
    - `(s[0] + s[1]) % 10 = (3 + 9) % 10 = 2`
    - `(s[1] + s[2]) % 10 = (9 + 0) % 10 = 9`
    - `(s[2] + s[3]) % 10 = (0 + 2) % 10 = 2`
  - `s` becomes "292"
  - Second operation:
    - `(s[0] + s[1]) % 10 = (2 + 9) % 10 = 1`
    - `(s[1] + s[2]) % 10 = (9 + 2) % 10 = 1`
  - `s` becomes "11"
  - Since the digits in "11" are the same, the output is `true`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "34789"`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation`  ➤ ➺

  - Initially, `s = "34789"`.
  - After the first operation, `s = "7157"`.
  - After the second operation, `s = "862"`.
  - After the third operation, `s = "48"`.
  - Since '4' != '8', the output is `false`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= s.length <= 100` </br>
🔹 `s` consists of only digits. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **String** </br>
🔸 **Simulation** </br>
🔸 **Combinatorics** </br>
🔸 **Number Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
