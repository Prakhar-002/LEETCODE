# 383. Ransom Note

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/ransom-note/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ♻️ 383 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings: `ransomNote` and `magazine`. Your task is to determine if the `ransomNote` can be constructed by using the letters from the `magazine` string.

### Important Constraint: Each letter in the `magazine` can only be used *once* to construct the `ransomNote`.

### Return `true` if the `ransomNote` can be constructed, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ransomNote = "a", magazine = "b"

  ### 📤 `Output`  ➤ false

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ ransomNote = "aa", magazine = "ab"

  ### 📤 `Output`  ➤ false

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ ransomNote = "aa", magazine = "aab"

  ### 📤 `Output`  ➤ true

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= ransomNote.length, magazine.length <= 10<sup>5</sup> </br>

🔹 ransomNote and magazine consist of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2039%20%F0%9F%8D%A2%20383.%20Reasom%20Note%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20383.%20Ransom%20Note.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2039%20%F0%9F%8D%A2%20383.%20Reasom%20Note%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20383.%20Ransom%20Note.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2039%20%F0%9F%8D%A2%20383.%20Reasom%20Note%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20383.%20Ransom%20Note.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2039%20%F0%9F%8D%A2%20383.%20Reasom%20Note%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20383.%20Ransom%20Note.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hashmap/Day%20%E2%9E%BA%2039%20%F0%9F%8D%A2%20383.%20Reasom%20Note%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20383.%20Ransom%20Note.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8b74390b-040d-489e-985c-897865959e2e" width = "700px" height="462px" />

</h1>
