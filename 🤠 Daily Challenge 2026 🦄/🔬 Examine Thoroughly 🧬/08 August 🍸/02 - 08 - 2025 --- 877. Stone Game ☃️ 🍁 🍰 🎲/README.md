# 877. Stone Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game/?envType=daily-question&envId=2026-08-02"><strong>➥ ☢️ 877 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Alice and Bob play a game with piles of stones. There are an **even number of piles** arranged in a row, and each pile has a positive integer number of stones `piles[i]`.
### The objective of the game is to end with the **most stones**. The total number of stones across all the piles is **odd**, so there are **no ties**.
### Alice and Bob take turns, with **Alice starting first**. Each turn, a player takes the **entire pile** of stones either from the **beginning** or from the **end** of the row. This continues until there are **no more piles** left, at which point the person with the most stones wins.
### Assuming Alice and Bob play **optimally**, return `true` if **Alice wins** the game, or `false` if **Bob wins**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ piles = [5,3,4,5]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ Alice takes the first `5`. No matter what Bob picks, Alice can always secure a winning total. Alice wins with at least `9` points vs Bob's `8`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ piles = [3,7,2,3]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Alice always wins when both players play optimally, as she has the first-mover advantage with an even number of piles.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ piles = [1,2]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Alice picks `2` (the larger pile) on her first turn. She wins with `2` vs Bob's `1`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `2 <= piles.length <= 500` </br>
🔹 `piles.length` is **even**. </br>
🔹 `1 <= piles[i] <= 500` </br>
🔹 `sum(piles[i])` is **odd**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Minimax** </br>
🔸 **Game Theory** </br>
🔸 **Zero-Sum Game** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/02%20-%2008%20-%202025%20---%20877.%20Stone%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20877.%20Stone%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/02%20-%2008%20-%202025%20---%20877.%20Stone%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20877.%20Stone%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/02%20-%2008%20-%202025%20---%20877.%20Stone%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20877.%20Stone%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/02%20-%2008%20-%202025%20---%20877.%20Stone%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20877.%20Stone%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/387c400b-4212-4782-993a-a6ba92e735f4" width = "700px" height="462px" />

</h1>
