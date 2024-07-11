# 1190. Reverse Substrings Between Each Pair of Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/?envType=daily-question&envId=2024-07-11"><strong>➥ ☢️ 1190 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string s that consists of lower case English letters and brackets.

### Reverse the strings in each pair of matching parentheses, starting from the innermost one.

### Your result should not contain any brackets.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤  s = "(abcd)"

  ### 📤 Output  ➤ "dcba"

  ### 🔦 Explanation  ➤ 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ "(u(love)i)"

  ### 📤 Output  ➤ "iloveu"

  ### 🔦 Explanation ➤  The substring "love" is reversed first, then the whole string is reversed.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  s = "(ed(et(oc))el)"

  ### 📤 Output  ➤ "leetcode"

  ### 🔦 Explanation  ➤ First, we reverse the substring "oc", then "etco", and finally, the whole string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 2000** </br>
🔹 **`s` only contains lower case English characters and parentheses.** </br>
🔹 **It is guaranteed that all parentheses are balanced.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/11%20-%2007%20-%202024%20---%201190.%20Reverse%20Substrings%20Between%20Each%20Pair%20of%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1190-ReverseSubstringsBetweenEachPairOfParentheses.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/11%20-%2007%20-%202024%20---%201190.%20Reverse%20Substrings%20Between%20Each%20Pair%20of%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1190-ReverseSubstringsBetweenEachPairOfParentheses.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/11%20-%2007%20-%202024%20---%201190.%20Reverse%20Substrings%20Between%20Each%20Pair%20of%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1190-ReverseSubstringsBetweenEachPairOfParentheses.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/11%20-%2007%20-%202024%20---%201190.%20Reverse%20Substrings%20Between%20Each%20Pair%20of%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1190-ReverseSubstringsBetweenEachPairOfParentheses.js) |

