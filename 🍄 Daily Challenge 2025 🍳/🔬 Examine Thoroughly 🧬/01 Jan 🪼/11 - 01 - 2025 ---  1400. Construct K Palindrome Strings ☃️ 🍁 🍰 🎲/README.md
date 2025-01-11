# 1400. Construct K Palindrome Strings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-k-palindrome-strings/description/?envType=daily-question&envId=2025-01-11"><strong>➥ ☢️ 1400 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` and an integer `k`, return `true` *if you can use all the characters in* `s` *to construct* `k` *palindrome strings or* `false` *otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "annabelle", k = 2

  ### 📤 `Output`  ➤  true

  ### 🔦 `Explanation`  ➤ ➺You can construct two palindromes using all characters in s.</br> Some possible constructions "anna" + "elble", "anbna" + "elle", "anellena" + "b"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "leetcode", k = 3

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ It is impossible to construct 3 palindromes using all the characters of s.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "true", k = 4

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The only possible solution is to put each character in a separate string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists of lowercase English letters.** </br>

🔹 **1 <= k <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Greedy**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/11%20-%2001%20-%202025%20---%20%201400.%20Construct%20K%20Palindrome%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201400.%20Construct%20K%20Palindrome%20Strings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/11%20-%2001%20-%202025%20---%20%201400.%20Construct%20K%20Palindrome%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201400.%20Construct%20K%20Palindrome%20Strings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/11%20-%2001%20-%202025%20---%20%201400.%20Construct%20K%20Palindrome%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201400.%20Construct%20K%20Palindrome%20Strings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/11%20-%2001%20-%202025%20---%20%201400.%20Construct%20K%20Palindrome%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201400.%20Construct%20K%20Palindrome%20Strings.js) |
