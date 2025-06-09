# 1061. Lexicographically Smallest Equivalent String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lexicographically-smallest-equivalent-string/description/?envType=daily-question&envId=2025-06-05"><strong>➥ ☢️ 1061 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings, `s1` and `s2`, of the same length, along with a string `baseStr`.

### The strings `s1` and `s2` contain information about character equivalencies: we say `s1[i]` and `s2[i]` are *equivalent* characters.

### For example, if `s1 = "abc"` and `s2 = "cde"`, then we know the following equivalencies: 'a' == 'c', 'b' == 'd', and 'c' == 'e'.

### Character equivalencies follow standard equivalence relation rules:

- **Reflexivity:** 'a' == 'a'.
- **Symmetry:** If 'a' == 'b', then 'b' == 'a'.
- **Transitivity:** If 'a' == 'b' and 'b' == 'c', then 'a' == 'c'.

### Given this equivalency information derived from `s1` and `s2`, the goal is to determine the lexicographically smallest equivalent string of `baseStr`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s1 = "parker", s2 = "morris", baseStr = "parser"

  ### 📤 `Output`  ➤ "makkek"

  ### 🔦 `Explanation`  ➤ Based on the equivalency information in s1 and s2, we can group their characters as [m,p], [a,o], [k,r,s], [e,i].
The characters in each group are equivalent and sorted in lexicographical order.
So the answer is "makkek".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "hello", s2 = "world", baseStr = "hold"

  ### 📤 `Output`  ➤ "hdld"

  ### 🔦 `Explanation` ➤ Based on the equivalency information in s1 and s2, we can group their characters as [h,w], [d,e,o], [l,r].
So only the second letter 'o' in baseStr is changed to 'd', the answer is "hdld".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "leetcode", s2 = "programs", baseStr = "sourcecode"

  ### 📤 `Output`  ➤ "aauaaaaada"

  ### 🔦 `Explanation` ➤ We group the equivalent characters in s1 and s2 as [a,o,e,r,s,c], [l,p], [g,t] and [d,m], thus all letters in baseStr except 'u' and 'd' are transformed to 'a', the answer is "aauaaaaada".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s1.length, s2.length, baseStr <= 1000 </br>

🔹 s1.length == s2.length </br>

🔹 s1, s2, and baseStr consist of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

🔸 **Union Find**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/05%20-%2006%20-%202025%20---%201061.%20Lexicographically%20Smallest%20Equivalent%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201061.%20Lexicographically%20Smallest%20Equivalent%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/05%20-%2006%20-%202025%20---%201061.%20Lexicographically%20Smallest%20Equivalent%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201061.%20Lexicographically%20Smallest%20Equivalent%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/05%20-%2006%20-%202025%20---%201061.%20Lexicographically%20Smallest%20Equivalent%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201061.%20Lexicographically%20Smallest%20Equivalent%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/05%20-%2006%20-%202025%20---%201061.%20Lexicographically%20Smallest%20Equivalent%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201061.%20Lexicographically%20Smallest%20Equivalent%20Stri.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ee3cb91b-2a84-4c1d-9ba4-0749f0644aca" width = "700px" height="462px" />

</h1>
