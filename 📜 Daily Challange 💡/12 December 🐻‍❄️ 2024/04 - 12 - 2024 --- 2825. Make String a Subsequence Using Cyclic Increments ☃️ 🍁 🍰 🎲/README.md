# 2825. Make String a Subsequence Using Cyclic Increments

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/?envType=daily-question&envId=2024-12-04"><strong>➥ ☢️ 2825 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed strings `str1` and `str2`.

### In an operation, you select a set of indices in `str1`, and for each index i in the set, increment `str1[i]` to the next character cyclically. That is `'a'` becomes `'b'`, `'b'` becomes `'c'`, and so on, and `'z'` becomes `'a'`.

### Return `true if it is possible to make str2 a subsequence of `str1` by performing the operation at most once, and `false` otherwise`.

### `Note`: A subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the characters without disturbing the relative positions of the remaining characters.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ str1 = "abc", str2 = "ad" 

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤  Select index 2 in str1.</br> Increment str1[2] to become 'd'. </br> Hence, str1 becomes "abd" and str2 is now a subsequence. Therefore, true is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ str1 = "zc", str2 = "ad"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ Select indices 0 and 1 in str1. </br> Increment str1[0] to become 'a'. </br> Increment str1[1] to become 'd'. </br> Hence, str1 becomes "ad" and str2 is now a subsequence. Therefore, true is returned.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ str1 = "ab", str2 = "d"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ In this example, it can be shown that it is impossible to make str2 a subsequence of str1 using the operation at most once. </br> Therefore, false is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= str1.length <= 10<sup>5</sup>** </br>

🔹 **1 <= str2.length <= 10<sup>5</sup>** </br>

🔹 **`str1` and `str2` consist of only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/04%20-%2012%20-%202024%20---%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/04%20-%2012%20-%202024%20---%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/04%20-%2012%20-%202024%20---%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/04%20-%2012%20-%202024%20---%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202825.%20Make%20String%20a%20Subsequence%20Using%20Cyclic%20Increments.js) |

