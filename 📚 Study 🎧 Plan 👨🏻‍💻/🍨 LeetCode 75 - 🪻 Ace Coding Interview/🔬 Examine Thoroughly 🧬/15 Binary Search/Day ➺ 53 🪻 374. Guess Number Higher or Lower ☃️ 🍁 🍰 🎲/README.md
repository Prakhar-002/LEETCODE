# 374. Guess Number Higher or Lower

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/guess-number-higher-or-lower/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ♻️ 374 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### We are engaging in the Guess Game! Here's how it works:

### I (the computer) secretly pick a number from 1 to `n` (inclusive). Your task is to guess which number I have chosen.

### Each time you make an incorrect guess, I will provide a hint: I will tell you whether the number I picked is higher or lower than your guess.

### To facilitate the guessing, you can call a pre-defined API called `int guess(int num)`, which gives you one of three possible results:


- -1: Your guess (`num`) is *higher* than the number I picked (i.e., `num > pick`).

- 1: Your guess (`num`) is *lower* than the number I picked (i.e., `num < pick`).

- 0: Your guess (`num`) is *equal* to the number I picked (i.e., `num == pick`).

### Your task is to return the number that I (the computer) have picked.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 10, pick = 6

  ### 📤 `Output`  ➤ 6

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1, pick = 1

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2, pick = 1

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2147483647, pick = 1
  
  ### 📤 `Output`  ➤1
  
  ### 🔦 `Explanation`  ➤This problem to identify the index between 1 numbers of side, index based from binary searching algo make as fit between each side: for range which easy pick is `6 as correct as guess

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 2<sup>31</sup> - 1 </br>
🔹 1 <= pick <= n </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Binary Search**  </br>
🔸 **Interactive**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2053%20%F0%9F%AA%BB%20374.%20Guess%20Number%20Higher%20or%20Lower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20374.%20Guess%20Number%20Higher%20or%20Lowe.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2053%20%F0%9F%AA%BB%20374.%20Guess%20Number%20Higher%20or%20Lower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20374.%20Guess%20Number%20Higher%20or%20Lower.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2053%20%F0%9F%AA%BB%20374.%20Guess%20Number%20Higher%20or%20Lower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20374.%20Guess%20Number%20Higher%20or%20Lowe.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2053%20%F0%9F%AA%BB%20374.%20Guess%20Number%20Higher%20or%20Lower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20374.%20Guess%20Number%20Higher%20or%20.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2053%20%F0%9F%AA%BB%20374.%20Guess%20Number%20Higher%20or%20Lower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%92%96C%20-%20374.%20Guess%20Number%20Higher%20or%20Lower.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7bb7241b-0a5f-4a01-8c84-00ec4f5b6c43" width = "700px" height="462px" />

</h1>
