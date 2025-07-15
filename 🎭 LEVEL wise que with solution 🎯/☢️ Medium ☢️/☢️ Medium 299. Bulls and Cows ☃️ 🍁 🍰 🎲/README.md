# 299. Bulls and Cows

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/bulls-and-cows/description/"><strong>➥ ☢️ 299 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You're playing the Bulls and Cows game with your friend. You, as the game master, have written down a secret number. Your friend must guess that number.

### When your friend makes a guess, you give them a hint with the following information:

- **Bulls:** The number of digits in the guess that are in the correct position (i.e., they match the corresponding digit in the secret number).
- **Cows:** The number of digits in the guess that are present in your secret number but are located in the *wrong* position. This means the digits in the guess (excluding the "bulls") could be rearranged to become "bulls".

### Your task is, given the `secret` number and your friend's `guess`, to return the formatted hint as a string in the form "xAyB", where `x` is the number of bulls and `y` is the number of cows. It's important to note that both `secret` and `guess` can contain duplicate digits.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ secret = "1807", guess = "7810"

  ### 📤 `Output`  ➤ "1A3B"

  ### 🔦 `Explanation`  ➤ Bulls are connected with a '|' and cows are underlined:

"1807"
  |
"7810"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ secret = "1123", guess = "0111"

  ### 📤 `Output`  ➤ "1A1B"

  ### 🔦 `Explanation` ➤ Bulls are connected with a '|' and cows are underlined:

"1123"        "1123"
  |      or     |
"0111"        "0111"
Note that only one of the two unmatched 1s is counted as a cow since the non-bull digits can only be rearranged to allow one 1 to be a bull.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= secret.length, guess.length <= 1000 </br>

🔹 secret.length == guess.length </br>

🔹 secret and guess consist of digits only. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20299.%20Bulls%20and%20Cows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20299.%20Bulls%20and%20Cows.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20299.%20Bulls%20and%20Cows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20299.%20Bulls%20and%20Cows.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20299.%20Bulls%20and%20Cows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20299.%20Bulls%20and%20Cows.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20299.%20Bulls%20and%20Cows%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20299.%20Bulls%20and%20Cows.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a1b6b7ba-27e3-46bd-a3fb-076b01d0684e" width = "700px" height="462px" />

</h1>
