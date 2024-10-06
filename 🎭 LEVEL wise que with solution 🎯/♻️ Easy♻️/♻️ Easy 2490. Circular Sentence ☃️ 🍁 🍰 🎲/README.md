# 2490. Circular Sentence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/circular-sentence/description/"><strong>➥ ♻️ 2490 Leetcode Easy ♻️  </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `sentence` is a list of words that are separated by a `single` space with no leading or trailing spaces.

- For example, `"Hello World"`, `"HELLO"`, `"hello world hello world"` are all sentences.

### Words consist of `only` uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

A sentence is `circular` if:

- The last character of a word is equal to the first character of the next word.

- The last character of the last word is equal to the first character of the first word.

For example, `"leetcode exercises sound delightful"`, `"eetcode"`, `"leetcode eats soul"` are all circular sentences. However, `"Leetcode is cool"`, `"happy Leetcode"`, `"Leetcode"` and `"I like Leetcode"` are not circular sentences.

### Given a string `sentence`, return *`true` if it is circular*. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ sentence = "leetcode exercises sound delightful"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ ➺

    The words in sentence are ["leetcode", "exercises", "sound", "delightful"].
    ➺ leetcode's last character is equal to exercises's first character.
    ➺ exercises's last character is equal to sound's first character.
    ➺ sound's last character is equal to delightful's first character.
    ➺ delightful's last character is equal to leetcode's first character.

    The sentence is circular.


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ sentence = "eetcode"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ 

    The words in sentence are ["eetcode"].
    ➺ eetcode's last character is equal to eetcode's first character.

    The sentence is circular.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ sentence = "Leetcode is cool"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ 

    The words in sentence are ["Leetcode", "is", "cool"].
    ➺ Leetcode's last character is not equal to is's first character.

    The sentence is not circular.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= sentence.length <= 500`** </br>

🔹 **`sentence` consist of only lowercase and uppercase English letters and spaces.** </br>

🔹 **The words in `sentence` are separated by a single space** </br>

🔹 **There are no leading or trailing spaces.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202490.%20Circular%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202490.%20Circular%20Sentence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202490.%20Circular%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202490.%20Circular%20Sentence.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202490.%20Circular%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202490.%20Circular%20Sentence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202490.%20Circular%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202490.%20Circular%20Sentence.js) |

