# 1052. Grumpy Bookstore Owner

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/grumpy-bookstore-owner/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1052 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a bookstore owner that has a store open for `n` minutes. Every minute, some number of customers enter the store. You are given an integer array `customers` of length n where `customers[i]` is the number of the customer that enters the store at the start of the `ith` minute and all those customers leave after the end of that minute.

### On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy where `grumpy[i]` is `1` if the bookstore owner is grumpy during the `ith` minute, and is `0` otherwise.

### When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise, they are satisfied.

### The bookstore owner knows a secret technique to keep themselves not grumpy for `minutes` consecutive minutes, but can only use it once.

### *Return the maximum number of customers that can be satisfied throughout the day*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3

  ### Output  ➤ 16

  ### Explanation  ➤ The bookstore owner keeps themselves not grumpy for the last 3 minutes. The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ customers = [1], grumpy = [0], minutes = 1

  ### Output  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == customers.length == grumpy.length**
- **1 <= minutes <= n <= 2 * 10^4**
- **0 <= customers[i] <= 1000**
- **`grumpy[i]` is either `0` or `1`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Sliding Window**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/21%20-%2006%20-%202024%20---%201052.%20Grumpy%20Bookstore%20Owner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1052_GrumpyBookstoreOwner.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/21%20-%2006%20-%202024%20---%201052.%20Grumpy%20Bookstore%20Owner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_1052_GrumpyBookstoreOwner.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/21%20-%2006%20-%202024%20---%201052.%20Grumpy%20Bookstore%20Owner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1052_GrumpyBookstoreOwner.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/21%20-%2006%20-%202024%20---%201052.%20Grumpy%20Bookstore%20Owner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1052_GrumpyBookstoreOwner.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/21%20-%2006%20-%202024%20---%201052.%20Grumpy%20Bookstore%20Owner%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_1052_GrumpyBookstoreOwner.c)  |

