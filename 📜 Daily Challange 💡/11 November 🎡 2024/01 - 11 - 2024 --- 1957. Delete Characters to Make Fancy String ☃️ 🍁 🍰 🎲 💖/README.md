# 1957. Delete Characters to Make Fancy String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/?envType=daily-question&envId=2024-11-01"><strong>➥ ♻️ 1957 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `fancy string` is a string where no `three consecutive` characters are equal.

### Given a string `s`, delete the `minimum` possible number of characters from `s` to make it `fancy`.

### Return *the final string after the deletion. It can be shown that the answer will always be `unique`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "le<ins>e</ins>etcode"

  ### 📤 `Output`  ➤ "leetcode"

  ### 🔦 `Explanation`  ➤ ➺Remove an 'e' from the first group of 'e's to create "leetcode".</br> No three consecutive characters are equal, so return "leetcode".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "<ins>a</ins>aab<ins>aa</ins>aa"

  ### 📤 `Output`  ➤ "aabaa"

  ### 🔦 `Explanation` ➤ Remove an 'a' from the first group of 'a's to create "aabaaaa". </br> Remove two 'a's from the second group of 'a's to create "aabaa". </br> No three consecutive characters are equal, so return "aabaa".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "aab"

  ### 📤 `Output`  ➤ "aab"

  ### 🔦 `Explanation`  ➤ No three consecutive characters are equal, so return "aab".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists only of lowercase English letters** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/01%20-%2011%20-%202024%20---%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/01%20-%2011%20-%202024%20---%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/01%20-%2011%20-%202024%20---%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/01%20-%2011%20-%202024%20---%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/01%20-%2011%20-%202024%20---%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201957.%20Delete%20Characters%20to%20Make%20Fancy%20String.c)  |

