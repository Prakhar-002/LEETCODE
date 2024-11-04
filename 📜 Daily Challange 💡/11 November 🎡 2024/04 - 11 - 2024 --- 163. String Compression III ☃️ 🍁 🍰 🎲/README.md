# 163. String Compression III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/string-compression-iii/description/?envType=daily-question&envId=2024-11-04"><strong>➥ ☢️ 163 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string word, compress it using the following algorithm:

- Begin with an empty string `comp`. While `word` is not empty, use the following operation:
  - Remove a maximum length prefix of `word` made of a *single character c repeating at most 9 times*.

  - Append the length of the prefix followed by `c` to `comp`.

### Return *the string `comp`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "abcde"

  ### 📤 `Output`  ➤  "1a1b1c1d1e"

  ### 🔦 `Explanation`  ➤ Initially, `comp = ""`. Apply the operation `5` times, choosing `"a"`, `"b"`, `"c"`, `"d"`, and `"e"` as the prefix in each operation.</br> For each prefix, append `"1"` followed by the character to comp.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "aaaaaaaaaaaaaabb"

  ### 📤 `Output`  ➤  "9a5a2b"

  ### 🔦 `Explanation` ➤ 

Initially, `comp = ""`. Apply the operation 3 times, choosing "aaaaaaaaa", "aaaaa", and "bb" as the prefix in each operation.

- ⭐ For prefix `"aaaaaaaaa"`, append `"9"` followed by `"a"` to comp.
- ⭐ For prefix `"aaaaa"`, append `"5"` followed by `"a"` to comp.
- ⭐ For prefix `"bb"`, append `"2"` followed by `"b"` to comp.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= word.length <= 2 * 10<sup>5</sup>** </br>

🔹 **`word` consists only of lowercase English letters** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |


