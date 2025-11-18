# 1513. Number of Substrings With Only 1s

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-substrings-with-only-1s/description/?envType=daily-question&envId=2025-11-18"><strong>➥ ☢️ 1513 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary string `s`, return the number of substrings with all characters 1's. Since the answer may be too large, return it modulo 109 + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "0110111"

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤ There are 9 substring in total with only 1's characters.
  ### "1" -> 5 times.
  ### "11" -> 3 times.
  ### "111" -> 1 time.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "101"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ Substring "1" is shown 2 times in s.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "111111"

  ### 📤 `Output`  ➤ 21

  ### 🔦 `Explanation` ➤ Each substring contains only 1's characters.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 105 </br>
🔹 s[i] is either '0' or '1'. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/16%20-%2011%20-%202025%20---%201513.%20Number%20of%20Substrings%20With%20Only%201s%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201513.%20Number%20of%20Substrings%20With%20Only%201s.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/16%20-%2011%20-%202025%20---%201513.%20Number%20of%20Substrings%20With%20Only%201s%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201513.%20Number%20of%20Substrings%20With%20Only%201s.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/16%20-%2011%20-%202025%20---%201513.%20Number%20of%20Substrings%20With%20Only%201s%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201513.%20Number%20of%20Substrings%20With%20Only%201s.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/16%20-%2011%20-%202025%20---%201513.%20Number%20of%20Substrings%20With%20Only%201s%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201513.%20Number%20of%20Substrings%20With%20Only%201s.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/23204fbc-0e2a-4988-bee1-b4f59bec4952" width = "700px" height="462px" />

</h1>
