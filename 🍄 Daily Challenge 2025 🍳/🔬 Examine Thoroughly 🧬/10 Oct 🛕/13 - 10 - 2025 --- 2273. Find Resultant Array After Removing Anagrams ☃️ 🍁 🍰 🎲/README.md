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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/13%20-%2010%20-%202025%20---%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/13%20-%2010%20-%202025%20---%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/13%20-%2010%20-%202025%20---%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/13%20-%2010%20-%202025%20---%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202273.%20Find%20Resultant%20Array%20After%20Removing%20Anagrams.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1af6e634-3854-43b7-9849-e22725928396" width = "700px" height="462px" />

</h1>
