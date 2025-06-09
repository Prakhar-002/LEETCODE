# 2434. Using a Robot to Print the Lexicographically Smallest String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/?envType=daily-question&envId=2025-06-06"><strong>➥ ☢️ 2434 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s`, and a robot that begins with an empty string, `t`. The robot can perform two operations:

1. **Append:** Remove the *first* character of `s` and add it to the *end* of `t`.
2. **Write:** Remove the *last* character of `t` and write it on a piece of paper.

### The goal is to determine the lexicographically smallest string that can be written on the paper after performing some sequence of these operations until both `s` and `t` are empty.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "zza"

  ### 📤 `Output`  ➤ "azz"

  ### 🔦 `Explanation`  ➤ Let p denote the written string.
Initially p="", s="zza", t="".
Perform first operation three times p="", s="", t="zza".
Perform second operation three times p="azz", s="", t="".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "bac"

  ### 📤 `Output`  ➤ "abc"

  ### 🔦 `Explanation` ➤ Let p denote the written string.
Perform first operation twice p="", s="c", t="ba".
Perform second operation twice p="ab", s="c", t="".
Perform first operation p="ab", s="", t="c".
Perform second operation p="abc", s="", t="".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "bdda"

  ### 📤 `Output`  ➤ "addb"

  ### 🔦 `Explanation` ➤ Let p denote the written string.
Initially p="", s="bdda", t="".
Perform first operation four times p="", s="", t="bdda".
Perform second operation four times p="addb", s="", t="".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 10<sup>5</sup> </br>

🔹 s consists of only English lowercase letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Stack**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/06%20-%2006%20-%202025%20---%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lexicographically%20Smallest%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lex.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/06%20-%2006%20-%202025%20---%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lexicographically%20Smallest%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lexic.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/06%20-%2006%20-%202025%20---%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lexicographically%20Smallest%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lex.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/06%20-%2006%20-%202025%20---%202434.%20Using%20a%20Robot%20to%20Print%20the%20Lexicographically%20Smallest%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202434.%20Using%20a%20Robot%20to%20Print%20the.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/2dac36a3-cf16-4a36-8bcf-7c605b7c32c8" width = "700px" height="462px" />

</h1>
