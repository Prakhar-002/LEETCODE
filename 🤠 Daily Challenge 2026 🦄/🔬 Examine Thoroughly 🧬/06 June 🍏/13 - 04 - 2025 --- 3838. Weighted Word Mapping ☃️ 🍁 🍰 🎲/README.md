# 3838. Weighted Word Mapping

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/weighted-word-mapping/description/?envType=daily-question&envId=2026-06-13"><strong>➥ ♻️ 3838 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an array of strings `words`, where each string represents a word containing lowercase English letters.
### You are also given an integer array `weights` of length `26`, where `weights[i]` represents the **weight** of the `ith` lowercase English letter.
### The **weight of a word** is defined as the **sum of the weights** of its characters.
### For each word, take its weight **modulo 26** and map the result to a lowercase English letter using **reverse alphabetical order** (`0 -> 'z'`, `1 -> 'y'`, ..., `25 -> 'a'`).
### Return a string formed by **concatenating** the mapped characters for all words **in order**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ words = ["abcd","def","xyz"], weights = [5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2]
  ### 📤 `Output`  ➤ "rij"
  ### 🔦 `Explanation`  ➤ `"abcd"` → weight `34`, `34 % 26 = 8` → `'r'`. `"def"` → weight `17`, `17 % 26 = 17` → `'i'`. `"xyz"` → weight `16`, `16 % 26 = 16` → `'j'`. Result = `"rij"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ words = ["a","b","c"], weights = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
  ### 📤 `Output`  ➤ "yyy"
  ### 🔦 `Explanation` ➤ Each word has weight `1`. `1 % 26 = 1` → maps to `'y'`. Result = `"yyy"`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ words = ["abcd"], weights = [7,5,3,4,3,5,4,9,4,2,2,7,10,2,5,10,6,1,2,2,4,1,3,4,4,5]
  ### 📤 `Output`  ➤ "g"
  ### 🔦 `Explanation` ➤ `"abcd"` → weight `7+5+3+4 = 19`, `19 % 26 = 19` → maps to `'g'`. Result = `"g"`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= words.length <= 100` </br>
🔹 `1 <= words[i].length <= 10` </br>
🔹 `weights.length == 26` </br>
🔹 `1 <= weights[i] <= 100` </br>
🔹 `words[i]` consists of **lowercase English letters**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **String** </br>
🔸 **Simulation** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
