# 3121. Count the Number of Special Characters II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-special-characters-ii/description/?envType=daily-question&envId=2026-05-27"><strong>➥ ☢️ 3121 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a string `word`. A letter `c` is called **special** if it appears both in **lowercase** and **uppercase** in `word`, and **every lowercase occurrence** of `c` appears **before** the first uppercase occurrence of `c`.
### Return the **number of special letters** in `word`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ word = "aaAbcBC"
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ The special characters are `'a'`, `'b'`, and `'c'` — each has all lowercase occurrences appearing before their first uppercase occurrence.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "abc"
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ There are **no special characters** in `word` since no letter appears in both cases.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ word = "AbBCab"
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ There are **no special characters** in `word`. For `'b'`, uppercase `'B'` appears at index `2` but lowercase `'b'` appears at index `4` — **after** the uppercase, violating the condition.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= word.length <= 2 * 10^5` </br>
🔹 `word` consists of only **lowercase** and **uppercase** English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
