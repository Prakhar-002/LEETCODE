# 1140. Stone Game II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game-ii/description/?envType=daily-question&envId=2024-08-20"><strong>➥ ☢️ 1140 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob continue their games with piles of stones. There are a number of piles `arranged in a row`, and each pile has a positive integer number of stones `piles[i]`.  The objective of the game is to end with the most stones. 

### Alice and Bob take turns, with Alice starting first.  Initially, `M = 1`.

### On each player's turn, that player can take all the stones in the first X remaining piles, where `1 <= X <= 2M`.  Then, we set `M = max(M, X)`.

### The game continues until all the stones have been taken.

### Assuming Alice and Bob play optimally, return *the maximum number of stones Alice can get*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ piles = [2,7,9,4,4]

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation`  ➤ If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get 2 + 4 + 4 = 10 piles in total. If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get 2 + 7 = 9 piles in total. So we return 10 since it's larger. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ piles = [1,2,3,4,5,100]

  ### 📤 `Output`  ➤ 104

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= piles.length <= 100`** </br>

🔹 **1 <= piles[i] <= 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Prefix Sum**  </br>
🔸 **Game Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/20%20-%2008%20-%202024%20---%201140.%20Stone%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1140-StoneGame-II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/20%20-%2008%20-%202024%20---%201140.%20Stone%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1140-StoneGame-II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/20%20-%2008%20-%202024%20---%201140.%20Stone%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1140-StoneGame-II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/20%20-%2008%20-%202024%20---%201140.%20Stone%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1140-StoneGame-II.js) |
