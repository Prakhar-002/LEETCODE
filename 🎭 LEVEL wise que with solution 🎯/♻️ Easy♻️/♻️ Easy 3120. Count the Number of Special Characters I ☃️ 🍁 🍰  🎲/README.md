# 3120. Count the Number of Special Characters I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-special-characters-i/description/?envType=daily-question&envId=2026-05-26"><strong>➥ ♻️ 3120 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a string `word`. A letter is called **special** if it appears both in **lowercase** and **uppercase** in `word`.
### Return the **number of special letters** in `word`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ word = "aaAbcBC"
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ The special characters in `word` are `'a'`, `'b'`, and `'c'` — each appears in both lowercase and uppercase.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "abc"
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ No character in `word` appears in uppercase, so there are **no special letters**.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "abBCab"
  ### 📤 `Output`  ➤ 1
  ### 🔦 `Explanation` ➤ The only special character in `word` is `'b'`, as it appears as both `'b'` and `'B'`. `'c'` only appears as uppercase `'C'`, so it does not qualify.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= word.length <= 50` </br>
🔹 `word` consists of only **lowercase** and **uppercase** English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Hash Table** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203120.%20Count%20the%20Number%20of%20Special%20Characters%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d3947e2a-d68a-4312-a24d-05918752a62e" width = "700px" height="462px" />

</h1>
