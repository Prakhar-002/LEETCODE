# 2438. Range Product Queries of Powers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/range-product-queries-of-powers/description/?envType=daily-question&envId=2025-08-11"><strong>➥ ☢️ 2438 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n`. You must first determine the *minimum* number of powers of 2 that sum up to equal `n`. Arrange these powers of 2 into a sorted (non-decreasing) array called `powers`. Crucially, there must be *only one* way to create this `powers` array for a given `n`.

### You are then given a 0-indexed 2D integer array `queries`, where each query is defined as `queries[i] = [lefti, righti]`. Each query asks you to find the product of all elements in the `powers` array from index `lefti` to `righti` (inclusive).

### Your task is to return an array `answers` of the same length as `queries`. Each `answers[i]` should represent the answer to the i<sup>th</sup> query, where you compute the product modulo 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 15, queries = [[0,1],[2,2],[0,3]]

  ### 📤 `Output`  ➤ [2,4,64]

  ### 🔦 `Explanation`  ➤
For n = 15, powers = [1,2,4,8]. It can be shown that powers cannot be a smaller size.

- Answer to 1st query: powers[0] * powers[1] = 1 * 2 = 2.
- Answer to 2nd query: powers[2] = 4.
- Answer to 3rd query: powers[0] * powers[1] * powers[2] * powers[3] = 1 * 2 * 4 * 8 = 64.

Each answer modulo 10<sup>9</sup> + 7 yields the same answer, so [2,4,64] is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2, queries = [[0,0]]

  ### 📤 `Output`  ➤ [2]

  ### 🔦 `Explanation`  ➤
For n = 2, powers = [2].
The answer to the only query is powers[0] = 2. The answer modulo 10<sup>9</sup> + 7 is the same, so [2] is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10<sup>9</sup> </br>

🔹 1 <= queries.length <= 10<sup>5</sup> </br>

🔹 0 <= starti <= endi < powers.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/11%20-%2008%20-%202025%20---%202438.%20Range%20Product%20Queries%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202438.%20Range%20Product%20Queries%20of%20Powers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/11%20-%2008%20-%202025%20---%202438.%20Range%20Product%20Queries%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202438.%20Range%20Product%20Queries%20of%20Powers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/11%20-%2008%20-%202025%20---%202438.%20Range%20Product%20Queries%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202438.%20Range%20Product%20Queries%20of%20Powers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/11%20-%2008%20-%202025%20---%202438.%20Range%20Product%20Queries%20of%20Powers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202438.%20Range%20Product%20Queries%20of%20Powers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4dcef0b4-3b37-4984-848b-c92219e3dd2f" width = "700px" height="462px" />

</h1>
