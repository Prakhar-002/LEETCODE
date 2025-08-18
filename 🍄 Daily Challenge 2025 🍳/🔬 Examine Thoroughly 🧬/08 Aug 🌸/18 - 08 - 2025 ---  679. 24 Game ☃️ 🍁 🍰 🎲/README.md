# 679. 24 Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/24-game/description/?envType=daily-question&envId=2025-08-18"><strong>➥ 🫀 679 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `cards` of length 4, where each `cards[i]` represents a number between 1 and 9 (inclusive). You possess four cards, each displaying one of these numbers. Your objective is to arrange these numbers into a valid mathematical expression, using the operators `['+', '-', '*', '/']` and parentheses `(` and `)`, with the goal of obtaining the value 24.

### Restrictions:

1. **Real Division:** The division operator `/` must represent real division, *not* integer division. E.g., 4 / (1 - 2 / 3) = 4 / (1 / 3) = 12.
2. **Binary Operations:** Each operation must involve *exactly two* numbers. Unary negation (e.g., `-1`) is not permitted. Thus, if `cards = [1, 1, 1, 1]`, the expression "-1 - 1 - 1 - 1" is not allowed.
3. **No Concatenation:** You cannot combine digits to form multi-digit numbers. For example, if `cards = [1, 2, 1, 2]`, "12 + 12" is not considered valid.

### Return `true` if it is possible to create an expression that evaluates to 24, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ cards = [4,1,8,7]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ (8-4) * (7-1) = 24

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ cards = [1,2,1,2]

  ### 📤 `Output`  ➤ false

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 cards.length == 4 </br>

🔹 1 <= cards[i] <= 9 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/18%20-%2008%20-%202025%20---%20%20679.%2024%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20679.%2024%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/18%20-%2008%20-%202025%20---%20%20679.%2024%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20679.%2024%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/18%20-%2008%20-%202025%20---%20%20679.%2024%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20679.%2024%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/18%20-%2008%20-%202025%20---%20%20679.%2024%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20679.%2024%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a3608069-71e4-4c8f-bef0-08d479a9b5cc" width = "700px" height="462px" />

</h1>
