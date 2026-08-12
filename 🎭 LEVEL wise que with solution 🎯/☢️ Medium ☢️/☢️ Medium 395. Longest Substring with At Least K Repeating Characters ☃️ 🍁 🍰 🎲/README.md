# 395. Longest Substring with At Least K Repeating Characters

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/"><strong>➥ ☢️ 395 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` and an integer `k`, return the length of the longest substring of `s` such that the frequency of each character in this substring is greater than or equal to `k`.

### If no such substring exists, return `0`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `s = "aaabb"`, `k = 3`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺ The longest substring is `"aaa"`, as `'a'` is repeated 3 times.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "ababbc"`, `k = 2`

  ### 📤 `Output`  ➤ `5`

  ### 🔦 `Explanation` ➤ ➺ The longest substring is `"ababb"`, as `'a'` is repeated 2 times and `'b'` is repeated 3 times.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "a"`, `k = 2`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation`  ➤ ➺ There is no substring where the character frequency is at least 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 10^4`** </br>

🔹 **`s` consists of only lowercase English letters.** </br>

🔹 **`1 <= k <= 10^5`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Divide and Conquer** </br>
🔸 **Sliding Window** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4254bc0d-554e-43b1-8fdd-0079fbaeebb1" width = "700px" height="462px" />

</h1>
