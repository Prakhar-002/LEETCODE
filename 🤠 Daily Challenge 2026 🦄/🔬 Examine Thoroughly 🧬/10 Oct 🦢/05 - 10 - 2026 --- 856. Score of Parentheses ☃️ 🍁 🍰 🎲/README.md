# 856. Score of Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/score-of-parentheses/description/?envType=daily-question&envId=2026-10-05"><strong>➥ ☢️ 856 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a balanced parentheses string `s`, return the score of the string.

### The score of a balanced parentheses string is based on the following rule:
- `"()"` has score `1`.
- `AB` has score `A + B`, where `A` and `B` are balanced parentheses strings.
- `(A)` has score `2 * A`, where `A` is a balanced parentheses string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `s = "()"`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺ The string consists of a single balanced pair `"()"`, which has a score of 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "(())"`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation` ➤ ➺ The inner `"()"` has a score of 1, so enclosing it as `("(())")` yields `2 * 1 = 2`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "()()"`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺ The string is formed by concatenating two `"()"` strings, yielding `1 + 1 = 2`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= s.length <= 50`** </br>

🔹 **`s` consists of only `'('` and `')'`.** </br>

🔹 **`s` is a balanced parentheses string.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
