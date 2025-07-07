# 205. Isomorphic Strings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/isomorphic-strings/description/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ♻️ 205 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings, `s` and `t`. Your task is to determine if the two strings are isomorphic.

### Two strings, `s` and `t`, are considered isomorphic if the characters in `s` can be replaced to obtain `t`, subject to the following rules:

- All occurrences of a character must be replaced with another character (the mapping must be consistent).
- No two characters may map to the same character. However, a character is allowed to map to itself.
- The order of the characters must be preserved during the replacement.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "egg", t = "add"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤
The strings s and t can be made identical by:

- Mapping 'e' to 'a'.
- Mapping 'g' to 'd'.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "foo", t = "bar"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤
The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "paper", t = "title"

  ### 📤 `Output`  ➤ true

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 5 * 10<sup>4</sup> </br>

🔹 t.length == s.length </br>

🔹 s and t consist of any valid ascii character. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2040%20%F0%9F%8D%A2%20205.%20Isomorphic%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20205.%20Isomorphic%20Strings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2040%20%F0%9F%8D%A2%20205.%20Isomorphic%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20205.%20Isomorphic%20Strings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2040%20%F0%9F%8D%A2%20205.%20Isomorphic%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20205.%20Isomorphic%20Strings.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2040%20%F0%9F%8D%A2%20205.%20Isomorphic%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20205.%20Isomorphic%20Strings.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/52066b97-bf2f-4580-b572-1174ace55f14" width = "700px" height="462px" />

</h1>
