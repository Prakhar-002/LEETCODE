# 1371. Find the Longest Substring Containing Vowels in Even Counts

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/description/?envType=daily-question&envId=2024-09-15"><strong>➥ ☢️ 1371 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the string `s`, return *the size of the longest substring containing each vowel an even number of times*. That is, `'a'`, `'e'`, `'i'`, `'o'`, and `'u'` must appear an even number of times.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "eleetminicoworoep"

  ### 📤 `Output`  ➤ 13

  ### 🔦 `Explanation`  ➤ The longest substring is "leetminicowor" which contains two each of the vowels: `e`, `i` and `o` and zero of the vowels: `a` and `u`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "leetcodeisgreat"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ The longest substring is "leetc" which contains two `e's`.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "bcbcbc"

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ In this case, the given string "bcbcbc" is the longest because all vowels: `a`, `e`, `i`, `o` and `u` appear zero times.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 5 x 10<sup>5</sup>** </br>

🔹 **`s` contains only lowercase English letters.** </br>

🔹 **** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/15%20-%2009%20-%202024%20---%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20Even%20Counts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20E.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/15%20-%2009%20-%202024%20---%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20Even%20Counts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20Eve.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/15%20-%2009%20-%202024%20---%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20Even%20Counts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20E.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/15%20-%2009%20-%202024%20---%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20in%20Even%20Counts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201371.%20Find%20the%20Longest%20Substring%20Containing%20Vowels%20.js) |
