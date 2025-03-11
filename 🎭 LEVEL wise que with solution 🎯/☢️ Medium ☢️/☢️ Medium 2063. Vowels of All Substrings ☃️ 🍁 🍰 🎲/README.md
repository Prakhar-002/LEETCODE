# 2063. Vowels of All Substrings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/vowels-of-all-substrings/description/"><strong>➥ ☢️ 2063 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a **string** `word` consisting **only** of lowercase English letters.  

- A **vowel** is any of the characters **'a', 'e', 'i', 'o', 'u'**.
- A **substring** is a contiguous sequence of characters within a string.

### **Return** the sum of the number of vowels in **every substring** of `word`.

🔸 **Note:** Since constraints are large, be mindful of integer overflows.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"aba"`

  ### 📤 `Output` ➤ 6

  ### 🔦 `Explanation` ➤ 
- **All possible substrings**: `"a"`, `"ab"`, `"aba"`, `"b"`, `"ba"`, `"a"`
  - `"b"` has **0 vowels**
  - `"a"`, `"ab"`, `"ba"`, `"a"` have **1 vowel** each
  - `"aba"` has **2 vowels**
- **Total sum** = `0 + 1 + 1 + 1 + 1 + 2 = 6`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"abc"`

  ### 📤 `Output` ➤ 3

  ### 🔦 `Explanation` ➤ 
- **All possible substrings**: `"a"`, `"ab"`, `"abc"`, `"b"`, `"bc"`, `"c"`
  - `"a"`, `"ab"`, `"abc"` have **1 vowel** each
  - `"b"`, `"bc"`, `"c"` have **0 vowels**
- **Total sum** = `1 + 1 + 1 + 0 + 0 + 0 = 3`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"ltcd"`

  ### 📤 `Output` ➤ 0

  ### 🔦 `Explanation` ➤ 
- No vowels in any substring.
- **Total sum** = `0`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= word.length <= 100,000` </br>
🔹 `word` consists **only** of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Combinatorics**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202063.%20Vowels%20of%20All%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202063.%20Vowels%20of%20All%20Substrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202063.%20Vowels%20of%20All%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202063.%20Vowels%20of%20All%20Substrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202063.%20Vowels%20of%20All%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202063.%20Vowels%20of%20All%20Substrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202063.%20Vowels%20of%20All%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202063.%20Vowels%20of%20All%20Substrings.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
