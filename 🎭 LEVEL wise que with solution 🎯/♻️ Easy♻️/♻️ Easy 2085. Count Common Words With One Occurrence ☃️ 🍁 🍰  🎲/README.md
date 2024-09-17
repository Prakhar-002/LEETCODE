# 2085. Count Common Words With One Occurrence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-common-words-with-one-occurrence/description/"><strong>➥ ♻️ 2085 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two string arrays `words1` and `words2`, return *the number of strings that appear exactly once in each of the two arrays*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  words1 = ["leetcode","is","amazing","as","is"], words2 = ["amazing","leetcode","is"]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ ➺

    ➺ "leetcode" appears exactly once in each of the two arrays. 
        We count this string.

    ➺ "amazing" appears exactly once in each of the two arrays. 
        We count this string.

    ➺ "is" appears in each of the two arrays, but there are 2 occurrences of it in words1. 
        We do not count this string.

    ➺ "as" appears once in words1, but does not appear in words2. 
        We do not count this string.

    Thus, there are 2 strings that appear exactly once in each of the two arrays.
</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words1 = ["b","bb","bbb"], words2 = ["a","aa","aaa"]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ There are no strings that appear in each of the two arrays.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words1 = ["a","ab"], words2 = ["a","a","a","ab"]

  ### 📤 `Output`  ➤  1

  ### 🔦 `Explanation`  ➤ The only string that appears exactly once in each of the two arrays is "ab".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= words1.length, words2.length <= 1000`** </br>

🔹 **`1 <= words1[i].length, words2[j].length <= 30`** </br>

🔹 **`words1[i]` and `words2[j]` consists only of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202085.%20Count%20Common%20Words%20With%20One%20Occurrence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202085.%20Count%20Common%20Words%20With%20One%20Occurrence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202085.%20Count%20Common%20Words%20With%20One%20Occurrence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202085.%20Count%20Common%20Words%20With%20One%20Occurrence.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202085.%20Count%20Common%20Words%20With%20One%20Occurrence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202085.%20Count%20Common%20Words%20With%20One%20Occurrence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202085.%20Count%20Common%20Words%20With%20One%20Occurrence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202085.%20Count%20Common%20Words%20With%20One%20Occurrence.js) |
