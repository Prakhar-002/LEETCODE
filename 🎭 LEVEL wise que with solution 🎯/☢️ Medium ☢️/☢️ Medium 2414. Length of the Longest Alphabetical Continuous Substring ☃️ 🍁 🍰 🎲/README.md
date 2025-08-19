# 2414. Length of the Longest Alphabetical Continuous Substring

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/description/"><strong>➥ ☢️ 2414 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string "abcdefghijklmnopqrstuvwxyz".

- For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.

### Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "abacaba"`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ There are 4 distinct continuous substrings: "a", "b", "c" and "ab". "ab" is the longest continuous substring.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "abcde"`

  ### 📤 `Output`  ➤ `5`

  ### 🔦 `Explanation` ➤ "abcde" is the longest continuous substring.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "zab"`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation` ➤ The longest alphabetical continuous substring is "ab" of length 2. The substring "za" is not alphabetical because z is not followed by a in the alphabet.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 10^5` </br>
🔹 `s` consists of only English lowercase letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202414.%20Length%20of%20the%20Longest%20Alphabetical%20Continuous%20Substring.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/104281a1-7f76-42fb-9f71-b15650d51a30" width = "700px" height="462px" />

</h1>
