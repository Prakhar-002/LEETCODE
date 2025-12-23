# Q2. Stone Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stone-game/?envType=problem-list-v2&envId=dsa-strategy-summit-game-theory"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob are playing a game with piles of stones arranged in a row. There are an **even** number of piles, and each pile `piles[i]` has a **positive** number of stones. 

### The total number of stones is **odd**, so there are no ties. On each turn, a player takes the **entire** pile from either the **beginning** or the **end** of the row, with **Alice** starting first. 

### The player with the **most** stones at the end wins. Assuming both play optimally, return `true` if Alice wins the game, otherwise return `false`. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `piles = [5,3,4,5]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ Alice can take the first `5`, leaving `[3,4,5]`. If Bob takes `3`, Alice then takes `5` and finishes with `10` stones; if Bob takes the last `5`, Alice then takes `4` and finishes with `9` stones. In both cases Alice gets more stones, so she wins. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `piles = [3,7,2,3]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation` ➤ With optimal play on both sides, Alice can always choose a sequence of piles (either all even-indexed or all odd-indexed positions) that gives her more stones than Bob, so she wins. 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= piles.length <= 500` </br>
🔹 `piles.length` is even </br>
🔹 `1 <= piles[i] <= 500` and `sum(piles[i])` is odd </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Dynamic**  </br>
🔸 **Programming**  </br>
🔸 **Game**  </br>
🔸 **Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q2.%20Stone%20Game/%F0%9F%8D%81JAVA%20-%20Stone%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q2.%20Stone%20Game/%F0%9F%8E%B2CPP%20-%20Stone%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q2.%20Stone%20Game/%F0%9F%8D%B0PYTHON%20-%20Stone%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q2.%20Stone%20Game/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Stone%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0882818c-0715-473f-96f6-0719fc53d606" width = "700px" height="462px" />

</h1>
