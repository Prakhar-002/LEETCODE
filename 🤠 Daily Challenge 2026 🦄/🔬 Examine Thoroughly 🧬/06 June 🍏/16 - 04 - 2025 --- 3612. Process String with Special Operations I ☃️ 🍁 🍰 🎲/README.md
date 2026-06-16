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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/16%20-%2004%20-%202025%20---%203612.%20Process%20String%20with%20Special%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203612.%20Process%20String%20with%20Special%20Operations%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/16%20-%2004%20-%202025%20---%203612.%20Process%20String%20with%20Special%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203612.%20Process%20String%20with%20Special%20Operations%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/16%20-%2004%20-%202025%20---%203612.%20Process%20String%20with%20Special%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203612.%20Process%20String%20with%20Special%20Operations%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/16%20-%2004%20-%202025%20---%203612.%20Process%20String%20with%20Special%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203612.%20Process%20String%20with%20Special%20Operations%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e43471f2-0a03-455d-869a-5cc17344bdc4" width = "700px" height="462px" />

</h1>
