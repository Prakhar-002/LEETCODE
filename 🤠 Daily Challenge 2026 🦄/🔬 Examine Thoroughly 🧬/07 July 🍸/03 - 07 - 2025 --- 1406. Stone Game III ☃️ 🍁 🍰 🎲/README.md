# 1406. Stone Game III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game-iii/description/?envType=daily-question&envId=2026-08-03"><strong>➥ 🫀 1406 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Alice and Bob continue their games with piles of stones. There are several stones arranged in a row, and each stone has an associated value which is an integer given in the array `stoneValue`.
### Alice and Bob take turns, with **Alice starting first**. On each player's turn, that player can take `1`, `2`, or `3` stones from the **first remaining stones** in the row.
### The **score** of each player is the sum of the values of the stones taken. The score of each player is `0` initially.
### The objective of the game is to end with the **highest score**, and the winner is the player with the highest score and there could be a **tie**. The game continues until **all the stones have been taken**.
### Assume Alice and Bob play **optimally**.
### Return `"Alice"` if Alice will win, `"Bob"` if Bob will win, or `"Tie"` if they will end the game with the same score.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ stoneValue = [1,2,3,7]
  ### 📤 `Output`  ➤ "Bob"
  ### 🔦 `Explanation`  ➤ Alice's best move is to take three piles, scoring `6`. Bob then takes `7`. Bob wins with `7 > 6`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ stoneValue = [1,2,3,-9]
  ### 📤 `Output`  ➤ "Alice"
  ### 🔦 `Explanation` ➤ Alice must take all three piles (score = `6`) leaving Bob with `-9`. Alice wins since `6 > -9`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ stoneValue = [1,2,3,6]
  ### 📤 `Output`  ➤ "Tie"
  ### 🔦 `Explanation` ➤ Alice takes all three first piles (score = `6`), Bob takes `6`. Both end with `6`, resulting in a tie.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= stoneValue.length <= 5 * 10^4` </br>
🔹 `-1000 <= stoneValue[i] <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Game Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/03%20-%2007%20-%202025%20---%201406.%20Stone%20Game%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201406.%20Stone%20Game%20III.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/03%20-%2007%20-%202025%20---%201406.%20Stone%20Game%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201406.%20Stone%20Game%20III.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/03%20-%2007%20-%202025%20---%201406.%20Stone%20Game%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201406.%20Stone%20Game%20III.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/03%20-%2007%20-%202025%20---%201406.%20Stone%20Game%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201406.%20Stone%20Game%20III.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/424d2435-2734-419d-a2e5-3664cd7bad9e" width = "700px" height="462px" />

</h1>
