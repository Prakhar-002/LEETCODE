# 2839. Check if Strings Can be Made Equal With Operations I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/description/?envType=daily-question&envId=2026-03-29"><strong>➥ ☢️ 2839 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given two strings `s1` and `s2`, both of length `4`, consisting of lowercase English letters.
### You can apply the following operation on **any** of the two strings **any number of times**:
### &nbsp;&nbsp;&nbsp;&nbsp;• Choose any two indices `i` and `j` such that `j - i = 2`, then **swap** the two characters at those indices in the string.
### Return `true` if you can make the strings `s1` and `s2` **equal**, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ s1 = "abcd", s2 = "cdab"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ We can do the following operations on s1: Choose indices `i = 0, j = 2` → s1 = "cbad". Choose indices `i = 1, j = 3` → s1 = "cdab" = s2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s1 = "abcd", s2 = "dacb"
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ It is **not possible** to make the two strings equal using any number of valid swap operations.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s1 = "abab", s2 = "baba"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Swapping index `0` and `2` in s1 gives "baba" = s2. Even-indexed positions `{a, a}` and odd-indexed positions `{b, b}` match between the two strings.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `s1.length == s2.length == 4` </br>
🔹 `s1` and `s2` consist only of **lowercase English letters**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202839.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20I.js) |

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### 🍫 [2840. Check if Strings Can be Made Equal With Operations II](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2) </br>

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5c1f1536-9e94-43bc-839b-476ae7bb99a3" width = "700px" height="462px" />

</h1>
