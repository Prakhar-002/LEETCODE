# 1657. Determine if Two Strings Are Close

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/determine-if-two-strings-are-close/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 1657 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Two strings are considered `close` if you can attain one from the other using the following operations:

- Operation 1: Swap any two existing characters.
  - For example, a<ins>b</ins>cd<ins>e</ins> -> a<ins>e</ins>cd<ins>b</ins>

- Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
  - For example, <ins>aa</ins>c<ins>abb</ins> -> <ins>bb</ins>c<ins>baa</ins> (all `a's` turn into `b's`, and all `b's` turn into `a's`)

### You can use the operations on either string as many times as necessary.

### Given two strings, `word1` and `word2`, return *`true` if `word1` and `word2` are close, and `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  word1 = "abc", word2 = "bca"

  ### 📤 `Output`  ➤  true

  ### 🔦 `Explanation`  ➤ You can attain word2 from word1 in 2 operations.

➺ Apply Operation 1: "a<ins>bc</ins>" -> "a<ins>cb</ins>"

➺ Apply Operation 1: "<ins>a</ins>c<ins>b</ins>" -> "<ins>b</ins>c<ins>a</ins>"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word1 = "a", word2 = "aa"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ It is impossible to attain word2 from word1, or vice versa, in any number of operations.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  word1 = "cabbba", word2 = "abbccc"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ You can attain word2 from word1 in 3 operations.

➺ Apply Operation 1: "ca<ins>b</ins>bb<ins>a</ins>" -> "ca<ins>a</ins>bb<ins>b</ins>"

➺ Apply Operation 2: "<ins>c</ins>aa<ins>bbb</ins>" -> "<ins>b</ins>aa<ins>ccc</ins>"

➺ Apply Operation 2: "<ins>baa</ins>ccc" -> "<ins>abb</ins>ccc"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= word1.length, word2.length <= 10<sup>5</sup>** </br>

🔹 **`word1` and `word2` contain only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sorting**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2022%20%F0%9F%AA%BB%201657.%20Determine%20if%20Two%20Strings%20Are%20Close%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201657.%20Determine%20if%20T.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2022%20%F0%9F%AA%BB%201657.%20Determine%20if%20Two%20Strings%20Are%20Close%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201657.%20Determine%20if%20Two.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2022%20%F0%9F%AA%BB%201657.%20Determine%20if%20Two%20Strings%20Are%20Close%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201657.%20Determine%20if%20T.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2022%20%F0%9F%AA%BB%201657.%20Determine%20if%20Two%20Strings%20Are%20Close%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201657.%20Determine%20.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2022%20%F0%9F%AA%BB%201657.%20Determine%20if%20Two%20Strings%20Are%20Close%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201657.%20Determine%20if%20Two%20Str.c)  |
