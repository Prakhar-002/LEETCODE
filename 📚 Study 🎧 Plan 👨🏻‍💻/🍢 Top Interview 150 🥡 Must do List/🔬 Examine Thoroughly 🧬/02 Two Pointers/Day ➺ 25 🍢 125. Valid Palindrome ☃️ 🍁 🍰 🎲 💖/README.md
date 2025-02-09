
[<img align="left" src ="https://github.com/user-attachments/assets/c5e05cce-05ba-4f7d-8cea-67dc1112ab98" width = "120px" />]()
[<img align="right" src ="https://github.com/user-attachments/assets/6614aa7c-a424-4349-b963-2111d9e9aa0d" width = "120px" />]()

</br>
</br>

# 125. Valid Palindrome

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ♻️ 125 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

### Given a string `s`, return *`true` if it is a palindrome, or `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  s = "A man, a plan, a canal: Panama"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤  "amanaplanacanalpanama" is a palindrome.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "race a car"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ "raceacar" is not a palindrome.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  s = " "

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ s is an empty string "" after removing non-alphanumeric characters.</br> Since an empty string reads the same forward and backward, it is a palindrome.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 2 * 10<sup>5</sup>** </br>

🔹 **s consists only of printable ASCII characters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2025%20%F0%9F%8D%A2%20125.%20Valid%20Palindrome%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20125.%20Valid%20Palindrome.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2025%20%F0%9F%8D%A2%20125.%20Valid%20Palindrome%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20125.%20Valid%20Palindrome.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2025%20%F0%9F%8D%A2%20125.%20Valid%20Palindrome%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20125.%20Valid%20Palindrome.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2025%20%F0%9F%8D%A2%20125.%20Valid%20Palindrome%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20125.%20Valid%20Palindrome.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2025%20%F0%9F%8D%A2%20125.%20Valid%20Palindrome%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20125.%20Valid%20Palindrome.c)  |
