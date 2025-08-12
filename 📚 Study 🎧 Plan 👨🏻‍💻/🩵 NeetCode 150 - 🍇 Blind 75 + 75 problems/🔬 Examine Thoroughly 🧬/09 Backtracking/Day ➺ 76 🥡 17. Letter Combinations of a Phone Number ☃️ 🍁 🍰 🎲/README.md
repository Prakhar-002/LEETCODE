# 17. Letter Combinations of a Phone Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/"><strong>➥ ☢️ 17 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `digits` containing digits from '2' to '9' inclusive. The goal is to find all possible letter combinations that the input digits could represent, given a standard phone keypad mapping of digits to letters. Return the result in any order.

### Important Information:

- The digit '1' does *not* map to any letters.
- You need to consider every possible letter combination from every possible mapping of the digits in the input `digits` string.

<img src="https://github.com/user-attachments/assets/3903519f-abd7-47a6-ad7c-68f18a3b4224" width="" height=""/>

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ digits = "23"

  ### 📤 `Output`  ➤ ["ad","ae","af","bd","be","bf","cd","ce","cf"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ digits = ""

  ### 📤 `Output`  ➤ []

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ digits = "2"

  ### 📤 `Output`  ➤ ["a","b","c"]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 0 <= digits.length <= 4 </br>

🔹 digits[i] is a digit in the range ['2', '9']. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2076%20%F0%9F%A5%A1%2017.%20Letter%20Combinations%20of%20a%20Phone%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2017.%20Letter%20Combination.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2076%20%F0%9F%A5%A1%2017.%20Letter%20Combinations%20of%20a%20Phone%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2017.%20Letter%20Combinations%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2076%20%F0%9F%A5%A1%2017.%20Letter%20Combinations%20of%20a%20Phone%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2017.%20Letter%20Combination.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2076%20%F0%9F%A5%A1%2017.%20Letter%20Combinations%20of%20a%20Phone%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2017.%20Letter%20Combina.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/315bcfbc-f6df-4b0a-a209-2215cec4a2d2" width = "700px" height="462px" />

</h1>
