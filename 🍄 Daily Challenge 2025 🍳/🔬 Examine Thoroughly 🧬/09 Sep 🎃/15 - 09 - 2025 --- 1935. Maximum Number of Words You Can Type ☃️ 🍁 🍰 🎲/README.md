# 1935. Maximum Number of Words You Can Type

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-words-you-can-type/description/?envType=daily-question&envId=2025-09-15"><strong>➥ ♻️ 1935 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

### Given a string `text` of words separated by a single space (no leading or trailing spaces) and a string `brokenLetters` of all distinct letter keys that are broken, return *the number of words in `text` you can fully type using this keyboard*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `text = "hello world", brokenLetters = "ad"`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ ➺

  - We cannot type "world" because the 'd' key is broken. Since we can type Hello then 1 one only value valid not two words to return hence one word string , is , out,

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `text = "leet code", brokenLetters = "lt"`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` Not “Both can be not valid because and there and can be, , code still not can with 2 words is what code the only It all We and.

It and  key only only broken.

Therefore. Can valid what word  return. Then

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= text.length <= 10^4` </br>

🔹 `0 <= brokenLetters.length <= 26` </br>

🔹 text consists of words separated by a single space without any leading or trailing spaces. </br>

🔹 Each word only consists of lowercase English letters. </br>

🔹 brokenLetters consists of distinct lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/15%20-%2009%20-%202025%20---%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/15%20-%2009%20-%202025%20---%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/15%20-%2009%20-%202025%20---%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/15%20-%2009%20-%202025%20---%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201935.%20Maximum%20Number%20of%20Words%20You%20Can%20Type.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b79aa735-52c0-4094-a095-6b361179d776" width = "700px" height="462px" />

</h1>
