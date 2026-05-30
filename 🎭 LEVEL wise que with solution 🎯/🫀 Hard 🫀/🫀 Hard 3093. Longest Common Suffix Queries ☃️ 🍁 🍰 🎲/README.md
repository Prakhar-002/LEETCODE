# 3093. Longest Common Suffix Queries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-common-suffix-queries/?envType=daily-question&envId=2026-05-30"><strong>➥ 🫀 3093 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given two arrays of strings `wordsContainer` and `wordsQuery`.
### For each `wordsQuery[i]`, you need to find a string from `wordsContainer` that has the **longest common suffix** with `wordsQuery[i]`. If there are two or more strings in `wordsContainer` that share the longest common suffix, find the string that is the **smallest in length**. If there are two or more such strings that have the **same smallest length**, find the one that **occurred earlier** in `wordsContainer`.
### Return an array of integers `ans`, where `ans[i]` is the **index** of the string in `wordsContainer` that has the longest common suffix with `wordsQuery[i]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ wordsContainer = ["abcd","bcd","xbcd"], wordsQuery = ["cd","bcd","xyz"]
  ### 📤 `Output`  ➤ [1,1,1]
  ### 🔦 `Explanation`  ➤ For all three queries, index `1` ("bcd") wins — it shares the longest common suffix with each query and has the **shortest length** of `3` among all tied candidates.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ wordsContainer = ["abcdefgh","poiuygh","ghghgh"], wordsQuery = ["gh","acbfgh","acbfegh"]
  ### 📤 `Output`  ➤ [2,0,2]
  ### 🔦 `Explanation` ➤ For `"gh"` and `"acbfegh"`, index `2` ("ghghgh") wins with shortest length `6`. For `"acbfgh"`, only index `0` shares the longest suffix `"fgh"`, so it wins despite being longer.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ wordsContainer = ["z","zx"], wordsQuery = ["z","zx","zxy"]
  ### 📤 `Output`  ➤ [0,1,1]
  ### 🔦 `Explanation` ➤ For `"z"`, index `0` shares suffix `"z"` and is shorter. For `"zx"` and `"zxy"`, index `1` shares the longest suffix `"zx"`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= wordsContainer.length, wordsQuery.length <= 10^4` </br>
🔹 `1 <= wordsContainer[i].length <= 5 * 10^3` </br>
🔹 `1 <= wordsQuery[i].length <= 5 * 10^3` </br>
🔹 `wordsContainer[i]` consists only of **lowercase English letters**. </br>
🔹 `wordsQuery[i]` consists only of **lowercase English letters**. </br>
🔹 Sum of `wordsContainer[i].length` is at most `5 * 10^5`. </br>
🔹 Sum of `wordsQuery[i].length` is at most `5 * 10^5`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **String** </br>
🔸 **Trie** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203093.%20Longest%20Common%20Suffix%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203093.%20Longest%20Common%20Suffix%20Queries.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203093.%20Longest%20Common%20Suffix%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203093.%20Longest%20Common%20Suffix%20Queries.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203093.%20Longest%20Common%20Suffix%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203093.%20Longest%20Common%20Suffix%20Queries.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203093.%20Longest%20Common%20Suffix%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203093.%20Longest%20Common%20Suffix%20Queries.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a9b2b7a4-f62b-411d-8b2c-f4ca2d560777" width = "700px" height="462px" />

</h1>
