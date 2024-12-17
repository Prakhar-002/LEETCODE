# 2182. Construct String With Repeat Limit

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-string-with-repeat-limit/?envType=daily-question&envId=2024-12-17"><strong>➥ ☢️ 2182 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string s and an integer repeatLimit. Construct a new string repeatLimitedString using the characters of s such that no letter appears more than repeatLimit times in a row. You do not have to use all characters from s.

### Return *the lexicographically largest repeatLimitedString possible*.

### A string `a` is lexicographically larger than a string `b` if in the first position where `a` and `b` differ, string `a` has a letter that appears later in the alphabet than the corresponding letter in `b`. If the first `min(a.length, b.length)` characters do not differ, then the longer string is the lexicographically larger one.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  s = "cczazcc", repeatLimit = 3

  ### 📤 `Output`  ➤ "zzcccac"

  ### 🔦 `Explanation`  ➤ We use all of the characters from s to construct the repeatLimitedString "zzcccac".

➺ The letter 'a' appears at most 1 time in a row.

➺ The letter 'c' appears at most 3 times in a row.

➺ The letter 'z' appears at most 2 times in a row.

➺ Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.

➺ The string is the lexicographically largest repeatLimitedString possible so we return "zzcccac".

➺ Note that the string "zzcccca" is lexicographically larger but the letter 'c' appears more than 3 times in a row, so it is not a valid repeatLimitedString.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "aababab", repeatLimit = 2

  ### 📤 `Output`  ➤ "bbabaa"

  ### 🔦 `Explanation` ➤ We use only some of the characters from s to construct the repeatLimitedString "bbabaa". 

➺ The letter 'a' appears at most 2 times in a row.

➺ The letter 'b' appears at most 2 times in a row.

➺ Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.

➺ The string is the lexicographically largest repeatLimitedString possible so we return "bbabaa".

➺ Note that the string "bbabaaa" is lexicographically larger but the letter 'a' appears more than 2 times in a row, so it is not a valid repeatLimitedString.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= repeatLimit <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/17%20-%2012%20-%202024%20---%202182.%20Construct%20String%20With%20Repeat%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202182.%20Construct%20String%20With%20Repeat%20Limit.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/17%20-%2012%20-%202024%20---%202182.%20Construct%20String%20With%20Repeat%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202182.%20Construct%20String%20With%20Repeat%20Limit.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/17%20-%2012%20-%202024%20---%202182.%20Construct%20String%20With%20Repeat%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202182.%20Construct%20String%20With%20Repeat%20Limit.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/17%20-%2012%20-%202024%20---%202182.%20Construct%20String%20With%20Repeat%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202182.%20Construct%20String%20With%20Repeat%20Limit.js) |
