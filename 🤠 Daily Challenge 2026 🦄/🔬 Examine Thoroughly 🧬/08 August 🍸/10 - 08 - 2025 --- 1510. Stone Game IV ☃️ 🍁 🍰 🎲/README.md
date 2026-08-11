# 1510. Stone Game IV

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game-iv/?envType=daily-question&envId=2026-08-10"><strong>➥ 🫀 1510 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob take turns playing a game, with Alice starting first.

### Initially, there are `n` stones in a pile. On each player's turn, that player makes a move consisting of removing any non-zero square number of stones in the pile.

### Also, if a player cannot make a move, he/she loses the game. Given a positive integer `n`, return `true` if and only if Alice wins the game otherwise return `false`, assuming both players play optimally.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `n = 1`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ Alice can remove 1 stone winning the game because Bob doesn't have any moves.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 2`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation` ➤ ➺ Alice can only remove 1 stone, after that Bob removes the last one winning the game (2 -> 1 -> 0).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 4`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ `n` is already a perfect square, Alice can win with one move, removing 4 stones (4 -> 0).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 10^5`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Minimax** </br>
🔸 **Game Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/10%20-%2008%20-%202025%20---%201510.%20Stone%20Game%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201510.%20Stone%20Game%20IV.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/10%20-%2008%20-%202025%20---%201510.%20Stone%20Game%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201510.%20Stone%20Game%20IV.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/10%20-%2008%20-%202025%20---%201510.%20Stone%20Game%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201510.%20Stone%20Game%20IV.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/10%20-%2008%20-%202025%20---%201510.%20Stone%20Game%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201510.%20Stone%20Game%20IV.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f31b75d7-9040-431b-953c-e811b91e6c10" width = "700px" height="462px" />

</h1>
