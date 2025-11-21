# Q1. Gray Code

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/gray-code/description/?envType=problem-list-v2&envId=maths-m7-bitmasking-for-setsstates"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An n-bit gray code sequence is a sequence of 2n integers where:

- Every integer is in the inclusive range [0, 2n - 1],
- The first integer is 0,
- An integer appears no more than once in the sequence,
- The binary representation of every pair of adjacent integers differs by exactly one bit, and
- The binary representation of the first and last integers differs by exactly one bit.

### Given an integer n, return any valid n-bit gray code sequence.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2

  ### 📤 `Output`  ➤ [0,1,3,2]

  ### 🔦 `Explanation`  ➤
  ### The binary representation of [0,1,3,2] is [00,01,11,10].
  ### - 00 and 01 differ by one bit
  ### - 01 and 11 differ by one bit
  ### - 11 and 10 differ by one bit
  ### - 10 and 00 differ by one bit
  ### [0,2,3,1] is also a valid gray code sequence, whose binary representation is [00,10,11,01].
  ### - 00 and 10 differ by one bit
  ### - 10 and 11 differ by one bit
  ### - 11 and 01 differ by one bit
  ### - 01 and 00 differ by one bit

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1

  ### 📤 `Output`  ➤ [0,1]

  ### 🔦 `Explanation` ➤ N/A

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 16 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **Backtracking** </br>
🔸 **Bit Manipulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Q1.%20Gray%20Code/%F0%9F%8D%81JAVA%20-%20Gray%20Code.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Q1.%20Gray%20Code/%F0%9F%8E%B2CPP%20-%20Gray%20Code.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Q1.%20Gray%20Code/%F0%9F%8D%B0PYTHON%20-%20Gray%20Code.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%E2%9A%96%EF%B8%8F%20Maths%20%F0%9F%A7%AE/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Q1.%20Gray%20Code/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Gray%20Code.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8c4edf14-05ac-46d9-805b-d88a5657bb23" width = "700px" height="462px" />

</h1>
