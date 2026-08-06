# 486. Predict the Winner

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/predict-the-winner/description/?envType=daily-question&envId=2026-08-01"><strong>➥ ☢️ 486 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums`. Two players are playing a game with this array: **player 1** and **player 2**.
### Player 1 and player 2 take turns, with **player 1 starting first**. Both players start the game with a score of `0`. At each turn, the player takes one of the numbers from **either end** of the array (i.e., `nums[0]` or `nums[nums.length - 1]`) which reduces the size of the array by `1`. The player **adds** the chosen number to their score. The game ends when there are **no more elements** in the array.
### Return `true` if **Player 1 can win** the game. If the scores of both players are **equal**, then player 1 is still the winner, and you should also return `true`. You may assume that both players are playing **optimally**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,5,2]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation`  ➤ No matter what player 1 picks first, player 2 can always grab `5`. Final scores: player 1 = `3`, player 2 = `5`. Player 1 cannot win.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,5,233,7]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Player 1 picks `1` first. No matter what player 2 picks (`5` or `7`), player 1 can pick `233`. Final score: player 1 = `234`, player 2 = `12`. Player 1 wins.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,1]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Player 1 picks `1`, player 2 picks `1`. Both scores are equal (`1 = 1`), so player 1 is still considered the winner.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= nums.length <= 20` </br>
🔹 `0 <= nums[i] <= 10^7` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Recursion** </br>
🔸 **Minimax** </br>
🔸 **Game Theory** </br>
🔸 **Zero-Sum Game** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/01%20-%2007%20-%202025%20---%20486.%20Predict%20the%20Winner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20486.%20Predict%20the%20Winner.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/01%20-%2007%20-%202025%20---%20486.%20Predict%20the%20Winner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20486.%20Predict%20the%20Winner.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/01%20-%2007%20-%202025%20---%20486.%20Predict%20the%20Winner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20486.%20Predict%20the%20Winner.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B8/01%20-%2007%20-%202025%20---%20486.%20Predict%20the%20Winner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20486.%20Predict%20the%20Winner.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f7ec9072-ae65-4695-830f-29974894bda3" width = "700px" height="462px" />

</h1>
