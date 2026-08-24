# 1927. Sum Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-game/description/?envType=daily-question&envId=2026-08-23"><strong>➥ ☢️ 1927 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob take turns playing a game, with Alice starting first.

### You are given a string `num` of even length consisting of digits and `'?'` characters. On each turn, a player will do the following if there is still at least one `'?'` in `num`:
- Choose an index `i` where `num[i] == '?'`.
- Replace `num[i]` with any digit between `'0'` and `'9'`.

### The game ends when there are no more `'?'` characters in `num`. For Bob to win, the sum of the digits in the first half of `num` must be equal to the sum of the digits in the second half. For Alice to win, the sums must not be equal.

### Assuming Alice and Bob play optimally, return `true` if Alice will win and `false` if Bob will win.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `num = "5023"`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation`  ➤ ➺ There are no moves to be made. The sum of the first half is equal to the sum of the second half: 5 + 0 = 2 + 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = "25??"`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation` ➤ ➺ Alice can replace one of the '?'s with '9' and it will be impossible for Bob to make the sums equal.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = "?3295???"`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation`  ➤ ➺ It can be proven that Bob will always win. One possible outcome is:
- Alice replaces the first '?' with '9': `num = "93295???"`.
- Bob replaces one of the '?' in the right half with '9': `num = "932959??"`.
- Alice replaces one of the '?' in the right half with '2': `num = "9329592?"`.
- Bob replaces the last '?' in the right half with '7': `num = "93295927"`.
Bob wins because 9 + 3 + 2 + 9 = 5 + 9 + 2 + 7.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= num.length <= 10^5`** </br>

🔹 **`num.length` is even.** </br>

🔹 **`num` consists of only digits and `'?'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **String** </br>
🔸 **Greedy** </br>
🔸 **Game Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/23%20-%2008%20-%202025%20---%201927.%20Sum%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201927.%20Sum%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/23%20-%2008%20-%202025%20---%201927.%20Sum%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201927.%20Sum%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/23%20-%2008%20-%202025%20---%201927.%20Sum%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201927.%20Sum%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/23%20-%2008%20-%202025%20---%201927.%20Sum%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201927.%20Sum%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/681b333f-b7b6-45aa-b99f-fc588db935dc" width = "700px" height="462px" />

</h1>
