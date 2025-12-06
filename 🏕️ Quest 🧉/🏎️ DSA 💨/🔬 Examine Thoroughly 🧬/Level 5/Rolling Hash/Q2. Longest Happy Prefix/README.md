# Q2. Longest Happy Prefix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-happy-prefix/description/?envType=problem-list-v2&envId=dsa-recursion-maze-rolling-hash"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A string is called a happy prefix if is a non-empty prefix which is also a suffix (excluding itself).

### Given a string `s`, return the longest happy prefix of `s`. Return an empty string `""` if no such prefix exists.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "level"

  ### 📤 `Output`  ➤ "l"

  ### 🔦 `Explanation`  ➤ s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), and suffix ("l", "el", "vel", "evel"). The largest prefix which is also suffix is given by "l".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "ababab"

  ### 📤 `Output`  ➤ "abab"

  ### 🔦 `Explanation` ➤ "abab" is the largest prefix which is also suffix. They can overlap in the original string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 10<sup>5</sup> </br>
🔹 s contains only lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Rolling Hash** </br>
🔸 **String Matching** </br>
🔸 **Hash Function** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Rolling%20Hash/Q2.%20Longest%20Happy%20Prefix/%F0%9F%8D%81JAVA%20-%20Longest%20Happy%20Prefix.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Rolling%20Hash/Q2.%20Longest%20Happy%20Prefix/%F0%9F%8E%B2CPP%20-%20Longest%20Happy%20Prefix.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Rolling%20Hash/Q2.%20Longest%20Happy%20Prefix/%F0%9F%8D%B0PYTHON%20-%20Longest%20Happy%20Prefix.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Rolling%20Hash/Q2.%20Longest%20Happy%20Prefix/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Longest%20Happy%20Prefix.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c8f9bf4e-f84f-484f-8bd6-00107b0da225" width = "700px" height="462px" />

</h1>
