# 2014. Longest Subsequence Repeated k Times

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-subsequence-repeated-k-times/description/?envType=daily-question&envId=2025-06-27"><strong>➥ 🫀 2014 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` of length `n` and an integer `k`. The problem asks you to find the longest subsequence that is repeated `k` times in the string `s`.

A *subsequence* is a string that can be derived from another string by deleting some or no characters, without changing the order of the remaining characters.

We say that a subsequence `seq` is *repeated k times* in the string `s` if `seq * k` (the string formed by concatenating `seq` `k` times) is a subsequence of `s`.

Your function must return the longest subsequence that can be repeated `k` times in string `s`. If multiple subsequences satisfy these conditions and have the same longest length, your function should return the lexicographically *largest* among them. If there is no such subsequence possible, return an empty string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/ceb71a30-31ed-4b74-8fab-0dfc3eaf4401" width="" height=""/>

  ### 📥 `Input`  ➤ s = "letsleetcode", k = 2

  ### 📤 `Output`  ➤ "let"

  ### 🔦 `Explanation`  ➤ There are two longest subsequences repeated 2 times: "let" and "ete".
"let" is the lexicographically largest one.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "bb", k = 2

  ### 📤 `Output`  ➤ "b"

  ### 🔦 `Explanation` ➤ The longest subsequence repeated 2 times is "b".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "ab", k = 2

  ### 📤 `Output`  ➤ ""

  ### 🔦 `Explanation` ➤ There is no subsequence repeated 2 times. Empty string is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == s.length </br>

🔹 2 <= n, k <= 2000 </br>

🔹 2 <= n < k * 8 </br>

🔹 s consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

🔸 **Backtracking**  </br>

🔸 **Greedy**  </br>

🔸 **Counting**  </br>

🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
