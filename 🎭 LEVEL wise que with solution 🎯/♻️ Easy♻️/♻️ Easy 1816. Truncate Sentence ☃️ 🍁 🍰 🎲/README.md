# 1816. Truncate Sentence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/truncate-sentence/description/"><strong>➥ ♻️ 1816 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `sentence` is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of `only` uppercase and lowercase English letters (no punctuation).

- For example, `"Hello World"`, `"HELLO"`, and `"hello world hello world"` are all sentences.

### You are given a sentence `s​​​​​​` and an integer `k​​​​​​`. You want to `truncate` `s​​​​​​` such that it contains only the `first` `k​​​​​​` words. Return *`s​​​​​​` after `truncating` it*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "Hello how are you Contestant", k = 4

  ### 📤 `Output`  ➤ "Hello how are you"

  ### 🔦 `Explanation`  ➤ 

    The words in s are ["Hello", "how" "are", "you", "Contestant"].
    The first 4 words are ["Hello", "how", "are", "you"].
    Hence, you should return "Hello how are you".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "What is the solution to this problem", k = 4 

  ### 📤 `Output`  ➤ "What is the solution" 

  ### 🔦 `Explanation` ➤ 

    The words in s are ["What", "is" "the", "solution", "to", "this", "problem"].
    The first 4 words are ["What", "is", "the", "solution"].
    Hence, you should return "What is the solution".


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "chopper is not a tanuki", k = 5

  ### 📤 `Output`  ➤ "chopper is not a tanuki"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 500`** </br>

🔹 **`k` is in the range `[1, the number of words in s]`.** </br>

🔹 **`s` consist of only lowercase and uppercase English letters and spaces.** </br>

🔹 **The words in `s` are separated by a single space.** </br>

🔹 **There are no leading or trailing spaces.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201816.%20Truncate%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201816.%20Truncate%20Sentence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201816.%20Truncate%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201816.%20Truncate%20Sentence.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201816.%20Truncate%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201816.%20Truncate%20Sentence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201816.%20Truncate%20Sentence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201816.%20Truncate%20Sentence.js) |

