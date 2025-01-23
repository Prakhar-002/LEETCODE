# 49. Group Anagrams

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/group-anagrams/description/"><strong>➥ ☢️ 49 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

### An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  strs = ["eat","tea","tan","ate","nat","bat"]

  ### 📤 `Output`  ➤  [["bat"],["nat","tan"],["ate","eat","tea"]]

  ### 🔦 `Explanation`  ➤ There is no string in strs that can be rearranged to form "bat".</br> The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.</br> The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  strs = [""]

  ### 📤 `Output`  ➤ [[""]]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ strs = ["a"]

  ### 📤 `Output`  ➤ [["a"]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= strs.length <= 10<sup>4</sup>** </br>

🔹 **`0 <= strs[i].length <= 100`** </br>

🔹 **strs[i] consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2004%20%F0%9F%A5%A1%2049.%20Group%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2049.%20Group%20Anagrams.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2004%20%F0%9F%A5%A1%2049.%20Group%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2049.%20Group%20Anagrams.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2004%20%F0%9F%A5%A1%2049.%20Group%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2049.%20Group%20Anagrams.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2004%20%F0%9F%A5%A1%2049.%20Group%20Anagrams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2049.%20Group%20Anagrams.js) |
