# 1593. Split a String Into the Max Number of Unique Substrings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/split-a-string-into-the-max-number-of-unique-substrings/description/?envType=daily-question&envId=2024-10-21"><strong>➥ ☢️ 1593 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s`, return *the maximum number of unique substrings that the given string can be split into*.

### You can split string `s` into any list of `non-empty substrings`, where the concatenation of the substrings forms the original string. However, you must split the substrings such that all of them are `unique`.

### A substring is a contiguous sequence of characters within a string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "ababccc"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ One way to split maximally is ['a', 'b', 'ab', 'c', 'cc']. Splitting like ['a', 'b', 'a', 'b', 'c', 'cc'] is not valid as you have 'a' and 'b' multiple times.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "aba"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ One way to split maximally is ['a', 'ba'].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "aa"

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ It is impossible to split the string any further.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 16`** </br>

🔹 **`s` contains only lower case English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/21%20-%2010%20-%202024%20---%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/21%20-%2010%20-%202024%20---%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/21%20-%2010%20-%202024%20---%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/21%20-%2010%20-%202024%20---%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201593.%20Split%20a%20String%20Into%20the%20Max%20Number%20of%20Unique%20Substring.js) |



