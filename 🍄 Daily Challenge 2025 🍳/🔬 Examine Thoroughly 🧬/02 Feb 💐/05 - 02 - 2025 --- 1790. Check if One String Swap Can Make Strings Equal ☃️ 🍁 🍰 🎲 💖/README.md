# 1790. Check if One String Swap Can Make Strings Equal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/?envType=daily-question&envId=2025-02-05"><strong>➥ ♻️ 1790 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

### Return `true` *if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings*. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s1 = "bank", s2 = "kanb"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ For example, swap the first character with the last character of s2 to make "bank".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "attack", s2 = "defend"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤  It is impossible to make them equal with one string swap.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "kelb", s2 = "kelb"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The two strings are already equal, so no string swap operation is required.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s1.length, s2.length <= 100`** </br>

🔹 **`s1.length == s2.length`** </br>

🔹 **`s1` and `s2` consist of only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/05%20-%2002%20-%202025%20---%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/05%20-%2002%20-%202025%20---%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Eq.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/05%20-%2002%20-%202025%20---%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/05%20-%2002%20-%202025%20---%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Stri.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/05%20-%2002%20-%202025%20---%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201790.%20Check%20if%20One%20String%20Swap%20Can%20Make%20Strings%20Equal.c)  |
