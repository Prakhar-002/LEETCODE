# 966. Vowel Spellchecker

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/vowel-spellchecker/description/?envType=daily-question&envId=2025-09-14"><strong>➥ ☢️ 966 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a wordlist, we want to implement a spellchecker that converts a query word into a correct word.

### For a given query word, the spell checker handles two categories of spelling mistakes:

- Capitalization: If the query matches a word in the wordlist (case-insensitive), then the query word is returned with the same case as the case in the wordlist.
  - Example: `wordlist = ["yellow"]`, `query = "YellOw"`: `correct = "yellow"`
  - Example: `wordlist = ["Yellow"]`, `query = "yellow"`: `correct = "Yellow"`
  - Example: `wordlist = ["yellow"]`, `query = "yellow"`: `correct = "yellow"`

- Vowel Errors: If after replacing the vowels ('a', 'e', 'i', 'o', 'u') of the query word with any vowel individually, it matches a word in the wordlist (case-insensitive), then the query word is returned with the same case as the match in the wordlist.
  - Example: `wordlist = ["YellOw"]`, `query = "yollow"`: `correct = "YellOw"`
  - Example: `wordlist = ["YellOw"]`, `query = "yeellow"`: `correct = "" (no match)`
  - Example: `wordlist = ["YellOw"]`, `query = "yllw"`: `correct = "" (no match)`

### In addition, the spell checker operates under the following precedence rules:

- When the query exactly matches a word in the wordlist (case-sensitive), you should return the same word back.

- When the query matches a word up to capitlization, you should return the first such match in the wordlist.

- When the query matches a word up to vowel errors, you should return the first such match in the wordlist.

### If the query has no matches in the wordlist, you should return the empty string.

### Given some queries, return a list of words answer, where answer[i] is the correct word for query = queries[i].

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `wordlist = ["KiTe","kite","hare","Hare"], queries = ["kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto"]`

  ### 📤 `Output`  ➤ ["kite","KiTe","KiTe","Hare","hare","","","KiTe","","KiTe"]

  ### 🔦 `Explanation`  ➤ ➺

  - It and and it also with this , will all for the string by string
    This is also test case with one for algorithm test well from it also . All by are to test with all . From string with case sensative to get output what it will do in system run . To match

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `wordlist = ["yellow"], queries = ["YellOw"]`

  ### 📤 `Output`  ➤ ["yellow"]

  ### 🔦 `Explanation` for string and test only just and see correct match and string value with low test case then that string only, not large to the volume for the check result is simple that can get string match.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= wordlist.length, queries.length <= 5000` </br>

🔹 `1 <= wordlist[i].length, queries[i].length <= 7` </br>

🔹 `wordlist[i]` and `queries[i]` consist only of only English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
