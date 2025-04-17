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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
