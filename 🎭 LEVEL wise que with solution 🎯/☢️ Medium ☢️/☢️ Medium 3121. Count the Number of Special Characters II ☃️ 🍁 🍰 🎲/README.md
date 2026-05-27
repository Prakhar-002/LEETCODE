# 3121. Count the Number of Special Characters II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-special-characters-ii/description/?envType=daily-question&envId=2026-05-27"><strong>➥ ☢️ 3121 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a string `word`. A letter `c` is called **special** if it appears both in **lowercase** and **uppercase** in `word`, and **every lowercase occurrence** of `c` appears **before** the first uppercase occurrence of `c`.
### Return the **number of special letters** in `word`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ word = "aaAbcBC"
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ The special characters are `'a'`, `'b'`, and `'c'` — each has all lowercase occurrences appearing before their first uppercase occurrence.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "abc"
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ There are **no special characters** in `word` since no letter appears in both cases.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "AbBCab"
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ There are **no special characters** in `word`. For `'b'`, uppercase `'B'` appears at index `2` but lowercase `'b'` appears at index `4` — **after** the uppercase, violating the condition.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= word.length <= 2 * 10^5` </br>
🔹 `word` consists of only **lowercase** and **uppercase** English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Hash Table** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203121.%20Count%20the%20Number%20of%20Special%20Characters%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4fb2b68f-f62b-4613-aa13-0f16801dcb4e" width = "700px" height="462px" />

</h1>
