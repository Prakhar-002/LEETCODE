# 2840. Check if Strings Can be Made Equal With Operations II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/description/?envType=daily-question&envId=2026-03-30"><strong>➥ ☢️ 2840 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given two strings `s1` and `s2`, both of length `n`, consisting of lowercase English letters.
### You can apply the following operation on **any** of the two strings **any number of times**:
### &nbsp;&nbsp;&nbsp;&nbsp;• Choose any two indices `i` and `j` such that `i < j` and the difference `j - i` is **even**, then **swap** the two characters at those indices in the string.
### Return `true` if you can make the strings `s1` and `s2` **equal**, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ s1 = "abcdba", s2 = "cabdab"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ Operations on s1: Swap `i=0, j=2` → "cbadba". Swap `i=2, j=4` → "cbbdaa". Swap `i=1, j=5` → "cabdab" = s2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s1 = "abe", s2 = "bea"
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ It is **not possible** to make the two strings equal using any number of valid swap operations.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ s1 = "aabb", s2 = "bbaa"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Even-indexed characters of s1 are `{a, b}` and of s2 are `{b, a}` — same multiset. Odd-indexed characters of s1 are `{a, b}` and of s2 are `{b, a}` — same multiset. So s1 can be rearranged to match s2.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `n == s1.length == s2.length` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `s1` and `s2` consist only of **lowercase English letters**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202840.%20Check%20if%20Strings%20Can%20be%20Made%20Equal%20With%20Operations%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b9f2db27-3da1-45e1-8386-350bb2b306bc" width = "700px" height="462px" />

</h1>
