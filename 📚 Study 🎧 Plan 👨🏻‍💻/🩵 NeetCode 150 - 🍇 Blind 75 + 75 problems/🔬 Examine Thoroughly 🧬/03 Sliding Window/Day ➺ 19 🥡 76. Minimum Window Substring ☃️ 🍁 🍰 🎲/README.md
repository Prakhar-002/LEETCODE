# 76. Minimum Window Substring

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-window-substring/description/"><strong>➥ 🫀 76 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two strings `s` and `t` of lengths `m` and `n` respectively, return *the minimum window substring of* `s` *such that every character in* `t` *(including duplicates) is included in the window. If there is no such substring, return the empty string* `""`.

### The testcases will be generated such that the answer is `unique`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "ADOBECODEBANC", t = "ABC"

  ### 📤 `Output`  ➤ "BANC"

  ### 🔦 `Explanation`  ➤ The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "a", t = "a"

  ### 📤 `Output`  ➤ "a"

  ### 🔦 `Explanation` ➤ The entire string s is the minimum window.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "a", t = "aa"

  ### 📤 `Output`  ➤ ""

  ### 🔦 `Explanation`  ➤ Both 'a's from t must be included in the window.</br>Since the largest window of s only has one 'a', return empty string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == s.length`** </br>

🔹 **`n == t.length`** </br>

🔹 **`1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **`s` and `t` consist of uppercase and lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Sliding%20Window/Day%20%E2%9E%BA%2019%20%F0%9F%A5%A1%2076.%20Minimum%20Window%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2076.%20Minimum%20Window%20Substring.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Sliding%20Window/Day%20%E2%9E%BA%2019%20%F0%9F%A5%A1%2076.%20Minimum%20Window%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2076.%20Minimum%20Window%20Substring.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Sliding%20Window/Day%20%E2%9E%BA%2019%20%F0%9F%A5%A1%2076.%20Minimum%20Window%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2076.%20Minimum%20Window%20Substring.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Sliding%20Window/Day%20%E2%9E%BA%2019%20%F0%9F%A5%A1%2076.%20Minimum%20Window%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2076.%20Minimum%20Window%20Substring.js) |
