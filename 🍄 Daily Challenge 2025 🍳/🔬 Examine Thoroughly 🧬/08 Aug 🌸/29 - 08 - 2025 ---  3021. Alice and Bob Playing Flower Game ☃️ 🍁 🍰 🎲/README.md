# 3021. Alice and Bob Playing Flower Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/alice-and-bob-playing-flower-game/description/?envType=daily-question&envId=2025-08-29"><strong>➥ ☢️ 3021 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob are playing a turn-based game on a field, with two lanes of flowers between them. There are x flowers in the first lane between Alice and Bob, and y flowers in the second lane between them.

<img src="https://github.com/user-attachments/assets/73dd6431-6f51-480a-868e-43392417e014" width="" height=""/>

### The game proceeds as follows:

### Alice takes the first turn.

  - In each turn, a player must choose either one of the lane and pick one flower from that side.
  - At the end of the turn, if there are no flowers left at all, the current player captures their opponent and wins the game.
  - Given two integers, n and m, the task is to compute the number of possible pairs (x, y) that satisfy the conditions:

###  Alice must win the game according to the described rules.

  - The number of flowers x in the first lane must be in the range [1,n].
  - The number of flowers y in the second lane must be in the range [1,m].
  - Return the number of possible pairs (x, y) that satisfy the conditions mentioned in the statement.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 3, m = 2`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The following pairs satisfy conditions described in the statement: (1,2), (3,2), (2,1).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 1, m = 1`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ No pairs satisfy the conditions described in the statement.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 5, m = 5`

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation`  ➤ The valid pairs (x, y) where Alice wins are: (1,2), (1,4), (2,1), (3,2), (3,4), (4,1), (2,3), (4,3), (1, 2), (2,1), (3,2), (2,3)

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n, m <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/29%20-%2008%20-%202025%20---%20%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/29%20-%2008%20-%202025%20---%20%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/29%20-%2008%20-%202025%20---%20%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/29%20-%2008%20-%202025%20---%20%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203021.%20Alice%20and%20Bob%20Playing%20Flower%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/84988447-8e49-485e-979c-0bbf417deaaa" width = "700px" height="462px" />

</h1>
