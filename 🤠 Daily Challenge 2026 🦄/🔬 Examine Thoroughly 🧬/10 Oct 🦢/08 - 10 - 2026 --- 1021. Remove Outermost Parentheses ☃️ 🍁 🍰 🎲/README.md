# 1021. Remove Outermost Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-outermost-parentheses/description/?envType=daily-question&envId=2026-10-08"><strong>➥ ☢️ 1021 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A valid parentheses string is either empty `""`, `"(" + A + ")"`, or `A + B`, where `A` and `B` are valid parentheses strings, and `+` represents string concatenation.

- For example, `""`, `"()"`, `"(())()"`, and `"(()(()))"` are all valid parentheses strings.

### A valid parentheses string `s` is primitive if it is nonempty, and there does not exist a way to split it into `s = A + B`, with `A` and `B` nonempty valid parentheses strings.

### Given a valid parentheses string `s`, consider its primitive decomposition: `s = P1 + P2 + ... + Pk`, where `Pi` are primitive valid parentheses strings. Return `s` after removing the outermost parentheses of every primitive string in the primitive decomposition of `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `s = "(()())(())"`

  ### 📤 `Output`  ➤ `"()()()"`

  ### 🔦 `Explanation`  ➤ ➺ The input string is `"(()())(())"`, with primitive decomposition `"(()())" + "(())"`. After removing outer parentheses of each part, this is `"()()" + "()" = "()()()"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "(()())(())(()(()))"`

  ### 📤 `Output`  ➤ `"()()()()(())"`

  ### 🔦 `Explanation` ➤ ➺ The input string is `"(()())(())(()(()))"`, with primitive decomposition `"(()())" + "(())" + "(()(()))"`. After removing outer parentheses of each part, this is `"()()" + "()" + "()(())" = "()()()()(())"`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "()()"`

  ### 📤 `Output`  ➤ `""`

  ### 🔦 `Explanation`  ➤ ➺ The input string is `"()()"`, with primitive decomposition `"()" + "()"`. After removing outer parentheses of each part, this is `"" + "" = ""`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 10^5`** </br>

🔹 **`s[i]` is either `'('` or `')'`.** </br>

🔹 **`s` is a valid parentheses string.** </br>

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
