# 1930. Unique Length-3 Palindromic Subsequences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/unique-length-3-palindromic-subsequences/submissions/1497673898/?envType=daily-question&envId=2025-11-21"><strong>➥ ☢️ 1930 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s`, return *the number of `unique palindromes of length three` that are a subsequence of `s`*.

### Note that even if there are multiple ways to obtain the same subsequence, it is still only counted `once`.

### A `palindrome` is a string that reads the same forwards and backwards.

### A `subsequence` of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

### For example, `"ace"` is a subsequence of "<ins>a</ins>b<ins>c</ins>d<ins>e</ins>".

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "aabca"

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The 3 palindromic subsequences of length 3 are:

#### "aba" (subsequence of "<ins>a</ins>a<ins>b</ins>c<ins></ins>")

#### "aaa" (subsequence of "<ins>aa</ins>bc<ins>a</ins>")

#### "aca" (subsequence of "<ins>a</ins>ab<ins>ca</ins>")

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "adc"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ There are no palindromic subsequences of length 3 in "adc".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "bbcbaba"

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The 4 palindromic subsequences of length 3 are:

####  "bbb" (subsequence of "<ins>bb</ins>c<ins>b</ins>aba")

####  "bcb" (subsequence of "<ins>b</ins>b<ins>cb</ins>aba")

####  "bab" (subsequence of "<ins>b</ins>bcb<ins>ba</ins>a")

####  "aba" (subsequence of "bbcb<ins>aba</ins>")

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **3 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists of only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/04%20-%2001%20-%202025%20---%20%201930.%20Unique%20Length-3%20Palindromic%20Subsequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201930.%20Unique%20Length-3%20Palindromic%20Subsequences.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/04%20-%2001%20-%202025%20---%20%201930.%20Unique%20Length-3%20Palindromic%20Subsequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201930.%20Unique%20Length-3%20Palindromic%20Subsequences.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/04%20-%2001%20-%202025%20---%20%201930.%20Unique%20Length-3%20Palindromic%20Subsequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201930.%20Unique%20Length-3%20Palindromic%20Subsequences.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/04%20-%2001%20-%202025%20---%20%201930.%20Unique%20Length-3%20Palindromic%20Subsequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201930.%20Unique%20Length-3%20Palindromic%20Subsequences.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/36ac1c92-0ed3-4185-8ade-1a0178a14222" width = "700px" height="462px" />

</h1>
