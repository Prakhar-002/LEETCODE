# 1930. Unique Length-3 Palindromic Subsequences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/?envType=daily-question&envId=2025-01-04"><strong>➥ ☢️ 1930 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s`, return *the number of `unique palindromes of length three` that are a subsequence of `s`*.

### Note that even if there are multiple ways to obtain the same subsequence, it is still only counted `once`.

### A `palindrome` is a string that reads the same forwards and backwards.

### A `subsequence` of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

### For example, `"ace"` is a subsequence of `"abcde"`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "aabca"

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The 3 palindromic subsequences of length 3 are:

- "aba" (subsequence of "<ins>a</ins>a<ins>b</ins>c<ins></ins>")
- "aaa" (subsequence of "<ins>aa</ins>bc<ins>a</ins>")
- "aca" (subsequence of "<ins>a</ins>ab<ins>ca</ins>")

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

- "bbb" (subsequence of "<ins>bb</ins>c<ins>b</ins>aba")
- "bcb" (subsequence of "<ins>b</ins>b<ins>cb</ins>aba")
- "bab" (subsequence of "<ins>b</ins>bcb<ins>ba</ins>a")
- "aba" (subsequence of "bbcb<ins>aba</ins>")

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
