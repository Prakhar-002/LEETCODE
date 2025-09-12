# 3227. Vowels Game in a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/vowels-game-in-a-string/description/?envType=daily-question&envId=2025-09-12"><strong>➥ ☢️ 3227 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob are playing a game on a string.

### You are given a string s, Alice and Bob will take turns playing the following game where Alice starts first:

- On Alice's turn, she has to remove any non-empty substring from s that contains an odd number of vowels.

- On Bob's turn, he has to remove any non-empty substring from s that contains an even number of vowels.

### The first player who cannot make a move on their turn loses the game. We assume that both Alice and Bob play optimally.

### Return true if Alice wins the game, and false otherwise.

### The English vowels are: a, e, i, o, and u.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "leetcoder"`

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ ➺

  - Alice can win the game as follows: Alice plays first, she can delete the underlined substring in s = "leetcoder" which contains 3 vowels. The resulting string is s = "der". Bob plays second, he can delete the underlined substring in s = "der" which contains 0 vowels. The resulting string is s = "er". Alice plays third, she can delete the whole string s = "er" which contains 1 vowel. Bob plays fourth, since the string is empty, there is no valid play for Bob. So Alice wins the game.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "bbcd"`

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤

  - There is no valid play for Alice in her first turn, so Alice loses the game.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "aeioubcd"`

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  Valid string is that there

has are number that to perform in win string that is. Given

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 10^5` </br>

🔹 `s` consists only of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **String** </br>
🔸 **Brainteaser** </br>
🔸 **Game Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/12%20-%2009%20-%202025%20---%203227.%20Vowels%20Game%20in%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203227.%20Vowels%20Game%20in%20a%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/12%20-%2009%20-%202025%20---%203227.%20Vowels%20Game%20in%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203227.%20Vowels%20Game%20in%20a%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/12%20-%2009%20-%202025%20---%203227.%20Vowels%20Game%20in%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203227.%20Vowels%20Game%20in%20a%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/12%20-%2009%20-%202025%20---%203227.%20Vowels%20Game%20in%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203227.%20Vowels%20Game%20in%20a%20String.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9e561114-065b-4241-aa6a-94048f01678a" width = "700px" height="462px" />

</h1>
