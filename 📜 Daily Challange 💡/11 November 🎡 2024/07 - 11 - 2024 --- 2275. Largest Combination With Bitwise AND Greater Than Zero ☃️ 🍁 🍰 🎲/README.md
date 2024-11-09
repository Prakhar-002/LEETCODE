# 2275. Largest Combination With Bitwise AND Greater Than Zero

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/?envType=daily-question&envId=2024-11-07"><strong>➥ ☢️ 2275 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The bitwise AND of an array `nums` is the bitwise AND of all integers in `nums`.

- For example, for `nums = [1, 5, 3]`, the bitwise AND is equal to `1 & 5 & 3 = 1`.

- Also, for `nums = [7]`, the bitwise AND is `7`.

### You are given an array of positive integers `candidates`. Evaluate the bitwise AND of every combination of numbers of `candidates`. Each number in `candidates` may only be used once in each combination.

### Return *the size of the `largest` combination of `candidates` with a bitwise AND `greater` than 0*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ candidates = [16,17,71,62,12,24,14]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ ➺The combination [16,17,62,24] has a bitwise AND of 16 & 17 & 62 & 24 = 16 > 0.</br> The size of the combination is 4.</br> It can be shown that no combination with a size greater than 4 has a bitwise AND greater than 0.</br> Note that more than one combination may have the largest size.</br> For example, the combination [62,12,24,14] has a bitwise AND of 62 & 12 & 24 & 14 = 8 > 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  candidates = [8,8]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ The largest combination [8,8] has a bitwise AND of 8 & 8 = 8 > 0.</br> The size of the combination is 2, so we return 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= candidates.length <= 10<sup>5</sup>** </br>

🔹 **1 <= candidates[i] <= 10<sup>7</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203133.%20Minimum%20Array%20End.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203133.%20Minimum%20Array%20End.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203133.%20Minimum%20Array%20End.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203133.%20Minimum%20Array%20End.js) |
