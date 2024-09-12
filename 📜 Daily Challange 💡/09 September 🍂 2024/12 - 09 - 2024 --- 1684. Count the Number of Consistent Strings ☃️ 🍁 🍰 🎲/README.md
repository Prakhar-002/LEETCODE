# 1684. Count the Number of Consistent Strings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-consistent-strings/description/?envType=daily-question&envId=2024-09-12"><strong>➥ ♻️ 1684 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `allowed` consisting of `distinct` characters and an array of strings `words`. A string is `consistent` if all characters in the string appear in the string `allowed`.

### Return *the number of `consistent` strings in the array words*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  allowed = "ab", words = ["ad","bd","aaab","baa","badab"]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤  Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ All strings are consistent.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ Strings "cc", "acd", "ac", and "d" are consistent.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= words.length <= 104** </br>

🔹 **`1 <= allowed.length <= 26`** </br>

🔹 **`1 <= words[i].length <= 10`** </br>

🔹 **The characters in `allowed` are distinct.** </br>

🔹 **`words[i]` and `allowed` contain only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/12%20-%2009%20-%202024%20---%201684.%20Count%20the%20Number%20of%20Consistent%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1684-CountTheNumberOfConsistentStrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/12%20-%2009%20-%202024%20---%201684.%20Count%20the%20Number%20of%20Consistent%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1684-CountTheNumberOfConsistentStrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/12%20-%2009%20-%202024%20---%201684.%20Count%20the%20Number%20of%20Consistent%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1684-CountTheNumberOfConsistentStrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/12%20-%2009%20-%202024%20---%201684.%20Count%20the%20Number%20of%20Consistent%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1684-CountTheNumberOfConsistentStrings.js) |
