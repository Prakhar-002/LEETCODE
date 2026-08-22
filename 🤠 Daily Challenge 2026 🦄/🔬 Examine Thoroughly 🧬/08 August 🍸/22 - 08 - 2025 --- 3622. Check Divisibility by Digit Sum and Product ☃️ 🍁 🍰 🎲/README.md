# 3622. Check Divisibility by Digit Sum and Product

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/?envType=daily-question&envId=2026-08-22"><strong>➥ ♻️ 3622 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n`. Determine whether `n` is divisible by the sum of the following two values:
- The digit sum of `n` (the sum of its digits).
- The digit product of `n` (the product of its digits).

### Return `true` if `n` is divisible by this sum; otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `n = 99`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ Since 99 is divisible by the sum (9 + 9 = 18) plus product (9 * 9 = 81) of its digits (total 99), the output is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 23`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation` ➤ ➺ Since 23 is not divisible by the sum (2 + 3 = 5) plus product (2 * 3 = 6) of its digits (total 11), the output is false.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 1`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ Digit sum is 1, digit product is 1. The total sum is 2, and 1 is not divisible by 2 (or for `n = 12`: sum = 3, prod = 2, total = 5, not divisible).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 10^6`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/22%20-%2008%20-%202025%20---%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/22%20-%2008%20-%202025%20---%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/22%20-%2008%20-%202025%20---%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/22%20-%2008%20-%202025%20---%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203622.%20Check%20Divisibility%20by%20Digit%20Sum%20and%20Produc.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/6da5c9f8-d1b0-4f8d-926d-959c431b7b9d" width = "700px" height="462px" />

</h1>
