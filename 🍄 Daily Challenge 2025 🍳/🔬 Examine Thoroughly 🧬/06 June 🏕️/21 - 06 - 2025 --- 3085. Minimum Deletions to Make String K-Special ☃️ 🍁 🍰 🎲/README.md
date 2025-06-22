# 3085. Minimum Deletions to Make String K-Special

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-deletions-to-make-string-k-special/description/?envType=daily-question&envId=2025-06-21"><strong>➥ ☢️ 3085 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `word` and an integer `k`.

### The string `word` is considered to be *k-special* if the absolute difference between the frequency of any two characters in the string is less than or equal to `k`. In other words, `|freq(word[i]) - freq(word[j])| <= k` for all indices `i` and `j` in the string.

### Here, `freq(x)` denotes the frequency of the character `x` in `word`, and `|y|` denotes the absolute value of `y`.

### Your task is to return the minimum number of characters that you need to delete from `word` to make it *k-special*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "aabcaba", k = 0

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
We can make word 0-special by deleting 2 occurrences of "a" and 1 occurrence of "c". Therefore, word becomes equal to "baba" where freq('a') == freq('b') == 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "dabdcbdcdcd", k = 2

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤
We can make word 2-special by deleting 1 occurrence of "a" and 1 occurrence of "d". Therefore, word becomes equal to "bdcbdcdcd" where freq('b') == 2, freq('c') == 3, and freq('d') == 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "aaabaaa", k = 2

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤
We can make word 2-special by deleting 1 occurrence of "b". Therefore, word becomes equal to "aaaaaa" where each letter's frequency is now uniformly 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length <= 10<sup>5</sup> </br>

🔹 0 <= k <= 10<sup>5</sup> </br>

🔹 word consists only of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>

🔸 **String** </br>

🔸 **Greedy** </br>

🔸 **Sorting** </br>

🔸 **Counting** </br>

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
