# 3612. Process String with Special Operations I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/process-string-with-special-operations-i/description/?envType=daily-question&envId=2026-06-16"><strong>➥ ☢️ 3612 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a string `s` consisting of lowercase English letters and the special characters: `*`, `#`, and `%`.
### Build a new string `result` by processing `s` according to the following rules from left to right:
### &nbsp;&nbsp;&nbsp;&nbsp;• If the letter is a **lowercase English letter**, append it to `result`.
### &nbsp;&nbsp;&nbsp;&nbsp;• A `'*'` **removes** the last character from `result`, if it exists.
### &nbsp;&nbsp;&nbsp;&nbsp;• A `'#'` **duplicates** the current `result` and appends it to itself.
### &nbsp;&nbsp;&nbsp;&nbsp;• A `'%'` **reverses** the current `result`.
### Return the **final string** `result` after processing all characters in `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ s = "a#b%*"
  ### 📤 `Output`  ➤ "ba"
  ### 🔦 `Explanation`  ➤ Append 'a' → "a". Duplicate → "aa". Append 'b' → "aab". Reverse → "baa". Remove last → "ba". Final result is "ba".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "z*#"
  ### 📤 `Output`  ➤ ""
  ### 🔦 `Explanation` ➤ Append 'z' → "z". Remove last → "". Duplicate empty string → "". Final result is "".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "ab%"
  ### 📤 `Output`  ➤ "ba"
  ### 🔦 `Explanation` ➤ Append 'a' → "a". Append 'b' → "ab". Reverse → "ba". Final result is "ba".

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= s.length <= 20` </br>
🔹 `s` consists of only **lowercase English letters** and special characters `*`, `#`, and `%`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>
🔸 **Simulation** </br>

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
