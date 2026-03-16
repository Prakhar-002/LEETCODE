#

</br>

<h2 align="center">

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>

</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a string `s` and an integer `k`, a **k duplicate removal** consists of choosing `k` **adjacent and equal** letters from `s` and removing them, causing the left and the right side of the deleted substring to concatenate together.
### We repeatedly make **k duplicate removals** on `s` until we no longer can.
### Return the **final string** after all such duplicate removals have been made. It is guaranteed that the answer is **unique**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ s = "abcd", k = 2
  ### 📤 `Output`  ➤ "abcd"
  ### 🔦 `Explanation`  ➤ There's nothing to delete.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "deeedbbcccbdaa", k = 3
  ### 📤 `Output`  ➤ "aa"
  ### 🔦 `Explanation` ➤ First delete "eee" and "ccc", get "ddbbbdaa" → Then delete "bbb", get "dddaa" → Finally delete "ddd", get "aa"

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s = "pbbcggttciiippooaais", k = 2
  ### 📤 `Output`  ➤ "ps"
  ### 🔦 `Explanation` ➤ Repeatedly removing all k=2 adjacent duplicate pairs eventually reduces the entire string down to "ps".

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= s.length <= 10^5` </br>
🔹 `2 <= k <= 10^4` </br>
🔹 `s` only contains lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>
🔸 **Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•\*⁀➷

<h1  align="center" >

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
