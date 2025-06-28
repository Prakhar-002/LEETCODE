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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/28%20-%2006%20-%202025%20---%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Largest%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Lar.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/28%20-%2006%20-%202025%20---%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Largest%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Large.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/28%20-%2006%20-%202025%20---%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Largest%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Lar.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/28%20-%2006%20-%202025%20---%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the%20Largest%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202099.%20Find%20Subsequence%20of%20Length%20K%20With%20the.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/01e7551e-b9de-4f96-8d93-4ae8ba429712" width = "700px" height="462px" />

</h1>
