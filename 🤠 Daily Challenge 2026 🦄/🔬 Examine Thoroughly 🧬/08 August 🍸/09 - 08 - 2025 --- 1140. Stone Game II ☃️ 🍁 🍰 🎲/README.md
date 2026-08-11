# 1140. Stone Game II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game-ii/description/?envType=daily-question&envId=2026-08-09"><strong>➥ ☢️ 1140 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob continue their games with piles of stones. There are a number of piles arranged in a row, and each pile has a positive integer number of stones `piles[i]`. The objective of the game is to end with the most stones.

### Alice and Bob take turns, with Alice starting first. On each player's turn, that player can take all the stones in the first `X` remaining piles, where `1 <= X <= 2M`. Then, we set `M = max(M, X)`. Initially, `M = 1`.

### The game continues until all the stones have been taken. Assuming Alice and Bob play optimally, return the maximum number of stones Alice can get.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `piles = [2,7,9,4,4]`

  ### 📤 `Output`  ➤ `10`

  ### 🔦 `Explanation`  ➤ ➺ If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get 2 + 4 + 4 = 10 stones in total. If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice gets 2 + 7 = 9 stones in total. So we return 10 since it's larger.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `piles = [1,2,3,4,5,100]`

  ### 📤 `Output`  ➤ `104`

  ### 🔦 `Explanation` ➤ ➺ Alice can take the first pile (`X = 1`), leaving `piles = [2,3,4,5,100]` with `M = 1`. Bob takes `X = 1` or `2` piles, and Alice will eventually be able to secure the last pile of 100 along with her first pile, giving her `1 + 3 + 100 = 104` stones (or optimal strategic play leading to 104).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `piles = [1]`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺ Alice takes the only pile available and gets 1 stone.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= piles.length <= 100`** </br>

🔹 **`1 <= piles[i] <= 10^4`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Minimax** </br>
🔸 **Prefix Sum** </br>
🔸 **Game Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
