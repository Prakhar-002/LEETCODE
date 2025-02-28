# 1092. Shortest Common Supersequence 

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-common-supersequence/description/?envType=daily-question&envId=2025-02-28"><strong>➥ ☢️ 1092 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two strings `str1` and `str2`, return *the shortest string that has both* `str1` and `str2` *as subsequences*. If there are multiple valid strings, return `any` of them.

### A string `s` is a subsequence of string `t` if deleting some number of characters from `t` (possibly `0`) results in the string `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ tr1 = "abac", str2 = "cab"

  ### 📤 `Output`  ➤ "cabac"

  ### 🔦 `Explanation`  ➤ </br></br>str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".</br></br>str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".</br></br>The answer provided is the shortest such string that satisfies these properties.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ str1 = "aaaaaaaa", str2 = "aaaaaaaa"

  ### 📤 `Output`  ➤ "aaaaaaaa"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= str1.length, str2.length <= 1000`** </br>

🔹 **`str1` and `str2` consist of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/28%20-%2002%20-%202025%20---%201092.%20Shortest%20Common%20Supersequence%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201092.%20Shortest%20Common%20Supersequence%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/28%20-%2002%20-%202025%20---%201092.%20Shortest%20Common%20Supersequence%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201092.%20Shortest%20Common%20Supersequence%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/28%20-%2002%20-%202025%20---%201092.%20Shortest%20Common%20Supersequence%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201092.%20Shortest%20Common%20Supersequence%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/28%20-%2002%20-%202025%20---%201092.%20Shortest%20Common%20Supersequence%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201092.%20Shortest%20Common%20Supersequence%20.js) |
