# 3110. Score of a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/score-of-a-string/?envType=daily-question&envId=2024-06-23"><strong>➥ ♻️ 3110 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s`. The `score` of a string is defined as the sum of the absolute difference between the `ASCII` values of adjacent characters.

### Return the `score` of s.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ s = "hello"

  ### Output  ➤ 13

  ### Explanation  ➤ The ASCII values of the characters in `s` are: `'h' = 104`, `'e' = 101`, `'l' = 108`, `'o' = 111`. So, the score of `s` would be `|104 - 101|` +` |101 - 108| `+ `|108 - 108|` + `|108 - 111|` =` 3 + 7 + 0 + 3 = 13`.
</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  s = "zaz"

  ### Output  ➤ 50

  ### Explanation ➤ The `ASCII` values of the characters in `s` are: `'z' = 122`, `'a' = 97`. So, the score of s would be `|122 - 97| + |97 - 122| = 25 + 25 = 50`.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **2 <= s.length <= 100**
- **`s` consists only of lowercase English letters.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **String**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/01%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203110.%20Score%20of%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%81JAVA_3110_ScoreOfAString.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/01%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203110.%20Score%20of%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_3110_ScoreOfAString.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/01%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203110.%20Score%20of%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_3110_ScoreOfAString.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/01%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203110.%20Score%20of%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%92%96C_3110_ScoreOfAString.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/score-of-a-string/solutions/5238370/beats-simple-4-language-best-formatted)  |
