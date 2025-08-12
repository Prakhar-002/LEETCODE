# 2787. Ways to Express an Integer as Sum of Powers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/ways-to-express-an-integer-as-sum-of-powers/description/?envType=daily-question&envId=2025-08-12"><strong>➥ ☢️ 2787 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integers, `n` and `x`. The problem asks you to find the number of ways to express `n` as the sum of the `x`th power of *unique* positive integers.

### Formally, you need to count the number of sets of unique integers `[n1, n2, ..., nk]` where:

`n = n1^x + n2^x + ... + nk^x`

### Because the result can potentially be very large, you need to return the count modulo 10<sup>9</sup> + 7 (1000000007).

### For instance, if `n = 160` and `x = 3`, one way to express `n` is `n = 2^3 + 3^3 + 5^3` (which is 8 + 27 + 125 = 160).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 10, x = 2

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ We can express n as the following: n = 3<sup>2</sup> + 1<sup>2</sup> = 10.
It can be shown that it is the only way to express 10 as the sum of the 2nd power of unique integers.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, x = 1

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ We can express n in the following ways:

- n = 4<sup>1</sup> = 4
- n = 3<sup>1</sup> + 1<sup>1</sup> = 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 300 </br>

🔹 1 <= x <= 5 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/12%20-%2008%20-%202025%20---%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/12%20-%2008%20-%202025%20---%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/12%20-%2008%20-%202025%20---%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/12%20-%2008%20-%202025%20---%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202787.%20Ways%20to%20Express%20an%20Integer%20as%20Sum%20of%20Powers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7b5e1949-9eb8-43e9-819a-7fdd21806c17" width = "700px" height="462px" />

</h1>
