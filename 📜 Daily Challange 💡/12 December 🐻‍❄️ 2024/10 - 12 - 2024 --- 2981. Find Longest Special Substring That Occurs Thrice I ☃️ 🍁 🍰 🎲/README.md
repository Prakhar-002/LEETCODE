# 2981. Find Longest Special Substring That Occurs Thrice I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/description/?envType=daily-question&envId=2024-12-10"><strong>➥ ☢️ 2981 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` that consists of lowercase English letters.

### A string is called `special` if it is made up of only a single character. For example, the string `"abc"` is not special, whereas the strings `"ddd"`, `"zz"`, and `"f"` are special.

### Return *the length of the *longest special substring* of `s` which occurs at least thrice, or `-1` if no special substring occurs at least thrice*.

### A `substring` is a contiguous `non-empty` sequence of characters within a string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "aaaa"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ ➺The longest special substring which occurs thrice is "aa": substrings "aaaa", "aaaa", and "aaaa".</br> It can be shown that the maximum length achievable is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "abcdef"

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ There exists no special substring which occurs at least thrice. Hence return -1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "abcaba"

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The longest special substring which occurs thrice is "a": substrings "<ins>a</ins>bcaba", "abc<ins>a</ins>ba", and "abcab<ins>a</ins>".</br> It can be shown that the maximum length achievable is 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= s.length <= 50`** </br>

🔹 **`s` consists of only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Binary Search**  </br>
🔸 **Sliding Window**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/10%20-%2012%20-%202024%20---%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/10%20-%2012%20-%202024%20---%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/10%20-%2012%20-%202024%20---%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/10%20-%2012%20-%202024%20---%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202981.%20Find%20Longest%20Special%20Substring%20That%20Occurs%20Thrice%20I.js) |
