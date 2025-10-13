# 2273. Find Resultant Array After Removing Anagrams

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/?envType=daily-question&envId=2025-10-13"><strong>➥ ♻️ 2273 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed string array `words`, where `words[i]` consists of lowercase English letters.

### In one operation, select any index `i` such that `0 < i < words.length` and `words[i - 1]` and `words[i]` are anagrams, and delete `words[i]` from `words`. Keep performing this operation as long as you can select an index that satisfies the conditions.

### Return `words` after performing all operations. It can be shown that selecting the indices for each operation in any arbitrary order will lead to the same result.

### An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original letters exactly once. For example, "dacb" is an anagram of "abdc".

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `words = ["abba","baba","bbaa","cd","cd"]`

  ### 📤 `Output`  ➤ `["abba","cd"]`

  ### 🔦 `Explanation`  ➤ ➺

  - One of the ways we can obtain the resultant array is by using the following operations:
    - Since `words[2] = "bbaa"` and `words[1] = "baba"` are anagrams, we choose index 2 and delete `words[2]`. Now `words = ["abba","baba","cd","cd"]`.
    - Since `words[1] = "baba"` and `words[0] = "abba"` are anagrams, we choose index 1 and delete `words[1]`. Now `words = ["abba","cd","cd"]`.
    - Since `words[2] = "cd"` and `words[1] = "cd"` are anagrams, we choose index 2 and delete `words[2]`. Now `words = ["abba","cd"]`.
  - We can no longer perform any operations, so `["abba","cd"]` is the final answer.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `words = ["a","b","c","d","e"]`

  ### 📤 `Output`  ➤ `["a","b","c","d","e"]`

  ### 🔦 `Explanation`  ➤ ➺

  - No two adjacent strings in words are anagrams of each other, so no operations are performed.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= words.length <= 100` </br>
🔹 `1 <= words[i].length <= 10` </br>
🔹 `words[i]` consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
