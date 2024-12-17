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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
