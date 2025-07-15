# 3136. Valid Word

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/valid-word/description/?envType=daily-question&envId=2025-07-15"><strong>➥ ♻️ 3136 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A word is defined as "valid" if it meets all of the following criteria:

1. It must have a minimum length of 3 characters.
2. It can only contain digits (0-9) and English letters (both uppercase and lowercase). No other characters are allowed.
3. It must include at least one vowel ('a', 'e', 'i', 'o', 'u', and their uppercase equivalents).
4. It must include at least one consonant (an English letter that is *not* a vowel).

You are given a string `word`. Your task is to return `true` if the `word` is considered valid, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "234Adas"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ This word satisfies the conditions.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "b3"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ The length of this word is fewer than 3, and does not have a vowel.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "a3$e"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ This word contains a '$' character and does not have a consonant.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length <= 20 </br>

🔹 word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/15%20-%2007%20-%202025%20---%203136.%20Valid%20Word%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203136.%20Valid%20Word.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/15%20-%2007%20-%202025%20---%203136.%20Valid%20Word%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203136.%20Valid%20Word.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/15%20-%2007%20-%202025%20---%203136.%20Valid%20Word%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203136.%20Valid%20Word.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/15%20-%2007%20-%202025%20---%203136.%20Valid%20Word%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203136.%20Valid%20Word.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/2f95e2e4-f76a-4348-8def-d5b96fe8485d" width = "700px" height="462px" />

</h1>
