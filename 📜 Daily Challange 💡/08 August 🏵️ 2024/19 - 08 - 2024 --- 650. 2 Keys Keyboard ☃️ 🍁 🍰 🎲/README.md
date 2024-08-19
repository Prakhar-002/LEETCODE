# 650. 2 Keys Keyboard

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/2-keys-keyboard/description/?envType=daily-question&envId=2024-08-19"><strong>➥ ☢️ 650 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is only one character `'A'` on the screen of a notepad. You can perform one of two operations on this notepad for each step:

- `Copy All` ➺ You can copy all the characters present on the screen (a partial copy is not allowed).

- `Paste` ➺ You can paste the characters which are copied last time.

### Given an integer `n`, return *the minimum number of operations to get the character `'A'` exactly `n` times on the screen*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  n = 3

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ Initially, we have one character 'A'.
    In step 1 ➺ we use Copy All operation.

    In step 2 ➺ we use Paste operation to get 'AA'.

    In step 3 ➺ we use Paste operation to get 'AAA'.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  n = 1

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/19%20-%2008%20-%202024%20---%20650.%202%20Keys%20Keyboard%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-650-2KeysKeyboard.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/19%20-%2008%20-%202024%20---%20650.%202%20Keys%20Keyboard%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-650-2KeysKeyboard.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/19%20-%2008%20-%202024%20---%20650.%202%20Keys%20Keyboard%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-650-2KeysKeyboard.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/19%20-%2008%20-%202024%20---%20650.%202%20Keys%20Keyboard%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-650-2KeysKeyboard.js) |
